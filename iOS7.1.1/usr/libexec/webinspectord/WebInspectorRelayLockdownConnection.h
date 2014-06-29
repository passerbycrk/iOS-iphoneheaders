/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/webinspectord
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <webinspectord/webinspectord-Structs.h>
#import <webinspectord/WebInspectorRelayConnection.h>

@class NSThread, NSMutableData;

@interface WebInspectorRelayLockdownConnection : WebInspectorRelayConnection {

	NSThread* _readThread;
	lockdown_connectionRef _connection;
	NSMutableData* _incomingData;

}

@property (nonatomic,retain) NSThread * readThread;                          //@synthesize readThread=_readThread - In the implementation block
@property (assign,nonatomic) lockdown_connectionRef connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * incomingData;                   //@synthesize incomingData=_incomingData - In the implementation block
+(id)connectionFromLockdownCheckinWithInfo:(void*)arg1 delegate:(id)arg2 ;
-(id)initWithLockdownConnection:(lockdown_connectionRef)arg1 delegate:(id)arg2 ;
-(void)readFromService;
-(id)readThread;
-(void)setReadThread:(id)arg1 ;
-(id)incomingData;
-(void)setIncomingData:(id)arg1 ;
-(void)dealloc;
-(lockdown_connectionRef)connection;
-(void)startListening;
-(void)setConnection:(lockdown_connectionRef)arg1 ;
-(void)sendMessage:(id)arg1 ;
@end
