//
//  PlayerError.m
//  uPlayer
//
//  Created by liaogang on 15/3/13.
//  Copyright (c) 2015年 liaogang. All rights reserved.
//

#import "PlayerError.h"

NSString *const NSPlayerErrorDomain = @"com.smine";

@implementation PlayerError

+(instancetype)errorNoSuchFile:(NSString*)path
{
    NSDictionary *userInfo = @{
                               NSLocalizedDescriptionKey: [NSString stringWithFormat:@"%@\n%@",NSLocalizedString(@"File no found", nil) , path] };
    
    return  [PlayerError errorWithDomain:NSPlayerErrorDomain code:PlayerNoSuchFileError userInfo:userInfo];
}

+(instancetype)errorConfigVersionDismatch
{
    NSDictionary *userInfo = @{
                               NSLocalizedDescriptionKey: NSLocalizedString(@"Config Version Dismatch",nil) };
    
    return  [PlayerError errorWithDomain:NSPlayerErrorDomain code:PlayerConfigVersionDismatchError userInfo:userInfo];
}

@end
