/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISURLOperation.h>

@class NSNumber;

@interface ISStoreURLOperation : ISURLOperation {

	NSNumber* _authenticatedDSID;
	bool _canSendGUIDParameter;
	bool _ignorePreexistingSecureToken;
	bool _needsAuthentication;
	bool _needsURLBag;
	bool _performsMachineDataActions;
	bool _shouldSendXTokenHeader;
	bool _urlKnownToBeTrusted;
	bool _useUserSpecificURLBag;

}

@property (@dynamic) <ISStoreURLOperationDelegate> * delegate; 
@property (assign) bool canSendGUIDParameter; 
@property (assign) bool needsURLBag;                                         //@synthesize needsURLBag=_needsURLBag - In the implementation block
@property (assign) bool needsAuthentication;                                 //@synthesize needsAuthentication=_needsAuthentication - In the implementation block
@property (assign) bool performsMachineDataActions; 
@property (assign) bool shouldSendXTokenHeader; 
@property (assign) bool useUserSpecificURLBag;                               //@synthesize useUserSpecificURLBag=_useUserSpecificURLBag - In the implementation block
@property (assign) bool urlKnownToBeTrusted;                                 //@synthesize urlKnownToBeTrusted=_urlKnownToBeTrusted - In the implementation block
@property (assign,nonatomic) bool ignorePreexistingSecureToken; 
@property (retain) NSNumber * authenticatedDSID;                             //@synthesize authenticatedDSID=_authenticatedDSID - In the implementation block
+(void)_addITunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 accountIdentifier:(id)arg3 ;
+(id)_restrictionsHeaderValue;
+(id)propertyListOperationWithURLBagKey:(id)arg1 ;
+(id)pingOperationWithUrl:(id)arg1 ;
+(void)addITunesStoreHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2 ;
+(void)handleITunesStoreResponseHeaders:(id)arg1 withAccountIdentifier:(id)arg2 ;
+(id)itemPingOperationWithIdentifier:(unsigned long long)arg1 urlBagKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(void)handleResponse:(id)arg1 ;
-(void)_setStoreFrontIdentifier:(id)arg1 isTransient:(bool)arg2 ;
-(id)_copyAuthenticationContext;
-(bool)handleRedirectFromDataProvider:(id)arg1 error:(id*)arg2 ;
-(bool)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2 ;
-(void)setNeedsURLBag:(bool)arg1 ;
-(bool)_canSendTokenToURL:(id)arg1 ;
-(id)_copyURLBagContext;
-(id)_urlBagForContext:(id)arg1 ;
-(bool)canSendGUIDParameter;
-(bool)shouldSendXTokenHeader;
-(id)_account;
-(bool)ignorePreexistingSecureToken;
-(id)_copyAuthenticationContextForAttemptNumber:(long long)arg1 ;
-(bool)_authenticateWithContext:(id)arg1 error:(id*)arg2 ;
-(void)_runURLOperation;
-(bool)_isErrorTokenError:(id)arg1 ;
-(void)setIgnorePreexistingSecureToken:(bool)arg1 ;
-(bool)urlKnownToBeTrusted;
-(bool)useUserSpecificURLBag;
-(bool)needsURLBag;
-(id)_resolvedURLInBagContext:(id)arg1 URLBag:(id*)arg2 ;
-(void)_addStandardQueryParametersForURL:(id)arg1 ;
-(bool)performsMachineDataActions;
-(void)setCanSendGUIDParameter:(bool)arg1 ;
-(void)setPerformsMachineDataActions:(bool)arg1 ;
-(void)setShouldSendXTokenHeader:(bool)arg1 ;
-(void)setUseUserSpecificURLBag:(bool)arg1 ;
-(id)authenticatedAccountDSID;
-(bool)needsAuthentication;
-(void)setNeedsAuthentication:(bool)arg1 ;
-(void)setUrlKnownToBeTrusted:(bool)arg1 ;
-(id)newRequestWithURL:(id)arg1 ;
-(id)authenticatedDSID;
-(void)setAuthenticatedDSID:(id)arg1 ;
@end

