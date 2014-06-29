/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDKnobTracker.h>

@interface TSDButtonKnobTracker : TSDKnobTracker {

	id mTarget;
	SEL mAction;

}

@property (assign,nonatomic) id target; 
@property (assign,nonatomic) SEL action; 
-(id)initWithRep:(id)arg1 knob:(id)arg2 ;
-(void)endMovingKnob;
-(bool)shouldHideSelectionHighlight;
-(void)moveKnobToRepPosition:(CGPoint)arg1 ;
-(bool)shouldHideOtherKnobs;
-(bool)operationShouldBeDynamic;
-(bool)allowHUDToDisplay;
-(bool)p_knobContainsCurrentPosition;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
@end
