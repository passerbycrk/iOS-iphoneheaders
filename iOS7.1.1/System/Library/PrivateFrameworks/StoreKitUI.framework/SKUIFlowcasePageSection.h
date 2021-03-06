/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIFlowcaseDelegate.h>
#import <StoreKitUI/SKUIMissingItemDelegate.h>

@class SKUIFlowcaseArtworkLoader, SKUIFlowcaseViewController, SKUIMissingItemLoader, NSMutableSet, SKUIFlowcaseComponent;

@interface SKUIFlowcasePageSection : SKUIStorePageSection <SKUIFlowcaseDelegate, SKUIMissingItemDelegate> {

	SKUIFlowcaseArtworkLoader* _artworkLoader;
	SKUIFlowcaseViewController* _flowCaseViewController;
	SKUIMissingItemLoader* _missingItemLoader;
	bool _pinned;
	NSMutableSet* _recordedImpressionIDs;
	long long _rotationInterfaceOrientation;

}

@property (nonatomic,@dynamic,readonly) SKUIFlowcaseComponent * pageComponent; 
-(void)dealloc;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void).cxx_destruct;
-(id)initWithPageComponent:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(long long)numberOfCells;
-(id)popPinnedHeaderView;
-(void)restorePinnedHeaderView:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(void)prefetchResourcesWithReason:(long long)arg1 ;
-(id)_missingItemLoader;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2 ;
-(void)_addVisibleImpressionsToSession:(id)arg1 ;
-(id)_flowCaseViewController;
-(void)flowcase:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3 ;
-(id)flowcase:(id)arg1 imageForItem:(id)arg2 index:(long long)arg3 orientation:(long long)arg4 ;
-(void)flowcaseDidChangeVisibleViews:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(id)_artworkLoader;
@end

