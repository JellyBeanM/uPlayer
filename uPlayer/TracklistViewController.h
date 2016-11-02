//
//  TracklistViewController.h
//  uPlayer
//
//  Created by liaogang on 15/1/27.
//  Copyright (c) 2015年 liaogang. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "windowController.h"

@interface TracklistViewController : NSViewController

-(void)filterTable:(NSString*)key;

@property (nonatomic,strong) WindowController *w;

@property (nonatomic) BOOL tableHeaderHidden;

@end


@interface NSTracklistView : NSView

@end

BOOL loadValueTableHeaderHidden();
