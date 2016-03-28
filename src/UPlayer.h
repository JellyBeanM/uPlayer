//
//  UPlayer.m
//  uPlayer
//
//  Created by liaogang on 15/1/27.
//  Copyright (c) 2015年 liaogang. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PlayerTypeDefines.h"
#import "PlayerTrack.h"
#import "PlayerDocument.h"
#import "PlayerLayout.h"
#import "PlayerEngine.h"
#import "PlayerList.h"


@interface UPlayer : NSObject

@property (nonatomic,strong) PlayerDocument *document;
@property (nonatomic,strong) PlayerLayout *layout;
@property (nonatomic,strong) PlayerEngine *engine;

///save all config
-(void)save;

@property (nonatomic,strong) PlayerTrack *playing;
@end

@interface PlayerEngine (playTrack)
-(void)playTrackInfo:(PlayerTrack*)track pauseAfterInit:(BOOL)pfi;
@end





#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */
    
    UPlayer *player(); // the global and only instance.

    void playTrack(PlayerTrack *track);
    
    void playTrackPauseAfterInit(PlayerList *list,PlayerTrack *track);
    
    void collectInfo(PlayerDocument *d , PlayerEngine *e);
    
#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */
