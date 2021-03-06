/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface BKSEventFocusManager : NSObject {

	char _needsFlush;
	char _systemAppControlsFocusOnMainDisplay;
	NSMutableSet* _currentState;
	NSMutableSet* _pendingState;

}

@property (nonatomic,readonly) NSMutableSet * currentState;                         //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) NSMutableSet * pendingState;                         //@synthesize pendingState=_pendingState - In the implementation block
@property (assign,nonatomic) char needsFlush;                                       //@synthesize needsFlush=_needsFlush - In the implementation block
@property (assign,nonatomic) char systemAppControlsFocusOnMainDisplay;              //@synthesize systemAppControlsFocusOnMainDisplay=_systemAppControlsFocusOnMainDisplay - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)flush;
-(NSMutableSet *)currentState;
-(void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 ;
-(char)needsFlush;
-(void)setNeedsFlush:(char)arg1 ;
-(void)_pruneSet:(id)arg1 ofDeferralsPassingTest:(/*^block*/id)arg2 ;
-(NSMutableSet *)pendingState;
-(void)setSystemAppControlsFocusOnMainDisplay:(char)arg1 ;
-(char)systemAppControlsFocusOnMainDisplay;
-(void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2 ;
@end

