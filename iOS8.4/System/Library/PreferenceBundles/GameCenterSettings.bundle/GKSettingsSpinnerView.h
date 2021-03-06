/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/GameCenterSettings.bundle/GameCenterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <GameCenterSettings/PSHeaderFooterView.h>

@class PSSpecifier, UIActivityIndicatorView;

@interface GKSettingsSpinnerView : UIView <PSHeaderFooterView> {

	PSSpecifier* _specifier;
	UIActivityIndicatorView* _spinnerView;

}

@property (nonatomic,readonly) PSSpecifier * specifier; 
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(PSSpecifier *)specifier;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(UIActivityIndicatorView *)spinnerView;
@end

