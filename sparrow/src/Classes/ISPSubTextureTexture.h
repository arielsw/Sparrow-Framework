//
//  ISPSubTextureTexture.h
//  Sparrow
//
//  Created by Ariel on 2013-06-17.
//
//

#import <Foundation/Foundation.h>
#import "TSPTextureSmoothing.h"

@protocol ISPSubTextureTexture <NSObject>

@property (nonatomic, readonly) float width;
@property (nonatomic, readonly) float height;
@property (nonatomic, readonly) uint name;
@property (nonatomic) BOOL repeat;
@property (nonatomic) SPTextureSmoothing smoothing;
@property (nonatomic, readonly) BOOL premultipliedAlpha;
@property (nonatomic, readonly) float scale;

@end
