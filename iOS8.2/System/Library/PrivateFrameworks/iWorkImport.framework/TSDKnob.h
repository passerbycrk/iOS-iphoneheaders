/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDRep, CALayer, TSDBezierPath, CAShapeLayer;

@interface TSDKnob : NSObject {

	int mType;
	CGPoint mPosition;
	char mOffsetValid;
	CGPoint mOffset;
	float mRadius;
	unsigned mTag;
	TSDRep* mRep;
	char mWorksWhenRepLocked;
	char mWorksWhenInVersionBrowsingMode;
	char mShouldDisplayDirectlyOverRep;
	CALayer* mLayer;
	TSDBezierPath* mHitRegionPath;
	CAShapeLayer* mHitRegionLayer;

}

@property (assign,nonatomic) int type; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) char offsetValid; 
@property (assign,nonatomic) CGPoint offset; 
@property (assign,nonatomic) float radius; 
@property (assign,nonatomic) unsigned tag; 
@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,copy) TSDBezierPath * hitRegionPath; 
@property (nonatomic,readonly) TSDRep * rep; 
@property (assign,nonatomic) char worksWhenRepLocked; 
@property (assign,nonatomic) char worksWhenInVersionBrowsingMode; 
@property (assign,nonatomic) char shouldDisplayDirectlyOverRep; 
-(TSDRep *)rep;
-(char)overlapsWithKnob:(id)arg1 ;
-(char)obscuresKnob:(id)arg1 ;
-(char)isHitByUnscaledPoint:(CGPoint)arg1 andRep:(id)arg2 returningDistance:(float*)arg3 ;
-(id)initWithType:(int)arg1 position:(CGPoint)arg2 radius:(float)arg3 tag:(unsigned)arg4 onRep:(id)arg5 ;
-(char)shouldDisplayDirectlyOverRep;
-(void)updateHitRegionPathForRep:(id)arg1 ;
-(char)offsetValid;
-(void)setOffsetValid:(char)arg1 ;
-(CGRect)boundingBoxOfHitRegionForRep:(id)arg1 scale:(float)arg2 ;
-(char)worksWhenRepLocked;
-(char)worksWhenInVersionBrowsingMode;
-(float)i_rotationInDegreesForKnobOnRep:(id)arg1 ;
-(char)isHitByUnscaledPoint:(CGPoint)arg1 andRep:(id)arg2 ;
-(int)dragType;
-(id)hitRegionLayerForRep:(id)arg1 ;
-(CGPoint)pixelAlignedScaledCanvasCenterPositionFromKnobPosition:(CGPoint)arg1 ;
-(void)setWorksWhenRepLocked:(char)arg1 ;
-(void)setWorksWhenInVersionBrowsingMode:(char)arg1 ;
-(void)setShouldDisplayDirectlyOverRep:(char)arg1 ;
-(TSDBezierPath *)hitRegionPath;
-(void)setHitRegionPath:(TSDBezierPath *)arg1 ;
-(void)dealloc;
-(CALayer *)layer;
-(id)init;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(unsigned)tag;
-(void)setTag:(unsigned)arg1 ;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(id)knobImage;
-(float)radius;
-(void)setRadius:(float)arg1 ;
@end

