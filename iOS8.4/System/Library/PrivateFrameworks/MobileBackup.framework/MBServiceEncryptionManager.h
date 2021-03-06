/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class MBServiceSettingsContext, MBService, MBServiceCache, NSData, MBKeyBag;

@interface MBServiceEncryptionManager : NSObject {

	MBServiceSettingsContext* _settingsContext;
	MBService* _service;
	MBServiceCache* _cache;
	BOOL _suppressAuthorization;
	NSData* _keybagUUID;

}

@property (nonatomic,readonly) MBKeyBag * keybag; 
@property (nonatomic,readonly) NSData * keybagUUID; 
@property (assign,nonatomic) BOOL suppressAuthorization;              //@synthesize suppressAuthorization=_suppressAuthorization - In the implementation block
-(MBKeyBag *)keybag;
-(id)loadRestoreKeyBagsByIDWithError:(id*)arg1 ;
-(BOOL)removeRestoreKeyBagsWithError:(id*)arg1 ;
-(BOOL)setupBackupWithPasscode:(id)arg1 userInitiated:(BOOL)arg2 keybagID:(unsigned*)arg3 error:(id*)arg4 ;
-(BOOL)tearDownBackupWithError:(id*)arg1 ;
-(void)keybagIsLocking;
-(void)keybagIsUnlocked;
-(NSData *)keybagUUID;
-(void)setSuppressAuthorization:(BOOL)arg1 ;
-(BOOL)rollKeyBagWithKeyBagID:(unsigned*)arg1 forEngine:(id)arg2 error:(id*)arg3 ;
-(id)keysetForBackupUDID:(id)arg1 lastModified:(long long*)arg2 userInitiated:(BOOL)arg3 willVerifyCredentialsCallback:(/*^block*/id)arg4 error:(id*)arg5 ;
-(id)initWithEngine:(id)arg1 ;
-(id)keysetForBackupUDID:(id)arg1 lastModified:(long long*)arg2 userInitiated:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)saveRestoreKeyBagDatasByID:(id)arg1 secret:(id)arg2 error:(id*)arg3 ;
-(BOOL)suppressAuthorization;
-(BOOL)_registerKeyBag:(id)arg1 withID:(unsigned)arg2 passcode:(id)arg3 error:(id*)arg4 ;
-(void)_findMissingEncryptionKeys;
-(void)_exportKeychain;
-(void)dealloc;
-(id)initWithSettingsContext:(id)arg1 ;
@end

