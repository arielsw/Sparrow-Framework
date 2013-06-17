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

- (float)width;
- (float)height;
- (uint)name;
- (BOOL)repeat;
- (void)setRepeat:(BOOL)repeat;
- (SPTextureSmoothing)smoothing;
- (void)setSmoothing:(SPTextureSmoothing)smoothing;
- (BOOL)premultipliedAlpha;
- (float)scale;

@end
