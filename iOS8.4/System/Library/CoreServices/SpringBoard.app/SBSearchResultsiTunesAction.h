/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBSearchResultsModalViewControllerAction.h>
#import <SpringBoard/SKStoreProductViewControllerDelegate.h>

@class NSString;

@interface SBSearchResultsiTunesAction : SBSearchResultsModalViewControllerAction <SKStoreProductViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)requiresNavigationController;
-(void)loadModalViewControllerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
@end

