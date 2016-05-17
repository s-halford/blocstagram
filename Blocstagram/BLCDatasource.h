//
//  BLCDatasource.h
//  Blocstagram
//
//  Created by Scott Halford on 5/14/16.
//  Copyright © 2016 Scott Halford. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class BLCMedia;

@interface BLCDatasource : NSObject

 +(instancetype) sharedInstance;
@property (nonatomic, strong, readonly) NSArray *mediaItems;

 - (void) deleteMediaItem:(BLCMedia *)item;

@end
