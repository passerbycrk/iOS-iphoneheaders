/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class UIImageView, UIImage;

@interface UIAlertButton : UIButton {

	double _imageOffset;
	bool _isNewStyle;
	UIImageView* _highlightView;

}

@property (assign,nonatomic) double imageOffset;                    //@synthesize imageOffset=_imageOffset - In the implementation block
@property (readonly) UIImageView * highlightView;                   //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) UIImage * highlightImage; 
@property (assign,nonatomic) bool isNewStyle;                       //@synthesize isNewStyle=_isNewStyle - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)image;
-(void)_focusStateDidChange;
-(bool)_isFocusableElement;
-(void)setEnabled:(bool)arg1 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)initWithTitle:(id)arg1 ;
-(id)title;
-(void)setHighlighted:(bool)arg1 ;
-(id)highlightView;
-(void)setIsNewStyle:(bool)arg1 ;
-(void)setImageOffset:(double)arg1 ;
-(void)setHighlightImage:(id)arg1 ;
-(void)_transitionHighlightViewToHighlighted:(bool)arg1 ;
-(id)highlightImage;
-(double)imageOffset;
-(bool)isNewStyle;
@end
