//
//  BLCMediaFullScreenAnimator.h
//  Blocstagram
//
//  Created by Scott Halford on 5/23/16.
//  Copyright © 2016 Scott Halford. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BLCMediaFullScreenAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, assign) BOOL presenting;
@property (nonatomic, weak) UIImageView *cellImageView;

@end