/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:46 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPaymentSetupTableViewController.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class ACAccountStore, PKPaymentWebService, NSArray;

@interface PKPaymentAddCardViewController : PKPaymentSetupTableViewController {

	ACAccountStore* _accountStore;
	PKPaymentWebService* _webService;
	id<PKPaymentSetupViewControllerDelegate> _delegate;
	NSArray* _eligibleCards;

}

@property (assign,nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * eligibleCards;                                        //@synthesize eligibleCards=_eligibleCards - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * webService;                               //@synthesize webService=_webService - In the implementation block
-(id)initWithPaymentWebService:(id)arg1 eligibleCards:(id)arg2 context:(long long)arg3 delegate:(id)arg4 ;
-(PKPaymentWebService *)webService;
-(void)setEligibleCards:(NSArray *)arg1 ;
-(void)aboutButtonTouched:(id)arg1 ;
-(void)setWebService:(PKPaymentWebService *)arg1 ;
-(void)_pushCardDetailsViewControllerForCredential:(id)arg1 ;
-(void)_pushManualCardDetailsViewController;
-(void)_pushCardList:(id)arg1 ;
-(NSArray *)eligibleCards;
-(void)dealloc;
-(void)setDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

