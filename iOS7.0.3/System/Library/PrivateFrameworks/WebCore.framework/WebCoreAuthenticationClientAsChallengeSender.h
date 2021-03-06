/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <Foundation/NSURLAuthenticationChallengeSender.h>

@interface WebCoreAuthenticationClientAsChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {

	AuthenticationClient* m_client;
	CFURLAuthChallengeRef m_cfChallenge;

}
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(id)initWithAuthenticationClient:(AuthenticationClient*)arg1 ;
-(AuthenticationClient*)client;
-(void)detachClient;
-(void)setCFChallenge:(CFURLAuthChallengeRef)arg1 ;
-(CFURLAuthChallengeRef)cfChallenge;
@end

