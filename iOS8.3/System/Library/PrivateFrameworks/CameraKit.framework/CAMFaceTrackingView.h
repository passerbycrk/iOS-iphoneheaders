/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:53:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CAMFocusView.h>

@interface CAMFaceTrackingView : CAMFocusView {

	char _isInFrame;

}

@property (assign,nonatomic) char isInFrame;              //@synthesize isInFrame=_isInFrame - In the implementation block
-(id)init;
-(void)fadeOut;
-(void)fadeIn;
-(double)fadeOutDuration;
-(void)_loadImagesWithColor:(id)arg1 imageSize:(CGSize*)arg2 ;
-(id)_createContentsAnimation;
-(id)_createBoundsAnimation;
-(void)setIsInFrame:(char)arg1 ;
-(char)isInFrame;
-(void)animateToFrame:(CGRect)arg1 ;
@end

