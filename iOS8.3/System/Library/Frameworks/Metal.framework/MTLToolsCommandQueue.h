/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:01:09 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLToolsObject.h>
#import <Metal/MTLCommandQueueSPI.h>

@class MTLToolsPointerArray, NSString;

@interface MTLToolsCommandQueue : MTLToolsObject <MTLCommandQueueSPI> {

	MTLToolsPointerArray* _commandBuffers;

}

@property (nonatomic,readonly) MTLToolsPointerArray * commandBuffers;              //@synthesize commandBuffers=_commandBuffers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (assign) int backgroundTrackingPID; 
@property (assign) char skipRender; 
@property (assign) char executionEnabled; 
@property (getter=isProfilingEnabled) char profilingEnabled; 
-(void)acceptVisitor:(id)arg1 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(char)isProfilingEnabled;
-(MTLToolsPointerArray *)commandBuffers;
-(id)commandBufferWithUnretainedReferences;
-(int)backgroundTrackingPID;
-(void)setBackgroundTrackingPID:(int)arg1 ;
-(char)skipRender;
-(void)setSkipRender:(char)arg1 ;
-(char)executionEnabled;
-(void)setExecutionEnabled:(char)arg1 ;
-(void)setProfilingEnabled:(char)arg1 ;
-(void)insertDebugCaptureBoundary;
-(id)commandBuffer;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)finish;
-(id<MTLDevice>)device;
@end

