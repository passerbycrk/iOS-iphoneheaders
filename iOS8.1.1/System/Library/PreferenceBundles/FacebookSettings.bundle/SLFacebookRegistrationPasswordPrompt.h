/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FacebookSettings/SLFacebookRegistrationInfoPrompt.h>

@class NSString, PSSpecifier;

@interface SLFacebookRegistrationPasswordPrompt : SLFacebookRegistrationInfoPrompt {

	NSString* _password;
	NSString* _verify;
	PSSpecifier* _signUpButton;

}
-(id)_passwordWithSpecifier:(id)arg1 ;
-(void)_setVerify:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_verifyWithSpecifier:(id)arg1 ;
-(BOOL)isReadyToValidate;
-(void)_signUpTapped:(id)arg1 ;
-(void)updateRegistrationInfo;
-(id)initWithRegistrationInfo:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(BOOL)validate;
-(void)textFieldValueDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(id)specifiers;
@end

