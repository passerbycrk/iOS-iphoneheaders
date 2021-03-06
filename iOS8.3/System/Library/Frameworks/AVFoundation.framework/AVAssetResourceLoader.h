/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:31:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/NSURLAuthenticationChallengeSender.h>

@class AVAssetResourceLoaderInternal, NSString;

@interface AVAssetResourceLoader : NSObject <NSURLAuthenticationChallengeSender> {

	AVAssetResourceLoaderInternal* _resourceLoader;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<AVAssetResourceLoaderDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
-(id)_weakReference;
-(void)_cancelRequestWithKey:(id)arg1 requestDictionary:(id)arg2 fallbackHandler:(/*^block*/id)arg3 ;
-(void)_poseAuthenticationChallengeWithKey:(id)arg1 data:(id)arg2 requestDictionary:(id)arg3 fallbackHandler:(/*^block*/id)arg4 ;
-(void)_issueLoadingRequestWithKey:(id)arg1 requestDictionary:(id)arg2 fallbackHandler:(/*^block*/id)arg3 ;
-(id)stateQueue;
-(void)_performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:(id)arg1 delegateCallbackBlock:(/*^block*/id)arg2 ;
-(void)_performDelegateSelector:(SEL)arg1 withObject:(id)arg2 representingNewRequest:(char)arg3 key:(id)arg4 fallbackHandler:(/*^block*/id)arg5 ;
-(void)_noteFinishingOfRequest:(id)arg1 ;
-(void)_rejectChallenge:(id)arg1 withError:(id)arg2 ;
-(void)cacheContentInformation:(id)arg1 forURL:(id)arg2 ;
-(id)cachedContentInformationForURL:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<AVAssetResourceLoaderDelegate>)arg1 ;
-(id)init;
-(id<AVAssetResourceLoaderDelegate>)delegate;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(id)initWithAsset:(id)arg1 ;
-(id)asset;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)finalize;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)cancelLoading;
@end

