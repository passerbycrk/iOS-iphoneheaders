/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIPrinterBrowserOwner.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class PKPrinter, UIPrinterPickerController, UINavigationController, UIPrinterBrowserViewController, UIViewController, UIPopoverController, UIWindow, NSString;

@interface UIPrinterPickerViewController : UIViewController <UIPrinterBrowserOwner, UINavigationControllerDelegate> {

	UIPrinterPickerController* _printerPickerController;
	UINavigationController* _navigationController;
	UIPrinterBrowserViewController* _printerBrowserViewController;
	UIViewController* _parentController;
	UIViewController* _originalViewControllerInNav;
	UIPopoverController* _poverController;
	UIWindow* _window;
	char _dismissed;
	char _animated;
	char _observingRotation;
	char _parentHasNoPopover;
	char _userSelectedPrinter;
	PKPrinter* _printer;

}

@property (nonatomic,retain) PKPrinter * printer;                   //@synthesize printer=_printer - In the implementation block
@property (assign) char userSelectedPrinter;                        //@synthesize userSelectedPrinter=_userSelectedPrinter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)_presentWindow;
-(void)_keyWindowWillRotate:(id)arg1 ;
-(void)_presentInParentAnimated:(char)arg1 ;
-(void)dismissAnimated:(char)arg1 ;
-(void)dismissPrinterPickerAnimated:(char)arg1 ;
-(char)filtersPrinters;
-(void)cancelPrinting;
-(void)setUserSelectedPrinter:(char)arg1 ;
-(char)shouldShowPrinter:(id)arg1 ;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(id)initWithPrinterPickerController:(id)arg1 inParentController:(id)arg2 ;
-(void)presentPrinterPickerPanelAnimated:(char)arg1 ;
-(void)presentPrinterPickerPanelFromRect:(CGRect)arg1 inView:(id)arg2 animated:(char)arg3 ;
-(void)presentPrinterPickerPanelFromBarButtonItem:(id)arg1 animated:(char)arg2 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)controllerDidDisappear;
-(char)userSelectedPrinter;
@end

