/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:39:10 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AMSBTLEPeripheral;

@interface CABTMIDIIncompleteConnectionInfo : NSObject {

	char _connecting;
	unsigned _timeOutInterval;
	AMSBTLEPeripheral* _peripheral;

}

@property (getter=isConnecting) char connecting;                          //@synthesize connecting=_connecting - In the implementation block
@property (assign) unsigned timeOutInterval;                              //@synthesize timeOutInterval=_timeOutInterval - In the implementation block
@property (nonatomic,retain) AMSBTLEPeripheral * peripheral;              //@synthesize peripheral=_peripheral - In the implementation block
-(void)setTimeOutInterval:(unsigned)arg1 ;
-(id)initWithPeripheral:(id)arg1 isConnecting:(char)arg2 ;
-(unsigned)timeOutInterval;
-(AMSBTLEPeripheral *)peripheral;
-(void)setPeripheral:(AMSBTLEPeripheral *)arg1 ;
-(char)isConnecting;
-(void)setConnecting:(char)arg1 ;
@end

