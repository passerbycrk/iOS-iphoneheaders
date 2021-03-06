/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class MPImageCache, MPImageCacheRequest;

@interface MPUCollectionViewCell : UICollectionViewCell {

	MPImageCache* _imageCache;
	MPImageCacheRequest* _imageRequest;

}

@property (nonatomic,retain) MPImageCache * imageCache;                       //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) MPImageCacheRequest * imageRequest;              //@synthesize imageRequest=_imageRequest - In the implementation block
-(id)imageCache;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setArtworkImage:(id)arg1 ;
-(void)setImageRequest:(id)arg1 ;
-(id)imageRequest;
-(void).cxx_destruct;
-(void)setImageCache:(id)arg1 ;
@end

