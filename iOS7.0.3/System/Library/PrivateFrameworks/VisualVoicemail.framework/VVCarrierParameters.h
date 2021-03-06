/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface VVCarrierParameters : NSObject {

	NSDictionary* _parameterValues;

}
+(id)carrierServiceName;
+(BOOL)supportsGreetingChanges;
+(BOOL)supportsPasswordChanges;
+(BOOL)ignoresRoamingSwitch;
+(id)messageNotificationFallbackTimeout;
+(id)retryIntervals;
+(BOOL)supportsDetachedStorage;
-(void)dealloc;
-(id)initForService:(id)arg1 ;
-(id)parameterValueForKey:(id)arg1 ;
-(void)_initForBundle:(id)arg1 ;
-(id)initForServiceBundleId:(id)arg1 ;
@end

