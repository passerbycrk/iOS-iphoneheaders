/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <identityservicesd/IDSPushHandlerDelegate.h>

@class NSMutableArray, NSArray, NSData, NSString;

@interface IDSInvitationPushHandler : NSObject <IDSPushHandlerDelegate> {

	NSMutableArray* _handlers;
	NSArray* _topics;
	char _registeredForPush;
	char _isListening;

}

@property (nonatomic,readonly) NSData * pushToken; 
@property (assign,nonatomic) char registered; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandToHandlerBlock;
-(char)registered;
-(void)setRegistered:(char)arg1 ;
-(void)dealloc;
-(id)initWithTopics:(id)arg1 ;
-(id)_pushTopics;
-(id)copyHandlersForEnumerating;
-(void)_updateListenerIfNeeded;
-(void)_acceptIncomingPushes;
-(void)_ignoreIncomingPushes;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(NSData *)pushToken;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 ;
@end

