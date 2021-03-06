/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MBDriveSettingsContext, MBDomainManager;

@interface MBBackupHelper : NSObject {

	MBDriveSettingsContext* _settingsContext;
	MBDomainManager* _domainManager;

}
+(id)errorForException:(id)arg1 ;
+(id)driveReadError:(id)arg1 description:(id)arg2 ;
+(id)driveWriteError:(id)arg1 description:(id)arg2 ;
-(id)initWithSettingsContext:(id)arg1 domainManager:(id)arg2 ;
-(id)readStatusWithError:(id*)arg1 ;
-(id)readBackupManifestWithError:(id*)arg1 ;
-(id)readSnapshotPropertiesWithError:(id*)arg1 ;
-(id)readBackupPropertiesWithError:(id*)arg1 ;
-(id)readSnapshotDatabaseWithError:(id*)arg1 ;
-(id)readBackupDatabaseWithError:(id*)arg1 ;
-(id)readSnapshotManifestWithError:(id*)arg1 ;
-(void)dealloc;
@end

