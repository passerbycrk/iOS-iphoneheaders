/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXHearingAidSupport/AXHearingAidSupport-Structs.h>
#import <AXHearingAidSupport/AXHARemoteController.h>
#import <AXHearingAidSupport/NSNetServiceDelegate.h>
#import <AXHearingAidSupport/AXHARemoteUpdateProtocol.h>

@class AXHATimer, AXRemoteHearingAidDevice, NSString;

@interface AXHearingSlaveController : AXHARemoteController <NSNetServiceDelegate, AXHARemoteUpdateProtocol> {

	CFSocketRef _ipv4socket;
	CFSocketRef _ipv6socket;
	AXHATimer* _resolveTimer;
	BOOL _isVisible;
	AXRemoteHearingAidDevice* _device;
	/*^block*/id _searchCompletion;

}

@property (nonatomic,retain) AXRemoteHearingAidDevice * device;              //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) id searchCompletion;                              //@synthesize searchCompletion=_searchCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceWillPublish:(id)arg1 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)initialize;
-(BOOL)setVisible:(BOOL)arg1 ;
-(void)writeValue:(id)arg1 forProperty:(long long)arg2 forDeviceID:(id)arg3 ;
-(void)updateProperty:(long long)arg1 forDeviceID:(id)arg2 ;
-(void)closeConnectionWithError:(id)arg1 ;
-(void)resolveMasterWithCompletion:(/*^block*/id)arg1 ;
-(void)openConnectionIfNecessary;
-(BOOL)isSlave;
-(void)validatePairedAid;
-(void)receivedData:(id)arg1 ;
-(void)acceptConnection:(int)arg1 ;
-(void)setSearchCompletion:(id)arg1 ;
-(id)searchCompletion;
-(void)resetConnection;
-(AXRemoteHearingAidDevice *)device;
-(void)setDevice:(AXRemoteHearingAidDevice *)arg1 ;
@end

