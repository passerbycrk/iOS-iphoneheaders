/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/SpringFactory.h>

@interface ScrollSpringFactory : SpringFactory {

	double _initialVelocity;

}

@property (assign,nonatomic) double initialVelocity;              //@synthesize initialVelocity=_initialVelocity - In the implementation block
+(id)sharedFactory;
-(void)setInitialVelocity:(double)arg1 ;
-(double)initialVelocity;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
@end
