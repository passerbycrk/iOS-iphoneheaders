/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface SBIconContentView : UIView {

	int _orientation;
	NSMutableArray* _folderContentViews;

}

@property (assign,nonatomic) int orientation;              //@synthesize orientation=_orientation - In the implementation block
-(void)clearAllFolderContentViews;
-(void)pushFolderContentView:(id)arg1 ;
-(void)updateLayoutWithDuration:(double)arg1 ;
-(CGRect)_frameForFolderView:(id)arg1 ;
-(void)popFolderContentView:(id)arg1 ;
-(id)_folderViews;
-(id)initWithOrientation:(int)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(int)orientation;
-(void)didAddSubview:(id)arg1 ;
-(void)setOrientation:(int)arg1 ;
@end
