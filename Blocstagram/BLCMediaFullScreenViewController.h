//
//  BLCMediaFullScreenViewController.h
//  Blocstagram
//
//  Created by Scott Halford on 5/23/16.
//  Copyright © 2016 Scott Halford. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCMedia;

@interface BLCMediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;

- (instancetype) initWithMedia:(BLCMedia *)media;

- (void) centerScrollView;

@end
