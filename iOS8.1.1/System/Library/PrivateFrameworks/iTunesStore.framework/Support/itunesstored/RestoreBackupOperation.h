/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/MBManagerDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSString, NSObject;

@interface RestoreBackupOperation : ISOperation <MBManagerDelegate> {

	NSString* _bundleID;
	BOOL _isFailed;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (readonly) NSString * bundleIdentifier; 
@property (getter=isFailed,readonly) BOOL failed; 
+(BOOL)cancelApplicationRestoresWithBundleIDs:(id)arg1 ;
+(BOOL)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id*)arg2 ;
+(BOOL)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long*)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 isFailed:(BOOL)arg2 ;
-(BOOL)isFailed;
-(void)cancel;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)run;
-(void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3 ;
-(void)managerDidFinishBackup:(id)arg1 ;
-(void)managerDidFinishRestore:(id)arg1 ;
-(void)manager:(id)arg1 didFailBackupWithError:(id)arg2 ;
-(void)manager:(id)arg1 didFailRestoreWithError:(id)arg2 ;
-(void)managerDidLoseConnectionToService:(id)arg1 ;
@end

