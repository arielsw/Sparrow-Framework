//
//  ISPBitmapFontTexture.h
//  Sparrow
//
//  Created by Ariel on 2013-06-14.
//
//

#import <Foundation/Foundation.h>
#import "ISPImageTexture.h"
#import "ISPSubTextureTexture.h"

@protocol ISPBitmapFontTexture <NSObject, ISPImageTexture, ISPSubTextureTexture>

- (float)scale;
- (SPTextureSmoothing)smoothing;
- (void)setSmoothing:(SPTextureSmoothing)smoothing;

@end
