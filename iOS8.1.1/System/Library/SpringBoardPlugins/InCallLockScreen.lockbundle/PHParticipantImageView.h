/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/SpringBoardPlugins/InCallLockScreen.lockbundle/InCallLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InCallLockScreen/InCallLockScreen-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface PHParticipantImageView : UIView {

	UIImage* _image;

}

@property (nonatomic,copy) UIImage * image;              //@synthesize image=_image - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(CGSize)intrinsicContentSize;
-(id)initWithDefaultSize;
@end

