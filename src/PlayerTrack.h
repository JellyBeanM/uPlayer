//
//  UPlayer.m
//  uPlayer
//
//  Created by liaogang on 15/1/27.
//  Copyright (c) 2015年 liaogang. All rights reserved.
//


#import <Foundation/Foundation.h>

@class PlayerList;

@interface TrackInfo: NSObject
@property (nonatomic,strong) NSString *artist,*title,*album,*genre,*year;
@property (nonatomic,strong)NSString *path;

-(int)uuid;
@end


@interface PlayerTrack : NSObject
@property (nonatomic) int index;
@property (nonatomic,strong) TrackInfo *info;

///
//
/// value not need to searialize.
@property (nonatomic,weak) PlayerList *list;

-(instancetype)init:(PlayerList*)list;
@end




#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */
   
    
    TrackInfo* getId3Info(NSString *filename);
    
    NSArray* enumAudioFiles(NSString* path);
    

    
    
#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */


