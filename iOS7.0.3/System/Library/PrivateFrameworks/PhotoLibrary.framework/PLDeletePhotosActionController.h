/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>

@protocol PLDeletePhotosActionControllerDelegate;
@class UIActionSheet, NSArray, PLPhotoLibrary;

@interface PLDeletePhotosActionController : NSObject <UIActionSheetDelegate> {

	UIActionSheet* _actionSheet;
	NSArray* _additionalAssetsToDelete;
	/*^block*/ id _completionHandler;
	/*^block*/ id _deleteCompletionHandler;
	int _actionSheetStyle;
	BOOL _deleteDuplicates;
	PLPhotoLibrary* _photoLibrary;
	NSArray* _assets;
	<PLDeletePhotosActionControllerDelegate>* _delegate;

}

@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary;                                  //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) NSArray * assets;                                               //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) BOOL deleteDuplicates;                                          //@synthesize deleteDuplicates=_deleteDuplicates - In the implementation block
@property (assign,nonatomic) <PLDeletePhotosActionControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int actionSheetStyle; 
+(id)_usedElsewhereWarningTextForAssetCount:(int)arg1 inPhotoStreamCount:(int)arg2 iniPhotoCount:(int)arg3 inSomeAlbumCount:(int)arg4 affectedLocalAlbumsCount:(int)arg5 itemKindSuffix:(id)arg6 actualDeletionCount:(int)arg7 ;
+(id)allUsedElsewhereMessageCombinations;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)setActionSheetStyle:(int)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(int)actionSheetStyle;
-(void)showInView:(id)arg1 deleteCompletionHandler:(/*^block*/ id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)redisplayFromObject:(id)arg1 animated:(BOOL)arg2 ;
-(id)_cloudSharedWarningTextForAssets:(id)arg1 ;
-(id)_avalancheDeleteWarningForAssets:(id)arg1 actualDeletionCount:(int*)arg2 ;
-(id)_usedElsewhereWarningTextForAssets:(id)arg1 additionalPhotoStreamAssets:(id)arg2 actualDeletionCount:(int)arg3 ;
-(void)_getDeleteActionSheetTitle:(id*)arg1 destructiveButtonTitle:(id*)arg2 cancelButtonTitle:(id*)arg3 forAssets:(id)arg4 additionalPhotoStreamAssets:(id)arg5 ;
-(void)_setupActionSheet;
-(BOOL)deleteDuplicates;
-(id)assets;
-(id)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 assets:(id)arg2 deleteDuplicates:(BOOL)arg3 ;
-(void)showFromObject:(id)arg1 animated:(BOOL)arg2 deleteCompletionHandler:(/*^block*/ id)arg3 completionHandler:(/*^block*/ id)arg4 ;
@end

