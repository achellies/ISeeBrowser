// Copyright 2008, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

// Helper methods for Skia SVG rendering, inspired by CgSupport.*



#include "config.h"
#if ENABLE(SVG)
#include "SkiaSupport.h"

#include "GraphicsContext.h"
#include "RenderStyle.h"
#include "RenderPath.h"
#include "SVGPaintServer.h"
#include "SVGRenderStyle.h"

#include "SkiaUtils.h"
#include "SkDashPathEffect.h"

namespace WebCore {

void applyStrokeStyleToContext(GraphicsContext* context, const RenderStyle* style, const RenderObject* object)
{
    const SVGRenderStyle* svgStyle = style->svgStyle();
    
    context->setStrokeThickness(SVGRenderStyle::cssPrimitiveToLength(object, svgStyle->strokeWidth(), 1.0));

    context->setLineCap(svgStyle->capStyle());
    context->setLineJoin(svgStyle->joinStyle());

    if(svgStyle->joinStyle() == MiterJoin) {
        context->setMiterLimit(svgStyle->strokeMiterLimit());
    }

    const DashArray& dashes = WebCore::dashArrayFromRenderingStyle(style);
    double dashOffset = SVGRenderStyle::cssPrimitiveToLength(object, style->svgStyle()->strokeDashOffset(), 0.0);

    unsigned int dashLength = !dashes.isEmpty() ? dashes.size() : 0;
    if(dashLength) {
        unsigned int count = (dashLength % 2) == 0 ? dashLength : dashLength * 2;
        SkScalar* intervals = new SkScalar[count];

        for(unsigned int i = 0; i < count; i++)
            intervals[i] = dashes[i % dashLength];

        context->platformContext()->setDashPathEffect(new SkDashPathEffect(intervals, count, dashOffset));

        delete[] intervals;
    }
}

GraphicsContext* scratchContext()
{
    static GraphicsContext* scratch = NULL;
    if (!scratch) {
        scratch = GraphicsContext::createOffscreenContext(1, 1);
     }
    return scratch;
}

FloatRect strokeBoundingBox(const Path& path, RenderStyle* style, const RenderObject* object)
 {
     GraphicsContext* scratch = scratchContext();

     scratch->save();
     applyStrokeStyleToContext(scratch, style, object);
     FloatRect bbox = scratch->getPathBoundingBox(path);
     scratch->restore();

     return bbox;
}

}

#endif // ENABLE(SVG)
