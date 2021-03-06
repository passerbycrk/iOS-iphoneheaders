/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:37 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPQueueFeeder.h>

@class NSArray;

@interface MPArrayQueueFeeder : MPQueueFeeder {

	NSArray* _queueItems;

}

@property (nonatomic,readonly) NSArray * items; 
-(id)copyRawItemAtIndex:(unsigned)arg1 ;
-(id)playbackInfoAtIndex:(unsigned)arg1 ;
-(id)pathAtIndex:(unsigned)arg1 ;
-(void)dealloc;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 ;
-(unsigned)itemCount;
@end

