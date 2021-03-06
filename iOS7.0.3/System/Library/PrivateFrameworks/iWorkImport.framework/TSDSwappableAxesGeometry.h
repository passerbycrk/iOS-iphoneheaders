/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSDictionary;

@interface TSDSwappableAxesGeometry : NSObject {

	NSDictionary* mAdditionalOrientationIndependentValues;
	BOOL mFlipped;

}

@property (nonatomic,readonly) BOOL isFlipped; 
@property (nonatomic,readonly) int horizontalOrientation; 
@property (nonatomic,readonly) int verticalOrientation; 
+(id)standardAxesGeometry;
+(id)swappedAxesGeometry;
+(id)geometryWithXAxisAlongEdge:(int)arg1 ;
-(BOOL)rect:(CGRect)arg1 verticallyOverlapsRect:(CGRect)arg2 ;
-(BOOL)rect:(CGRect)arg1 horizontallyOverlapsRect:(CGRect)arg2 ;
-(CGRect)makeVerticalSpacingRectBetweenRect:(CGRect)arg1 andRect:(CGRect)arg2 ;
-(float)rectWidth:(CGRect)arg1 ;
-(float)rectHeight:(CGRect)arg1 ;
-(int)verticalOrientation;
-(int)edgeForStandardRectEdge:(int)arg1 ;
-(float)rectMinX:(CGRect)arg1 ;
-(float)rectMaxX:(CGRect)arg1 ;
-(float)rectMidX:(CGRect)arg1 ;
-(unsigned)knobTagForStandardKnobTag:(unsigned)arg1 ;
-(int)horizontalOrientation;
-(float)rectMinY:(CGRect)arg1 ;
-(float)rectMaxY:(CGRect)arg1 ;
-(CGRect)makeHorizontalSpacingRectBetweenRect:(CGRect)arg1 andRect:(CGRect)arg2 ;
-(id)initFlipped:(BOOL)arg1 ;
-(float)rectMidY:(CGRect)arg1 ;
-(CGRect)makeRectWithX:(float)arg1 Y:(float)arg2 width:(float)arg3 height:(float)arg4 ;
-(float)pointX:(CGPoint)arg1 ;
-(float)pointY:(CGPoint)arg1 ;
-(CGPoint)makePointWithX:(float)arg1 Y:(float)arg2 ;
-(id)description;
-(BOOL)isFlipped;
@end

