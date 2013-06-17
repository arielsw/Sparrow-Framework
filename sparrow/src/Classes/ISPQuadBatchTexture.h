//
//  ISPQuadBatchTexture.h
//  Sparrow
//
//  Created by Ariel on 2013-05-31.
//
//

#import <Foundation/Foundation.h>
#import "ISPBaseEffectTexture.h"
#import "TSPTextureSmoothing.h"

@protocol ISPQuadBatchTexture <NSObject, ISPBaseEffectTexture>

- (BOOL)repeat;
- (SPTextureSmoothing)smoothing;

@end
