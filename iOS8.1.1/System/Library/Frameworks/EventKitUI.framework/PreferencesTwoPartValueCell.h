/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:10 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@protocol EKCellShortener;
@class TwoPartTextLabel, UIColor;

@interface PreferencesTwoPartValueCell : EKUIConstrainedFontsTableViewCell {

	TwoPartTextLabel* _twoPartLabel;
	unsigned _notifiedShort;
	id<EKCellShortener> _shortener;

}

@property (nonatomic,retain,readonly) TwoPartTextLabel * twoPartTextLabel; 
@property (assign,nonatomic,__weak) id<EKCellShortener> shortener;                      //@synthesize shortener=_shortener - In the implementation block
@property (nonatomic,retain,readonly) UIColor * valueColor; 
-(void)setShortener:(id<EKCellShortener>)arg1 ;
-(TwoPartTextLabel *)twoPartTextLabel;
-(id<EKCellShortener>)shortener;
-(UIColor *)valueColor;
-(void)layoutText:(id)arg1 andValue:(id)arg2 ;
-(void)_layoutSubviewsCore;
-(void)checkValueWidths;
-(void)shorten;
-(void)layoutSubviews;
-(id)description;
@end

