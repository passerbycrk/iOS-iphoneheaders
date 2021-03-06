/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SpringBoard/SBCCButtonModuleDelegate.h>
#import <SpringBoard/SBUIControlCenterButtonDelegate.h>

@protocol SBCCButtonControllerDelegate;
@class SBCCButtonModule, NSString;

@interface SBCCButtonController : UIViewController <SBCCButtonModuleDelegate, SBUIControlCenterButtonDelegate> {

	id<SBCCButtonControllerDelegate> _delegate;
	SBCCButtonModule* _module;

}

@property (nonatomic,retain) id<SBCCButtonControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBCCButtonModule * module;                              //@synthesize module=_module - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)glyphImageForState:(int)arg1 ;
-(SBCCButtonModule *)module;
-(id)initWithModule:(id)arg1 ;
-(void)buttonModuleStateDidChange:(id)arg1 ;
-(void)buttonModulePropertiesDidChange:(id)arg1 ;
-(void)setModule:(SBCCButtonModule *)arg1 ;
-(void)_updateButtonProperties;
-(void)_updateButtonState;
-(void)dealloc;
-(void)setDelegate:(id<SBCCButtonControllerDelegate>)arg1 ;
-(id<SBCCButtonControllerDelegate>)delegate;
-(id)view;
-(void)buttonTapped:(id)arg1 ;
-(void)viewDidLoad;
@end

