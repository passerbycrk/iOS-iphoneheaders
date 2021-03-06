/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDAutoscrollDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSObject, NSTimer;

@interface TSDAutoscroll : NSObject {

	NSObject*<TSDAutoscrollDelegate> mTarget;
	CGPoint mPoint;
	int mDirections;
	double mRepeatInterval;
	NSTimer* mTimer;
	unsigned long long mCount;
	BOOL mActive;
	CGPoint mLastAutoscrollDelta;
	double mLastFired;

}

@property (assign,nonatomic) NSObject*<TSDAutoscrollDelegate> target; 
@property (assign,nonatomic) CGPoint point; 
@property (assign,nonatomic) int directions; 
@property (assign,nonatomic) double repeatInterval; 
@property (assign,nonatomic) unsigned long long count; 
@property (assign,nonatomic) BOOL active; 
@property (nonatomic,readonly) CGPoint lastAutoscrollDelta; 
+(void)startAutoscroll:(id)arg1 unscaledPoint:(CGPoint)arg2 ;
-(BOOL)startAutoscroll:(id)arg1 unscaledPoint:(CGPoint)arg2 directions:(int)arg3 repeatInterval:(double)arg4 ;
-(unsigned long long)p_deltaForCount:(unsigned long long)arg1 ;
-(CGPoint)lastAutoscrollDelta;
-(void)dealloc;
-(unsigned long long)count;
-(void)invalidate;
-(void)setTarget:(NSObject*<TSDAutoscrollDelegate>)arg1 ;
-(void)setRepeatInterval:(double)arg1 ;
-(NSObject*<TSDAutoscrollDelegate>)target;
-(void)setCount:(unsigned long long)arg1 ;
-(BOOL)active;
-(int)directions;
-(CGPoint)point;
-(void)timerFired:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(double)repeatInterval;
-(void)setPoint:(CGPoint)arg1 ;
-(void)setDirections:(int)arg1 ;
@end

