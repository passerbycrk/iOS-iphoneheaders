/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <EventKitUI/EKEditItemViewControllerProtocol.h>

@class UITextView, NSString;

@interface EKEventDetailExtendedNotesViewController : UIViewController <EKEditItemViewControllerProtocol> {

	UITextView* _textView;

}

@property (nonatomic,copy) NSString * notes; 
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(id)_textView;
@end

