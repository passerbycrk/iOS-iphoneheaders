/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SKUIRedeemCameraViewDelegate;
@class UIView, SKUIRedeemTextField, UIImage, NSString;

@interface SKUIFullscreenRedeemCameraView : UIView <UITextFieldDelegate> {

	<SKUIRedeemCameraViewDelegate>* _delegate;
	UIView* _overlay;
	UIView* _redeemerView;
	SKUIRedeemTextField* _textField;
	CGRect _keyboardRect;
	bool _enabled;

}

@property (assign,nonatomic,__weak) <SKUIRedeemCameraViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool enabled; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * text; 
-(void)textFieldTextDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)image;
-(void)setEnabled:(bool)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(bool)textFieldShouldReturn:(id)arg1 ;
-(void)keyboardDidShow:(id)arg1 ;
-(void)keyboardDidHide:(id)arg1 ;
-(void)start;
-(void)showKeyboard;
-(bool)enabled;
-(void).cxx_destruct;
-(id)_newTextFieldWithClientContext:(id)arg1 ;
-(void)_tapGestureAction:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)_pauseRedeemer;
-(void)_hideKeyboard;
-(void)_resumeRedeemer;
-(id)initWithClientContext:(id)arg1 ;
@end

