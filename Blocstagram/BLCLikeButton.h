//
//  BLCLikeButton.h
//  Blocstagram
//
//  Created by Scott Halford on 5/28/16.
//  Copyright © 2016 Scott Halford. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, BLCLikeState) {
    BLCLikeStateNotLiked             = 0,
    BLCLikeStateLiking               = 1,
    BLCLikeStateLiked                = 2,
    BLCLikeStateUnliking             = 3
};


@interface BLCLikeButton : UIButton

@property (nonatomic, assign) BLCLikeState likeButtonState;

@end
