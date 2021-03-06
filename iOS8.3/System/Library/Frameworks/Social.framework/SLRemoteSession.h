/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:10:50 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, SLDatabase;

@interface SLRemoteSession : NSObject {

	NSXPCConnection* _connection;
	SLDatabase* _database;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) SLDatabase * database;                     //@synthesize database=_database - In the implementation block
-(SLDatabase *)database;
-(void)setDatabase:(SLDatabase *)arg1 ;
-(id)initWithConnection:(id)arg1 database:(id)arg2 ;
-(char)clientHasEntitlement:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

