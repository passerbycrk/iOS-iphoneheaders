/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDAsset.h>

@class NSSet;

@interface TDPNGAsset : TDAsset {

	int _exifOrientation;
	unsigned _fileScaleFactor;

}

@property (nonatomic,retain) NSSet * renditions; 
-(int)exifOrientation;
-(void)_logError:(id)arg1 ;
-(CGSize)sourceImageSizeWithDocument:(id)arg1 ;
-(id)sourceImageWithDocument:(id)arg1 ;
-(void)setFileScaleFactor:(unsigned)arg1 ;
-(unsigned)fileScaleFactor;
-(BOOL)hasCursorProduction;
-(BOOL)hasProduction;
@end

