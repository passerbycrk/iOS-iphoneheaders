/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:08:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition;

@interface PLHealthKitAgent : PLAgent {

	PLXPCListenerOperatorComposition* _queryHandler;

}

@property (retain) PLXPCListenerOperatorComposition * queryHandler;              //@synthesize queryHandler=_queryHandler - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
-(void)initOperatorDependancies;
-(PLXPCListenerOperatorComposition *)queryHandler;
-(void)setQueryHandler:(PLXPCListenerOperatorComposition *)arg1 ;
@end

