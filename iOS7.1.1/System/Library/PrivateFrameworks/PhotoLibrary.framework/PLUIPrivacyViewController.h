/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class _UIAccessDeniedView;

@interface PLUIPrivacyViewController : UIViewController {

	bool _showingAccessDeniedView;
	_UIAccessDeniedView* _accessDeniedView;

}
-(void)dealloc;
-(void)loadView;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_setImagePickerMediaTypes:(id)arg1 ;
-(void)_updateAccessDeniedView;
-(void)_showCancelButton;
-(void)_cancelButtonClicked:(id)arg1 ;
@end
