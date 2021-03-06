/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AFUIRequestOptions, NSMapTable;

@interface AFUIRequestTrigger : NSObject {

	AFUIRequestOptions* _options;
	long long _state;
	NSMapTable* _observers;

}

@property (nonatomic,readonly) AFUIRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long state;                           //@synthesize state=_state - In the implementation block
-(long long)state;
-(AFUIRequestOptions *)options;
-(id)initWithRequestOptions:(id)arg1 updateHandle:(/*^block*/id*)arg2 ;
-(void)addTriggerTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeTriggerTarget:(id)arg1 ;
-(void)_updateState:(long long)arg1 ;
@end

