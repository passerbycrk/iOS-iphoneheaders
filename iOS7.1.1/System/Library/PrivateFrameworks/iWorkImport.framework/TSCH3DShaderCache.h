/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSCH3DProtectResourceDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSCH3DShaderCache : NSObject {

	<TSCH3DProtectResourceDelegate>* mProtectResourceDelegate;
	NSMutableArray* mShaderCache;

}

@property (assign,nonatomic) <TSCH3DProtectResourceDelegate> * protectResourceDelegate; 
-(void)setProtectResourceDelegate:(id)arg1 ;
-(id)shaderForObjectState:(const ObjectState*)arg1 version:(id)arg2 initializeProgramBlock:(/*^block*/ id)arg3 ;
-(void)p_unprotectAllCacheItems;
-(void)p_ensureCacheLimit;
-(void)debug_verifyUniqueShadersInCache;
-(id)protectResourceDelegate;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)flush;
@end

