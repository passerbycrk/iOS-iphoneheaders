/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:22:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface GAXVerificationEventObject : NSObject {

	unsigned _event;
	double _delay;

}

@property (assign,nonatomic) unsigned event;                      //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) double delay;                        //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
-(void)setDelay:(double)arg1 ;
-(double)delay;
-(void)setEvent:(unsigned)arg1 ;
-(unsigned)event;
-(NSString *)eventName;
@end

