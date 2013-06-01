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

@property (nonatomic, readonly) SPRectangle *frame;
@property (nonatomic, readonly) float width;
@property (nonatomic, readonly) float height;
@property (nonatomic, readonly) BOOL premultipliedAlpha;

- (void)adjustVertexData:(SPVertexData *)vertexData atIndex:(int)index numVertices:(int)count;

@end
