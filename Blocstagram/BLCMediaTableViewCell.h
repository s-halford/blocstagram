//
//  BLCMediaTableViewCell.h
//  Blocstagram
//
//  Created by Scott Halford on 5/15/16.
//  Copyright © 2016 Scott Halford. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCMedia;
@interface BLCMediaTableViewCell : UITableViewCell

@property (nonatomic, strong) BLCMedia *mediaItem;

+ (CGFloat) heightForMediaItem:(BLCMedia *)mediaItem width:(CGFloat)width;

@end
