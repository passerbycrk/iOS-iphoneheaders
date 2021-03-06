/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/nsnetworkd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol NDBackgroundSessionManagerProtocol <NSObject>
@required
-(void)boost:(/*^block*/ id)arg1;
-(void)dropBoost;
-(void)createSessionWithConfiguration:(id)arg1 clientProxy:(id)arg2 cachesDirectory:(id)arg3 reply:(/*^block*/ id)arg4;
-(void)sendPendingCallbacksForIdentifier:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)releaseAssertionForSession:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)okayToSendPendingCallbacksForIdentifier:(id)arg1 reply:(/*^block*/ id)arg2;
@end

