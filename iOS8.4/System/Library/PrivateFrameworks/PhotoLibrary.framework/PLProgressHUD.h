/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIActivityIndicatorView, UILabel, UIImageView;

@interface PLProgressHUD : UIView {

	_UIBackdropView* _backdropView;
	UIActivityIndicatorView* _activityIndicatorView;
	UILabel* _label;
	UIImageView* _checkmarkView;
	BOOL _isShowing;

}
-(void)hide;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setText:(id)arg1 ;
-(void)showInView:(id)arg1 ;
-(void)done;
@end

