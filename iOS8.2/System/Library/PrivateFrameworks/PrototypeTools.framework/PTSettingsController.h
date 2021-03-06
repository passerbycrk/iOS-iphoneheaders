/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class UIBarButtonItem;

@interface PTSettingsController : UINavigationController {

	UIBarButtonItem* _dismissButton;

}

@property (nonatomic,retain) UIBarButtonItem * dismissButton;              //@synthesize dismissButton=_dismissButton - In the implementation block
-(id)initWithRootSettings:(id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(void)_dismiss;
-(id)initWithRootModuleController:(id)arg1 ;
-(id)_defaultDismissButton;
-(void)setDismissButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)dismissButton;
@end

