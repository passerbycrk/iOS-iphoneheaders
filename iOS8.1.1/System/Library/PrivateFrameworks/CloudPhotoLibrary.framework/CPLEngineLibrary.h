/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLAbstractObject.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, NSHashTable, NSError, CPLStatus, CPLPlatformObject, NSURL, NSString, CPLEngineStore, CPLEngineScheduler, CPLEngineSyncManager, CPLEngineTransport, CPLStatistics, CPLEngineSystemMonitor, CPLConfiguration, NSDate;

@interface CPLEngineLibrary : NSObject <CPLAbstractObject> {

	NSArray* _components;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _attachedObjects;
	NSError* _openingError;
	CPLStatus* _status;
	BOOL _closed;
	CPLPlatformObject* _platformObject;
	NSURL* _clientLibraryBaseURL;
	NSURL* _cloudLibraryStateStorageURL;
	NSURL* _cloudLibraryResourceStorageURL;
	NSString* _libraryIdentifier;
	CPLEngineStore* _store;
	CPLEngineScheduler* _scheduler;
	CPLEngineSyncManager* _syncManager;
	CPLEngineTransport* _transport;
	CPLStatistics* _statistics;
	CPLEngineSystemMonitor* _systemMonitor;
	CPLConfiguration* _configuration;

}

@property (nonatomic,copy,readonly) NSURL * clientLibraryBaseURL;                        //@synthesize clientLibraryBaseURL=_clientLibraryBaseURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * cloudLibraryStateStorageURL;                 //@synthesize cloudLibraryStateStorageURL=_cloudLibraryStateStorageURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * cloudLibraryResourceStorageURL;              //@synthesize cloudLibraryResourceStorageURL=_cloudLibraryResourceStorageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * libraryIdentifier;                        //@synthesize libraryIdentifier=_libraryIdentifier - In the implementation block
@property (nonatomic,readonly) CPLEngineStore * store;                                   //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) CPLEngineScheduler * scheduler;                           //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) CPLEngineSyncManager * syncManager;                       //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,readonly) CPLEngineTransport * transport;                           //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) CPLStatistics * statistics;                               //@synthesize statistics=_statistics - In the implementation block
@property (nonatomic,readonly) CPLEngineSystemMonitor * systemMonitor;                   //@synthesize systemMonitor=_systemMonitor - In the implementation block
@property (nonatomic,readonly) CPLConfiguration * configuration;                         //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL hasChangesToProcess; 
@property (assign,nonatomic) BOOL isExceedingQuota; 
@property (assign,nonatomic) BOOL iCloudLibraryHasBeenWiped; 
@property (assign,nonatomic) BOOL iCloudLibraryExists; 
@property (nonatomic,retain) NSDate * exitDeleteTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;                       //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
-(void)getListOfComponentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusArrayForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CPLEngineStore *)store;
-(NSString *)description;
-(id)componentName;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(CPLConfiguration *)configuration;
-(CPLEngineScheduler *)scheduler;
-(NSURL *)cloudLibraryResourceStorageURL;
-(CPLPlatformObject *)platformObject;
-(NSURL *)clientLibraryBaseURL;
-(void)notifyAttachedObjectsSizeOfResourcesToUploadDidChangeToSize:(unsigned long long)arg1 numberOfImages:(unsigned long long)arg2 numberOfVideos:(unsigned long long)arg3 numberOfOtherItems:(unsigned long long)arg4 ;
-(void)setHasChangesToProcess:(BOOL)arg1 ;
-(NSString *)libraryIdentifier;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CPLStatistics *)statistics;
-(void)notifyAttachedObjectsUploadTaskDidStart:(id)arg1 ;
-(void)notifyAttachedObjectsUploadTask:(id)arg1 didProgress:(float)arg2 ;
-(void)notifyAttachedObjectsUploadTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(CPLEngineTransport *)transport;
-(void)setIsExceedingQuota:(BOOL)arg1 ;
-(void)setExitDeleteTime:(NSDate *)arg1 ;
-(BOOL)iCloudLibraryHasBeenWiped;
-(void)setICloudLibraryHasBeenWiped:(BOOL)arg1 ;
-(BOOL)iCloudLibraryExists;
-(void)setICloudLibraryExists:(BOOL)arg1 ;
-(CPLEngineSyncManager *)syncManager;
-(CPLEngineSystemMonitor *)systemMonitor;
-(void)notifyAttachedObjectsPullQueueIsFull;
-(void)updateLastSuccessfullSyncDate:(id)arg1 ;
-(void)reportUnsuccessfulSync;
-(void)notifyAttachedObjectsResourceDidDowloadInBackground:(id)arg1 ;
-(void)notifyAttachedObjectsResourceDidFailBackgroundDownloadOfResource:(id)arg1 ;
-(void)updateAssetCountsFromServer:(id)arg1 ;
-(NSURL *)cloudLibraryStateStorageURL;
-(void)_openNextComponent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_closeNextComponent:(id)arg1 deactivate:(BOOL)arg2 lastError:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_performBlockWithLibrary:(BOOL)arg1 enumerateAttachedObjects:(/*^block*/id)arg2 ;
-(void)attachObject:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)detachObject:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 ;
-(void)startSyncSession;
-(BOOL)isExceedingQuota;
-(BOOL)hasChangesToProcess;
-(NSDate *)exitDeleteTime;
@end

