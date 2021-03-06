/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:49:31 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface BKSEventFocusManager : NSObject {

	char _needsFlush;
	char _systemAppControlsFocusOnMainDisplay;
	NSMutableSet* _currentState;
	NSMutableDictionary* _pendingStatesByPriority;

}

@property (nonatomic,readonly) NSMutableSet * currentState;                                //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingStatesByPriority;              //@synthesize pendingStatesByPriority=_pendingStatesByPriority - In the implementation block
@property (assign,nonatomic) char needsFlush;                                              //@synthesize needsFlush=_needsFlush - In the implementation block
@property (assign,nonatomic) char systemAppControlsFocusOnMainDisplay;                     //@synthesize systemAppControlsFocusOnMainDisplay=_systemAppControlsFocusOnMainDisplay - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)flush;
-(NSMutableSet *)currentState;
-(void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 ;
-(char)needsFlush;
-(void)setNeedsFlush:(char)arg1 ;
-(void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 withPriority:(int)arg3 ;
-(void)_pruneSet:(id)arg1 ofDeferralsPassingTest:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)pendingStatesByPriority;
-(void)reallyFlushWithSet:(id)arg1 ;
-(void)setSystemAppControlsFocusOnMainDisplay:(char)arg1 ;
-(char)systemAppControlsFocusOnMainDisplay;
-(void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2 ;
@end

