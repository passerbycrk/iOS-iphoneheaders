/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableArray;

@interface FigISPMotionDelegate : NSObject {

	NSMutableArray* ringBuffer;
	opaque_pthread_mutex_t ringMutex;
	SCD_Struct_Fi56 power;

}
+(id)instance;
-(void)dealloc;
-(id)init;
-(void)parseSphereDebugData:(sCIspMetaDataSharedOIS*)arg1 ;
-(void)addMotionData:(id)arg1 ;
-(id)getMotionData;
@end

