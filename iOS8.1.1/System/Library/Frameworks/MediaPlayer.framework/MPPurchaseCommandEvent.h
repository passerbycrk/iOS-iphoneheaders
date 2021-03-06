/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSNumber, NSString;

@interface MPPurchaseCommandEvent : MPRemoteCommandEvent {

	long long _type;
	NSNumber* _trackID;
	NSString* _stationHash;
	NSNumber* _stationID;

}

@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSNumber * trackID;                  //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) NSString * stationHash;              //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,readonly) NSNumber * stationID;                //@synthesize stationID=_stationID - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(NSString *)stationHash;
-(NSNumber *)stationID;
-(long long)type;
-(NSNumber *)trackID;
@end

