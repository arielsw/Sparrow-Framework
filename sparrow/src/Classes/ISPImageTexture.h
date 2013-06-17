//
//  ISPImageTexture.h
//  Sparrow
//
//  Created by Ariel on 2013-05-31.
//
//

#import <Foundation/Foundation.h>
#import "ISPQuadTexture.h"

@class SPVertexData;
@class SPRectangle;

@protocol ISPImageTexture <NSObject, ISPQuadTexture>

- (SPRectangle *)frame;
- (float)width;
- (float)height;
- (BOOL)premultipliedAlpha;
- (void)adjustVertexData:(SPVertexData *)vertexData atIndex:(int)index numVertices:(int)count;

@end
