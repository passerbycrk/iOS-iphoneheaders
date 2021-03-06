/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKit/UIView.h>

@class MPUTextDrawingContext, NSString;

@interface MPUTextDrawingView : UIView {

	double _cachedDisplayScale;
	MPUTextDrawingContext* _textDrawingContext;

}

@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,retain) MPUTextDrawingContext * textDrawingContext;              //@synthesize textDrawingContext=_textDrawingContext - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSString *)text;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTextDrawingContext:(MPUTextDrawingContext *)arg1 ;
-(double)_cachedDisplayScale;
-(MPUTextDrawingContext *)textDrawingContext;
@end

