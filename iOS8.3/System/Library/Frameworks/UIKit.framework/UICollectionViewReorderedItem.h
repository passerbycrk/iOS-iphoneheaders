/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:03 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UICollectionViewCell, NSIndexPath;

@interface UICollectionViewReorderedItem : NSObject {

	UICollectionViewCell* _cell;
	NSIndexPath* _originalIndexPath;
	NSIndexPath* _targetIndexPath;

}

@property (nonatomic,readonly) UICollectionViewCell * cell;                //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) NSIndexPath * originalIndexPath;              //@synthesize originalIndexPath=_originalIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * targetIndexPath;                //@synthesize targetIndexPath=_targetIndexPath - In the implementation block
-(void)dealloc;
-(UICollectionViewCell *)cell;
-(id)initWithCell:(id)arg1 indexPath:(id)arg2 ;
-(NSIndexPath *)originalIndexPath;
-(void)setOriginalIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)targetIndexPath;
-(void)setTargetIndexPath:(NSIndexPath *)arg1 ;
@end

