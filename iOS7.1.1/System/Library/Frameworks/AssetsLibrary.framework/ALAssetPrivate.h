/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssetsLibrary/ALAssetsLibraryAsset.h>

@class ALAssetsLibrary, PLManagedAsset, PLPhotoLibrary;

@interface ALAssetPrivate : NSObject <ALAssetsLibraryAsset> {

	ALAssetsLibrary* _library;
	bool _isValid;
	PLManagedAsset* _photo;
	PLPhotoLibrary* _photoLibrary;

}

@property (assign,nonatomic) ALAssetsLibrary * library; 
@property (assign,nonatomic) bool isValid;                                     //@synthesize isValid=_isValid - In the implementation block
@property (getter=isDeletable,nonatomic,readonly) bool deletable; 
@property (nonatomic,retain) PLManagedAsset * photo;                           //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * _photoLibrary;                   //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(id)initWithManagedAsset:(id)arg1 library:(id)arg2 ;
-(void)libraryDidChange;
-(void)set_photoLibrary:(id)arg1 ;
-(void)dealloc;
-(bool)isValid;
-(void)setIsValid:(bool)arg1 ;
-(id)library;
-(void)setLibrary:(id)arg1 ;
-(id)photo;
-(void)setPhoto:(id)arg1 ;
-(id)_photoLibrary;
-(void)_performBlockAndWait:(/*^block*/ id)arg1 ;
-(bool)isDeletable;
@end

