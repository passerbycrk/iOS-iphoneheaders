/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString, NSData;

@interface AAGenericTermsUIResponse : AAResponse {

	NSDictionary* _responseTermsDictionary;
	NSString* _responseAgreeURL;
	NSData* _responseData;

}

@property (nonatomic,readonly) NSData * responseData; 
@property (nonatomic,readonly) NSString * agreeURL; 
@property (nonatomic,readonly) NSDictionary * termsDictionary; 
-(id)responseData;
-(void).cxx_destruct;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(id)termsDictionary;
-(id)agreeURL;
@end

