/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>

@class PLCFNotificationOperatorComposition, PLEntryNotificationOperatorComposition, NSString;

@interface PLWifiAgent : PLAgent {

	PLCFNotificationOperatorComposition* _notificationWiFiChanged;
	WiFiManagerClientRef _wifiManager;
	WiFiDeviceClientRef _wifiDevice;
	PLEntryNotificationOperatorComposition* _batteryLevelChanged;
	PLEntryNotificationOperatorComposition* _deviceWake;
	unsigned _lastLoggedTimestamp;
	unsigned _locationScanDuration;
	unsigned _pipelineScanDuration;
	unsigned _autoJoinScanDuration;
	unsigned _setupScanDuration;
	unsigned _unknownScanDuration;
	NSString* _wifiChipset;
	NSString* _wifiManufacturer;

}

@property (readonly) PLCFNotificationOperatorComposition * notificationWiFiChanged;              //@synthesize notificationWiFiChanged=_notificationWiFiChanged - In the implementation block
@property (assign,nonatomic) WiFiManagerClientRef wifiManager;                                   //@synthesize wifiManager=_wifiManager - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef wifiDevice;                                     //@synthesize wifiDevice=_wifiDevice - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;                 //@synthesize batteryLevelChanged=_batteryLevelChanged - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * deviceWake;                          //@synthesize deviceWake=_deviceWake - In the implementation block
@property (assign) unsigned lastLoggedTimestamp;                                                 //@synthesize lastLoggedTimestamp=_lastLoggedTimestamp - In the implementation block
@property (assign) unsigned locationScanDuration;                                                //@synthesize locationScanDuration=_locationScanDuration - In the implementation block
@property (assign) unsigned pipelineScanDuration;                                                //@synthesize pipelineScanDuration=_pipelineScanDuration - In the implementation block
@property (assign) unsigned autoJoinScanDuration;                                                //@synthesize autoJoinScanDuration=_autoJoinScanDuration - In the implementation block
@property (assign) unsigned setupScanDuration;                                                   //@synthesize setupScanDuration=_setupScanDuration - In the implementation block
@property (assign) unsigned unknownScanDuration;                                                 //@synthesize unknownScanDuration=_unknownScanDuration - In the implementation block
@property (readonly) NSString * wifiChipset;                                                     //@synthesize wifiChipset=_wifiChipset - In the implementation block
@property (readonly) NSString * wifiManufacturer;                                                //@synthesize wifiManufacturer=_wifiManufacturer - In the implementation block
+(void)load;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionWake;
+(id)entryEventForwardDefinitionModuleInfo;
+(id)entryEventForwardDefinitionRSSI;
+(id)entryEventForwardDefinitionAvailability;
+(id)entryEventBackwardDefinitionCumulativeBasic;
+(id)entryEventBackwardDefinitionDiffBasic;
+(id)entryEventBackwardDefinitionUserScan;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)batteryLevelChanged;
-(WiFiManagerClientRef)wifiManager;
-(void)findWifiDevice;
-(WiFiDeviceClientRef)wifiDevice;
-(void)logEventForwardModuleInfo;
-(void)setWifiDevice:(WiFiDeviceClientRef)arg1 ;
-(void)setWifiManager:(WiFiManagerClientRef)arg1 ;
-(void)logEventPointWake;
-(void)logonAPSleep;
-(void)setDeviceWake:(PLEntryNotificationOperatorComposition *)arg1 ;
-(char)hasWiFi;
-(char)isWowSupported;
-(void)logEventBackwardWifiProperties;
-(void)logEventBackwardUserScanDuration;
-(char)isWiFiPowered;
-(void)logEventPointWakeDataFrame:(id)arg1 withParams:(id)arg2 toEntry:(id)arg3 ;
-(void)logEventPointWakePNO:(id)arg1 withParams:(id)arg2 toEntry:(id)arg3 ;
-(void)logEventPointWakeLink:(id)arg1 withParams:(id)arg2 toEntry:(id)arg3 ;
-(id)decodeWifiEventLinkReason:(unsigned long)arg1 ;
-(unsigned)getCurrentChannelWidth:(WiFiNetworkRef)arg1 ;
-(void)logEventBackwardWifiProperties:(id)arg1 withNetworkProperties:(id)arg2 ;
-(char)isWowEnabled;
-(void)modelWiFiPower:(id)arg1 ;
-(id)railWiFi;
-(id)wifiChipsetQuery;
-(id)wifiManufacturerQuery;
-(NSString *)wifiChipset;
-(NSString *)wifiManufacturer;
-(void)logEventForwardAvailability:(id)arg1 ;
-(void)logEventForwardRSSI:(id)arg1 ;
-(void)logEventBackwardCumulativeProperties;
-(void)logEventBackwardDiffProperties;
-(void)updateEventBackwardUserScanDuration:(id)arg1 ;
-(PLCFNotificationOperatorComposition *)notificationWiFiChanged;
-(PLEntryNotificationOperatorComposition *)deviceWake;
-(unsigned)lastLoggedTimestamp;
-(void)setLastLoggedTimestamp:(unsigned)arg1 ;
-(unsigned)locationScanDuration;
-(void)setLocationScanDuration:(unsigned)arg1 ;
-(unsigned)pipelineScanDuration;
-(void)setPipelineScanDuration:(unsigned)arg1 ;
-(unsigned)autoJoinScanDuration;
-(void)setAutoJoinScanDuration:(unsigned)arg1 ;
-(unsigned)setupScanDuration;
-(void)setSetupScanDuration:(unsigned)arg1 ;
-(unsigned)unknownScanDuration;
-(void)setUnknownScanDuration:(unsigned)arg1 ;
@end

