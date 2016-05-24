//
//  BLCShare.m
//  Blocstagram
//
//  Created by Scott Halford on 5/24/16.
//  Copyright © 2016 Scott Halford. All rights reserved.
//

#import "BLCShare.h"

@implementation BLCShare

+ (void)share:(UIViewController *)view withCaption:(NSString *)caption withImage:(UIImage *)image {
    NSMutableArray *itemsToShare = [NSMutableArray array];
    
    if (caption.length > 0) {
        [itemsToShare addObject:caption];
    }
    
    if (image) {
        [itemsToShare addObject:image];
    }
    
    if (itemsToShare.count > 0) {
        UIActivityViewController *activityVC = [[UIActivityViewController alloc] initWithActivityItems:itemsToShare applicationActivities:nil];
        [view presentViewController:activityVC animated:YES completion:nil];
    }
}

@end




