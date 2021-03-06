/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:47:55 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TUCallServicesDaemonObserver
@required
-(void)handleCallModelStateChanged:(id)arg1;
-(void)handleCallStatusChangedForProxyCall:(id)arg1;
-(void)handleWantsHoldMusicChangedTo:(char)arg1 forCallWithUUID:(id)arg2;
-(void)handleEndpointOnCurrentDeviceChangedTo:(char)arg1 forCallWithUUID:(id)arg2;
-(void)handleDisconnectedReasonChangedTo:(int)arg1 forCallWithUUID:(id)arg2;
-(void)handleShouldSuppressRingtoneChangedTo:(char)arg1 forCallWithUUID:(id)arg2;
-(void)handleLocalFrequencyChangedTo:(id)arg1;
-(void)handleRemoteFrequencyChangedTo:(id)arg1;
-(void)handleMutedChangedTo:(char)arg1;
-(void)handleHardPauseDigitsAvailibilityChangedTo:(unsigned short)arg1 digits:(id)arg2;
-(void)handleCallContinuityStateChangedForProxyCall:(id)arg1;
-(void)handleCurrentProxyCallsChanged:(id)arg1;

@end

