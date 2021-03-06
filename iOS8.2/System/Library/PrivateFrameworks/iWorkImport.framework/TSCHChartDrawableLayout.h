/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextHostLayout.h>

@class TSCHChartLayout, TSDLayoutGeometry, TSCHChartDrawableLayoutLegendResizer, TSCH3DVector, TSCHChartInfo, NSIndexSet, NSArray, NSDictionary, TSCHChartModel;

@interface TSCHChartDrawableLayout : TSWPTextHostLayout {

	struct {
		unsigned chartLayoutState : 1;
		unsigned chartLayoutStructure : 1;
	}  mChartInvalidFlags;
	TSCHChartLayout* mChartLayout;
	TSDLayoutGeometry* mLayoutGeometryWhileCallingSuperComputeLayoutGeometry;
	TSDLayoutGeometry* mLastPureGeometry;
	TSDLayoutGeometry* mLastChartAreaGeometry;
	CGSize mMinSizeCache;
	char mInResize;
	char mSuppressChartLayoutInvalidation;
	TSDLayoutGeometry* mLegendGeometryForResize;
	TSCHChartDrawableLayoutLegendResizer* mLegendResizer;

}

@property (nonatomic,readonly) TSCH3DVector * rotation3D; 
@property (nonatomic,readonly) TSCHChartInfo * chartInfo; 
@property (nonatomic,retain,readonly) TSCHChartLayout * chartLayout; 
@property (nonatomic,readonly) char is3DChart; 
@property (nonatomic,readonly) NSIndexSet * pieWedgeExplosionSeriesIndices; 
@property (nonatomic,copy) NSArray * pieWedgeExplosions; 
@property (nonatomic,copy) NSDictionary * seriesIndexedPieWedgeExplosions; 
@property (nonatomic,readonly) TSCHChartModel * model; 
@property (assign,nonatomic) unsigned dataSetIndex; 
@property (nonatomic,copy) TSDLayoutGeometry * legendGeometry; 
@property (nonatomic,copy) TSDLayoutGeometry * legendModelGeometry; 
@property (nonatomic,retain) TSCHChartLayout * p_chartLayoutNoCreate; 
@property (nonatomic,retain,readonly) TSCHChartLayout * p_chartLayout; 
@property (nonatomic,retain) TSCHChartDrawableLayoutLegendResizer * p_legendResizer; 
@property (nonatomic,copy) TSDLayoutGeometry * p_lastPureGeometry; 
@property (nonatomic,copy) TSDLayoutGeometry * p_lastChartAreaGeometry; 
@property (nonatomic,copy) TSDLayoutGeometry * p_legendGeometryForResize; 
-(TSCHChartInfo *)chartInfo;
-(id)renderersWithRep:(id)arg1 ;
-(id)propertiesThatInvalidateLayout;
-(void)processChanges:(id)arg1 ;
-(void)setSeriesIndexedPieWedgeExplosions:(NSDictionary *)arg1 ;
-(TSCHChartLayout *)chartLayout;
-(TSCH3DVector *)rotation3D;
-(void)setRotation3D:(TSCH3DVector *)arg1 ;
-(char)changesShouldClearLayout:(id)arg1 ;
-(char)changesShouldSetNeedsLayout:(id)arg1 ;
-(CGRect)boundsForStandardKnobs;
-(void)take3DDepth;
-(CGRect)alignmentFrameForProvidingGuidesInRoot;
-(NSDictionary *)seriesIndexedPieWedgeExplosions;
-(unsigned)dataSetIndex;
-(void)setDataSetIndex:(unsigned)arg1 ;
-(char)is3DChart;
-(char)p_isPrintingInBackground;
-(Class)repClassOverride;
-(TSCHChartLayout *)p_chartLayoutNoCreate;
-(void)setP_chartLayoutNoCreate:(TSCHChartLayout *)arg1 ;
-(id)chartDrawableInfo;
-(void)p_validateChartLayout;
-(TSCHChartLayout *)p_chartLayout;
-(void)p_postLayoutPropertyValueDidChangeNotification;
-(NSIndexSet *)pieWedgeExplosionSeriesIndices;
-(id)pieWedgeExplosionsForSeriesIndices:(id)arg1 ;
-(id)p_chartLayout2D;
-(void)p_setLegendSize:(CGSize)arg1 ;
-(void)p_setLegendGeometry:(id)arg1 fromTransform:(CGAffineTransform)arg2 onLayout:(id)arg3 shouldUpdateLayoutItemSize:(char)arg4 ;
-(void)p_clearChartLayout;
-(void)invalidateChartLayoutState;
-(void)invalidateSize;
-(void)p_forceValidateChartLayout;
-(TSDLayoutGeometry *)p_lastPureGeometry;
-(void)setP_lastPureGeometry:(TSDLayoutGeometry *)arg1 ;
-(void)setP_lastChartAreaGeometry:(TSDLayoutGeometry *)arg1 ;
-(id)layoutGeometryFromInfo;
-(void)p_convertValidChartLayout:(id)arg1 andInfoGeometry:(id)arg2 toPureGeometry:(id*)arg3 toChartAreaGeometry:(id*)arg4 toShadowGeometry:(id*)arg5 ;
-(void)offsetGeometryBy:(CGPoint)arg1 ;
-(TSDLayoutGeometry *)p_lastChartAreaGeometry;
-(TSDLayoutGeometry *)p_legendGeometryForResize;
-(void)setP_legendGeometryForResize:(TSDLayoutGeometry *)arg1 ;
-(id)p_constrainAndResizePureGeometry:(id)arg1 withValidChartLayout:(id)arg2 toChartAreaGeometry:(id*)arg3 toShadowGeometry:(id*)arg4 toInfoGeometry:(id*)arg5 ;
-(id)computeLayoutGeometry;
-(void)processChangedProperty:(int)arg1 ;
-(void)invalidateChartLayoutStructure;
-(CGSize)p_calcMinSize;
-(float)p_approximateMultiDataControlUnscaledHeight;
-(float)p_approximatedAdditionalHeightForMultiDataControlWithMinimumAccommodatingScale:(float)arg1 ;
-(CGRect)frameForCulling;
-(float)p_approximateMultiDataControlUnscaledMinimumWidth;
-(id)visibleGeometries;
-(CGRect)boundsInfluencingExteriorWrap;
-(CGRect)p_addMultiDataControlToInlineWrapBounds:(CGRect)arg1 ;
-(CGRect)alignmentFrame;
-(void)setChartLayoutPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)pieWedgeExplosions;
-(void)setPieWedgeExplosions:(NSArray *)arg1 ;
-(CGRect)snappedLegendModelFrame:(CGRect)arg1 ;
-(TSDLayoutGeometry *)legendGeometry;
-(void)setLegendGeometry:(TSDLayoutGeometry *)arg1 ;
-(TSDLayoutGeometry *)legendModelGeometry;
-(void)setLegendModelGeometry:(TSDLayoutGeometry *)arg1 ;
-(id)computeInfoGeometryDuringResize;
-(char)canRotateChildLayout:(id)arg1 ;
-(char)supportsParentRotation;
-(id)computeInfoGeometryFromPureLayoutGeometry:(id)arg1 ;
-(void)p_addEdgeAlignmentGuidesForRect:(CGRect)arg1 set:(id)arg2 ;
-(int)wrapFitType;
-(CGRect)insertionFrame;
-(id)i_computeWrapPath;
-(void)layoutSearchForString:(id)arg1 options:(unsigned)arg2 hitBlock:(/*^block*/id)arg3 ;
-(void)layoutSearchForSpellingErrorsWithHitBlock:(/*^block*/id)arg1 stop:(char*)arg2 ;
-(TSCHChartDrawableLayoutLegendResizer *)p_legendResizer;
-(void)setP_legendResizer:(TSCHChartDrawableLayoutLegendResizer *)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)validate;
-(CGRect)rectForSelection:(id)arg1 ;
-(TSCHChartModel *)model;
-(CGSize)minimumSize;
@end

