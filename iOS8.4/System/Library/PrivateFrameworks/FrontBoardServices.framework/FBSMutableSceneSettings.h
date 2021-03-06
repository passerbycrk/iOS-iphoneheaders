/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSSceneSettings.h>

@class NSArray;

@interface FBSMutableSceneSettings : FBSSceneSettings

@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) double level; 
@property (assign,nonatomic) long long interfaceOrientation; 
@property (assign,getter=isBackgrounded,nonatomic) BOOL backgrounded; 
@property (assign,nonatomic) CGPoint contentOffset; 
@property (nonatomic,copy) NSArray * occlusions; 
+(BOOL)_isMutable;
-(void)setFrame:(CGRect)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(double)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setBackgrounded:(BOOL)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)otherSettings;
-(id)ignoreOcclusionReasons;
-(void)setOcclusions:(NSArray *)arg1 ;
-(id)transientLocalSettings;
@end

