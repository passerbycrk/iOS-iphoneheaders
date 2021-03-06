/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:39 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonView.h>

@class CKBalloonImageView, CKGradientView;

@interface CKColoredBalloonView : CKBalloonView {

	char _color;
	char _wantsGradient;
	CKBalloonImageView* _mask;
	CKGradientView* _gradientView;

}

@property (assign,nonatomic) char color;                                                          //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIView*<CKGradientReferenceView> gradientReferenceView; 
@property (nonatomic,retain) CKBalloonImageView * mask;                                           //@synthesize mask=_mask - In the implementation block
@property (nonatomic,retain) CKGradientView * gradientView;                                       //@synthesize gradientView=_gradientView - In the implementation block
@property (assign,nonatomic) char wantsGradient;                                                  //@synthesize wantsGradient=_wantsGradient - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(UIEdgeInsets)alignmentRectInsets;
-(CKBalloonImageView *)mask;
-(void)setMask:(CKBalloonImageView *)arg1 ;
-(void)prepareForReuse;
-(char)color;
-(void)setColor:(char)arg1 ;
-(void)prepareForDisplay;
-(void)setHasTail:(char)arg1 ;
-(void)setCanUseOpaqueMask:(char)arg1 ;
-(id)overlayColor;
-(char)needsGroupOpacity;
-(void)setGradientReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(UIView*<CKGradientReferenceView>)gradientReferenceView;
-(void)configureForMessagePart:(id)arg1 ;
-(char)wantsGradient;
-(void)setGradientView:(CKGradientView *)arg1 ;
-(CKGradientView *)gradientView;
-(void)updateWantsGradient;
-(void)setWantsGradient:(char)arg1 ;
@end

