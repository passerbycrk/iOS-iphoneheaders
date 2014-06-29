/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MainViewController <NSObject>
@optional
-(void)updateBackButtonToDate:(id)arg1;
-(float)leftBarButtonBlankFixedSpaceWidth;
-(void)updatePalette:(id)arg1;
-(id)bestDateForNewEvent;
-(id)toolBarTintColor;
-(int)supportedToggleMode;
-(void)updateNavigationBarDisplayedDateString;
-(void)invalidateBackButtonDate;
-(BOOL)shouldUpdateOwnBackButtonWhenTopViewController;
-(id)updateBackButtonWhileTopViewControllerToDate:(id)arg1;
-(void)enableGestureRecognizers;
-(void)disableGestureRecognizers;
-(id)navigationBarDisplayedDateString;
-(id)navigationBarTintColor;

@required
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3;
-(void)selectDate:(id)arg1 animated:(BOOL)arg2;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2;
-(BOOL)allowsOverriddenRightNavigationBarItems;
-(BOOL)allowsOverriddenToolbarItems;
@end
