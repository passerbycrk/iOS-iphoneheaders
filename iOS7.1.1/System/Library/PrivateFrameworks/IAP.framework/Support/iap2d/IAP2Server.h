/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:37 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
#import <iap2d/iap2d-Structs.h>
@class NSString, NSObject, IAPXPCConnection;

@interface IAP2Server : NSObject {

	CFRunLoopRef _serverRunLoop;
	struct {
		unsigned deathBecomesUs : 1;
		unsigned serverExiting : 1;
		unsigned reserved : 30;
	}  serverFlags;
	CFBooleanRef _activationState;
	CFStringRef _deviceClass;
	CFStringRef _deviceProductType;
	CFRunLoopTimerRef _sleepAssertionTimer;
	int _disableSleepAssertions;
	NSString* _dpFirmwareVersion;
	IONotificationPortRef _ioaccessoryNotifyPort;
	NSObject<OS_xpc_object>* _listener;
	IAPXPCConnection* _iaptransportd_connection;
	NSObject<OS_dispatch_queue>* _internalListenerQueue;

}

@property (nonatomic,copy) NSString * dpFirmwareVersion;                               //@synthesize dpFirmwareVersion=_dpFirmwareVersion - In the implementation block
@property (nonatomic,retain) IAPXPCConnection * iaptransportd_connection;              //@synthesize iaptransportd_connection=_iaptransportd_connection - In the implementation block
@property (assign,nonatomic) IONotificationPortRef ioaccessoryNotifyPort;              //@synthesize ioaccessoryNotifyPort=_ioaccessoryNotifyPort - In the implementation block
+(id)sharedIAP2Server;
+(void)sendAudioStateChangedNotification;
-(id)iaptransportd_connection;
-(void)stopServer:(int)arg1 ;
-(void)stopServer:(int)arg1 forceExitingImmediately:(BOOL)arg2 ;
-(void)_pollForDeathAfterPromptCompletes;
-(BOOL)isServerStopping;
-(BOOL)deviceActivated;
-(CFStringRef)deviceProductType;
-(void)preventIdleSleep:(int)arg1 ;
-(void)updateTransportListStates;
-(id)dpFirmwareVersion;
-(void)setDpFirmwareVersion:(id)arg1 ;
-(void)setIaptransportd_connection:(id)arg1 ;
-(IONotificationPortRef)ioaccessoryNotifyPort;
-(void)setIoaccessoryNotifyPort:(IONotificationPortRef)arg1 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(CFStringRef)deviceClass;
@end
