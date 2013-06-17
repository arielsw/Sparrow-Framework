//
//  ISPTextureAtlasTexture.h
//  Sparrow
//
//  Created by Ariel on 2013-06-17.
//
//

#import <Foundation/Foundation.h>
#import "ISPSubTextureTexture.h"

@protocol ISPTextureAtlasTexture <NSObject, ISPSubTextureTexture>

- (float)scale;

@end
