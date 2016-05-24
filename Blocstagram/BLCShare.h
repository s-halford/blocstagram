//
//  BLCShare.h
//  Blocstagram
//
//  Created by Scott Halford on 5/24/16.
//  Copyright © 2016 Scott Halford. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BLCShare : NSObject
    + (void)share:(UIViewController *)view withCaption:(NSString *)caption withImage:(UIImage *)image;
@end
