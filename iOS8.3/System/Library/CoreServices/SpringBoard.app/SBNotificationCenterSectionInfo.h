/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:17 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBBBSectionInfo.h>

@class SBItemInfoLayoutCache, SBBulletinListSection;

@interface SBNotificationCenterSectionInfo : SBBBSectionInfo {

	SBItemInfoLayoutCache* _layoutCache;
	/*^block*/id _clearPossibleAction;
	/*^block*/id _clearAction;

}

@property (nonatomic,readonly) SBBulletinListSection * representedListSection; 
@property (nonatomic,copy) id clearPossibleAction;                                          //@synthesize clearPossibleAction=_clearPossibleAction - In the implementation block
@property (nonatomic,copy) id clearAction;                                                  //@synthesize clearAction=_clearAction - In the implementation block
-(SBBulletinListSection *)representedListSection;
-(void)invalidateCachedLayoutData;
-(float)heightForReusableViewForBulletinViewController:(id)arg1 layoutMode:(int)arg2 bulletinLocation:(int)arg3 ;
-(char)shouldSuppressBulletinMessageForPrivacy:(id)arg1 ;
-(void)populateReusableView:(id)arg1 ;
-(id)clearPossibleAction;
-(void)setClearPossibleAction:(id)arg1 ;
-(id)clearAction;
-(void)setClearAction:(id)arg1 ;
-(void)dealloc;
-(id)identifier;
-(Class)reusableViewClass;
@end

