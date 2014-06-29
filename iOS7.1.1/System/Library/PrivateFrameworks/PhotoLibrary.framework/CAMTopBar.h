/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>
#import <PhotoLibrary/CAMFlashButtonDelegate.h>
#import <PhotoLibrary/CAMHDRButtonDelegate.h>

@protocol CAMTopBarDelegate;
@class CAMFlashButton, CAMElapsedTimeView, CAMHDRButton, CAMFlipButton, UIView;

@interface CAMTopBar : UIView <CAMFlashButtonDelegate, CAMHDRButtonDelegate> {

	bool __flashButtonExpanded;
	bool __HDRButtonExpanded;
	long long _style;
	long long _backgroundStyle;
	<CAMTopBarDelegate>* _delegate;
	CAMFlashButton* _flashButton;
	CAMElapsedTimeView* _elapsedTimeView;
	CAMHDRButton* _HDRButton;
	CAMFlipButton* _flipButton;
	long long _orientation;
	UIView* __backgroundView;

}

@property (assign,nonatomic) long long style;                                                                                      //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                                                                            //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic) <CAMTopBarDelegate> * delegate;                                                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CAMFlashButton * flashButton;                                                                         //@synthesize flashButton=_flashButton - In the implementation block
@property (nonatomic,retain) CAMElapsedTimeView * elapsedTimeView;                                                                 //@synthesize elapsedTimeView=_elapsedTimeView - In the implementation block
@property (nonatomic,retain) CAMHDRButton * HDRButton;                                                                             //@synthesize HDRButton=_HDRButton - In the implementation block
@property (nonatomic,retain) CAMFlipButton * flipButton;                                                                           //@synthesize flipButton=_flipButton - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                                //@synthesize orientation=_orientation - In the implementation block
@property (getter=isFloating,nonatomic,readonly) bool floating; 
@property (nonatomic,readonly) UIView * _backgroundView;                                                                           //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (assign,setter=_setFlashButtonExpanded:,getter=_isFlashButtonExpanded,nonatomic) bool _flashButtonExpanded;              //@synthesize _flashButtonExpanded=__flashButtonExpanded - In the implementation block
@property (assign,setter=_setHDRButtonExpanded:,getter=_isHDRButtonExpanded,nonatomic) bool _HDRButtonExpanded;                    //@synthesize _HDRButtonExpanded=__HDRButtonExpanded - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(id)_backgroundView;
-(void)setStyle:(long long)arg1 ;
-(long long)orientation;
-(long long)style;
-(void)setStyle:(long long)arg1 animated:(bool)arg2 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 animated:(bool)arg2 ;
-(bool)isFloating;
-(void)_updateBackgroundStyleAnimated:(bool)arg1 ;
-(void)setFlipButton:(id)arg1 ;
-(void)setElapsedTimeView:(id)arg1 ;
-(void)setHDRButton:(id)arg1 ;
-(id)flipButton;
-(id)elapsedTimeView;
-(id)HDRButton;
-(void)flashButtonModeDidChange:(id)arg1 ;
-(void)flashButtonWasPressed:(id)arg1 ;
-(void)flashButtonWillExpand:(id)arg1 ;
-(void)flashButtonDidCollapse:(id)arg1 ;
-(id)flashButton;
-(void)HDRButtonModeDidChange:(id)arg1 ;
-(void)HDRButtonWasPressed:(id)arg1 ;
-(void)HDRButtonWillExpand:(id)arg1 ;
-(void)HDRButtonDidCollapse:(id)arg1 ;
-(void)setFlashButton:(id)arg1 ;
-(void)_commonCAMTopBarInitialization;
-(void)_layoutDefaultStyle;
-(void)_layoutFloatingStyle;
-(void)_layoutFloatingRecordingStyle;
-(void)_updateStyleAnimated:(bool)arg1 ;
-(void)_updateHiddenViewsForButtonExpansionAnimated:(bool)arg1 ;
-(bool)_shouldHideFlashButton;
-(bool)_shouldHideElapsedTimeView;
-(bool)_shouldHideHDRButton;
-(bool)_shouldHideFlipButton;
-(bool)_isFlashButtonExpanded;
-(bool)_buttonsExpandHorizontally;
-(bool)_isHDRButtonExpanded;
-(UIEdgeInsets)_backgroundEdgeInsetsForStyle:(long long)arg1 ;
-(void)_setFlashButtonExpanded:(bool)arg1 ;
-(void)_setHDRButtonExpanded:(bool)arg1 ;
@end
