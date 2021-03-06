/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardCandidateView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIKeyboardCandidateBarDelegate.h>

@class UIKeyboardCandidatePageControl;

@interface UIKeyboardCandidateView_iPad : UIKeyboardCandidateView <UICollectionViewDelegate, UIKeyboardCandidateBarDelegate> {

	UIKeyboardCandidatePageControl* _pageControl;

}
+(float)defaultExtendedControlHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)_clipCornersOfView:(id)arg1 ;
-(void)setCandidateViewExtended:(BOOL)arg1 ;
-(void)didEndSplitTransition;
-(void)candidateBarDidScroll:(id)arg1 ;
-(void)updatePageControlStatus;
-(unsigned)_numberOfColumns:(BOOL)arg1 ;
-(float)_additionalClipHeight;
-(float)rightButtonYOffset;
@end

