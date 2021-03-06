/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADDrawable.h>
#import <OfficeImport/OADDrawableContainer.h>

@class NSMutableArray;

@interface OADGroup : OADDrawable <OADDrawableContainer> {

	CGRect mLogicalBounds;
	NSMutableArray* mChildren;

}
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(void)addChild:(id)arg1 ;
-(unsigned)childCount;
-(CGRect)logicalBounds;
-(id)childAtIndex:(unsigned)arg1 ;
-(void)setLogicalBounds:(CGRect)arg1 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)addChildren:(id)arg1 ;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
-(void)removeUnnecessaryOverrides;
-(id)groupProperties;
-(id)children;
@end

