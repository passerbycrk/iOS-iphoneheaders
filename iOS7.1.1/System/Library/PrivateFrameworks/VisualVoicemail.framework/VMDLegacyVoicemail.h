/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:33:12 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/vmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <vmd/VMDVoicemail.h>
#import <vmd/VMDVoicemailConcrete.h>

@protocol VMDAccountConcrete;
@class VMDAccount;

@interface VMDLegacyVoicemail : VMDVoicemail <VMDVoicemailConcrete> {

	void* _record;
	VMDAccount<VMDAccountConcrete>* _account;

}

@property (readonly) void* record;              //@synthesize record=_record - In the implementation block
-(id)initWithStoreRecord:(void*)arg1 account:(id)arg2 ;
-(void)dealloc;
-(int)duration;
-(id)date;
-(long long)identifier;
-(id)sender;
-(void).cxx_destruct;
-(unsigned)flags;
-(id)account;
-(void)setFlags:(unsigned)arg1 ;
-(void*)record;
-(unsigned long long)remoteUID;
-(id)callbackNumber;
-(id)dataPath;
@end

