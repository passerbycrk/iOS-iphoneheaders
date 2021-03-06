/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UINavigationController, MCDBrowsableContentModel, NSString;

@interface MCDPlayableContentViewController : UIViewController {

	UINavigationController* _navigationController;
	MCDBrowsableContentModel* _model;
	NSString* _bundleID;

}

@property (nonatomic,copy,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSString *)bundleID;
-(id)initWithBundleID:(id)arg1 ;
-(void)_embedAppropriateViewController;
-(void)refreshNavigationStack;
@end

