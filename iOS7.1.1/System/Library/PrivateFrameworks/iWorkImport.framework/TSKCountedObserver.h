/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSUWeakReference;

@interface TSKCountedObserver : NSObject {

	TSUWeakReference* mWeakObserver;
	unsigned long long mCount;

}
-(unsigned long long)decrementCount;
-(unsigned long long)incrementCount;
-(void)dealloc;
-(id)observer;
-(id)initWithObserver:(id)arg1 ;
@end

