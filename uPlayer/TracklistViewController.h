//
//  TracklistViewController.h
//  uPlayer
//
//  Created by liaogang on 15/1/27.
//  Copyright (c) 2015年 liaogang. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface TracklistViewController : NSViewController

-(void)filterTable:(NSString*)key;

@end


@interface NSTracklistView : NSView

@end
