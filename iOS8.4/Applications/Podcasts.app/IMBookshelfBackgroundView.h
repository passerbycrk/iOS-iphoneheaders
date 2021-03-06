/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, IMBookshelfImageGenerator, IMLibraryTiledBackgroundView, IMBookshelfImageConfiguration, IMLibraryTileView;

@interface IMBookshelfBackgroundView : UIView {

	UIImageView* _topShelfImageView;
	CGPoint _offset;
	float _shelfHeight;
	char _useAlternateSize;
	IMBookshelfImageGenerator* _imageGenerator;
	IMLibraryTiledBackgroundView* _shelves;
	IMBookshelfImageConfiguration* _imageConfiguration;
	IMLibraryTileView* _topGradientView;

}

@property (assign,nonatomic) CGPoint offset;                     //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) char useAlternateSize;              //@synthesize useAlternateSize=_useAlternateSize - In the implementation block
-(id)initWithFrame:(CGRect)arg1 shelfHeight:(float)arg2 portraitSize:(CGSize)arg3 landscapeSize:(CGSize)arg4 ;
-(id)initWithFrame:(CGRect)arg1 shelfHeight:(float)arg2 portraitSize:(CGSize)arg3 landscapeSize:(CGSize)arg4 alternateSize:(CGSize)arg5 ;
-(id)initWithFrame:(CGRect)arg1 shelfHeight:(float)arg2 portraitSize:(CGSize)arg3 landscapeSize:(CGSize)arg4 alternateSize:(CGSize)arg5 imageConfiguration:(id)arg6 ;
-(void)_setupCommon;
-(id)initWithFrame:(CGRect)arg1 shelfHeight:(float)arg2 portraitSize:(CGSize)arg3 landscapeSize:(CGSize)arg4 imageConfiguration:(id)arg5 ;
-(char)useAlternateSize;
-(void)setUseAlternateSize:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
@end

