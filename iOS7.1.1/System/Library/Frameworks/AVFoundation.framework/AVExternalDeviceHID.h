/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVExternalDeviceHIDInternal, NSString;

@interface AVExternalDeviceHID : NSObject {

	AVExternalDeviceHIDInternal* _externalDeviceHID;

}

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSString * screenID; 
@property (assign,nonatomic) long long inputMode; 
-(id)screenID;
-(id)_externalDevice;
-(id)_figEndpointHIDInputMode;
-(id)initWithExternalDeviceAndHIDDictionary:(id)arg1 hidDictionary:(id)arg2 ;
-(void)dealloc;
-(id)UUID;
-(void)setInputMode:(long long)arg1 ;
-(long long)inputMode;
-(void)finalize;
@end

