/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIViewController;

@interface SKUIIPadChartsColumnView : UIView {

	UIEdgeInsets _contentInset;
	NSArray* _contentViewControllers;
	long long _selectedViewControllerIndex;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                                //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,copy) NSArray * contentViewControllers;                           //@synthesize contentViewControllers=_contentViewControllers - In the implementation block
@property (nonatomic,readonly) UIViewController * selectedViewController; 
-(void)layoutSubviews;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIViewController *)selectedViewController;
-(void)setSelectedViewControllerIndex:(long long)arg1 ;
-(void)setContentViewControllers:(NSArray *)arg1 ;
-(void)_addSelectedViewController;
-(NSArray *)contentViewControllers;
@end

