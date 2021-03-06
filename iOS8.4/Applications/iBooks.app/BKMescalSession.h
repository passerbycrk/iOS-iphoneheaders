/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBooks/iBooks-Structs.h>
@class NSMutableSet, NSArray;

@interface BKMescalSession : NSObject {

	NSMutableSet* _completionHandlers;
	void* _hwInfo;
	NSArray* _requestsToSign;
	void* _session;
	char __isSessionActive;
	char __isSessionSetupPending;

}

@property (nonatomic,readonly) char isSessionActive; 
@property (setter=_setIsSessionActive:) char _isSessionActive;                          //@synthesize _isSessionActive=__isSessionActive - In the implementation block
@property (setter=_setIsSessionSetupPending:) char _isSessionSetupPending;              //@synthesize _isSessionSetupPending=__isSessionSetupPending - In the implementation block
+(id)uniqueIdentifier;
+(id)sharedSession;
-(void)_sendCompletionHandlersWithSuccess:(char)arg1 ;
-(void)beginSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)_isSessionActive;
-(char)_isSessionSetupPending;
-(void)_setIsSessionSetupPending:(char)arg1 ;
-(void)_setIsSessionActive:(char)arg1 ;
-(void)_continueMescalSetupWithData:(id)arg1 setupURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)isSessionActive;
-(id)processSignedResponseData:(id)arg1 withSignature:(id)arg2 ;
-(char)shouldSignRequestAction:(id)arg1 ;
-(id)signatureForData:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)endSession;
-(char)_getHardwareInfo:(FairPlayHWInfo_*)arg1 ;
@end

