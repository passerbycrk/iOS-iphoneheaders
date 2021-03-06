/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
@interface MPAssetManager : NSObject
+(id)sharedManager;
+(void)releaseSharedManager;
+(id)convertCGImageToBufferUsingDataProvider:(CGImageRef)arg1 ;
+(id)convertCGImageToBufferUsingRGBDevice:(CGImageRef)arg1 ;
+(id)convertCGImageToBuffer:(CGImageRef)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isAssetAtPathASupportedImage:(id)arg1 ;
-(char)isAssetAtPathASupportedMovie:(id)arg1 ;
-(char)isAssetAtPathASupportedAudio:(id)arg1 ;
-(id)regionsOfInterestForAsset:(CGImageRef)arg1 ;
-(void)setSavesToDisk:(char)arg1 ;
-(void)gatherMetadataForAssetAtPath:(id)arg1 ;
-(double)durationForAssetAtPath:(id)arg1 ;
-(double)startTimeForAssetAtPath:(id)arg1 ;
-(double)stopTimeForAssetAtPath:(id)arg1 ;
-(CGSize)resolutionForAssetAtPath:(id)arg1 ;
-(id)creationDateForAssetAtPath:(id)arg1 ;
-(id)keywordsForAssetAtPath:(id)arg1 ;
-(id)latitudeForAssetAtPath:(id)arg1 ;
-(id)longitudeForAssetAtPath:(id)arg1 ;
-(id)altitudeForAssetAtPath:(id)arg1 ;
-(id)locationHierarchyForAssetAtPath:(id)arg1 ;
-(unsigned)mediaTypeForAssetAtPath:(id)arg1 ;
-(id)regionsOfInterestForAssetAtPath:(id)arg1 ;
-(id)absolutePathFromPath:(id)arg1 ;
-(double)posterTimeForAssetAtPath:(id)arg1 ;
-(void)tryToSaveCache;
-(id)roiInfoAtIndex:(int)arg1 forAssetAtPath:(id)arg2 ;
-(CGRect)regionOfInterestAtIndex:(int)arg1 forAssetAtPath:(id)arg2 ;
-(void)addROIInfo:(id)arg1 forAssetAtPath:(id)arg2 saveToCache:(char)arg3 ;
-(void)addRegionOfInterest:(CGRect)arg1 forAssetAtPath:(id)arg2 saveToCache:(char)arg3 ;
-(void)setROIInfo:(id)arg1 atIndex:(int)arg2 forAssetAtPath:(id)arg3 saveToCache:(char)arg4 ;
-(void)setRegionOfInterest:(CGRect)arg1 atIndex:(int)arg2 forAssetAtPath:(id)arg3 saveToCache:(char)arg4 ;
-(void)updateROIInfoAtIndex:(int)arg1 atPath:(id)arg2 to:(id)arg3 saveToCache:(char)arg4 ;
-(void)updateRegionOfInterestAtIndex:(int)arg1 atPath:(id)arg2 to:(CGRect)arg3 saveToCache:(char)arg4 ;
-(void)moveRegionOfInterestWithPath:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 saveToCache:(char)arg4 ;
-(void)setForceOrderForRegionsOfInterest:(char)arg1 forPath:(id)arg2 saveToCache:(char)arg3 ;
-(void)removeRegionOfInterestAtIndex:(int)arg1 forAssetAtPath:(id)arg2 saveToCache:(char)arg3 ;
-(id)prepareInfoForAssetsAtPaths:(id)arg1 ;
-(void)cacheAttributes:(id)arg1 forPath:(id)arg2 ;
@end

