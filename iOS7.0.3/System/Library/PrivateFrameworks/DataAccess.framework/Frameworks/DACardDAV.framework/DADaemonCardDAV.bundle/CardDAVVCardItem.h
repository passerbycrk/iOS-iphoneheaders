/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DADaemonCardDAV.bundle/DADaemonCardDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVLeafDataPayload.h>
#import <DADaemonCardDAV/DADataElement.h>

@class NSURL, NSData, NSString, NSArray, NSNumber, NSMutableDictionary;

@interface CardDAVVCardItem : NSObject <CoreDAVLeafDataPayload, DADataElement> {

	NSURL* _serverID;
	NSNumber* _clientID;
	NSString* _syncKey;
	void* _abRecord;
	unsigned _abRecordType;
	NSData* _dataPayload;
	NSMutableDictionary* _uuidToPersonCache;

}

@property (retain) NSURL * serverID;                                               //@synthesize serverID=_serverID - In the implementation block
@property (retain) NSNumber * clientID;                                            //@synthesize clientID=_clientID - In the implementation block
@property (readonly) NSData * dataPayload;                                         //@synthesize dataPayload=_dataPayload - In the implementation block
@property (readonly) void* abRecord;                                               //@synthesize abRecord=_abRecord - In the implementation block
@property (readonly) unsigned abRecordType;                                        //@synthesize abRecordType=_abRecordType - In the implementation block
@property (readonly) NSString * syncKey;                                           //@synthesize syncKey=_syncKey - In the implementation block
@property (assign,nonatomic) NSMutableDictionary * UUIDToPersonCache;              //@synthesize uuidToPersonCache=_uuidToPersonCache - In the implementation block
@property (readonly) NSArray * childrenOrder; 
-(void)dealloc;
-(void*)abRecord;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5 ;
-(id)dataPayload;
-(void*)createOrphanedABRecordFromParsedVCardOutRecordType:(unsigned*)arg1 ;
-(unsigned)abRecordType;
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 containerURL:(id)arg3 shouldMergeProperties:(BOOL)arg4 outMergeDidChooseLocalProperties:(BOOL*)arg5 account:(id)arg6 shouldSaveGroups:(BOOL)arg7 ;
-(id)initWithABRecord:(void*)arg1 outNeedsDBSave:(BOOL*)arg2 maxImageSize:(int)arg3 maxResourceSize:(int)arg4 inContainerWithURL:(id)arg5 ;
-(void)setUUIDToPersonCache:(id)arg1 ;
-(BOOL)saveIfGroupWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(id)UUIDToPersonCache;
-(void)setServerID:(id)arg1 ;
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(void)setLocalItem:(void*)arg1 ;
-(BOOL)loadLocalItemWithAccount:(id)arg1 ;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)deleteFromContainer:(void*)arg1 ;
-(void)loadClientIDs;
-(id)convertToDAContactSearchResultElement;
-(id)serverID;
-(id)syncKey;
-(void)setClientID:(id)arg1 ;
-(id)clientID;
@end

