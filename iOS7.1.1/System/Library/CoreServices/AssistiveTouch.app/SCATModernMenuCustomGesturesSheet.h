/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:22 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuGesturesSheetBase.h>

@protocol SCATMenuCustomGestureItemsViewDelegate;
@class NSMutableArray;

@interface SCATModernMenuCustomGesturesSheet : SCATModernMenuGesturesSheetBase {

	NSMutableArray* _gestures;
	int _type;
	<SCATMenuCustomGestureItemsViewDelegate>* _delegate;

}

@property (assign,nonatomic) <SCATMenuCustomGestureItemsViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int type;                                                       //@synthesize type=_type - In the implementation block
-(BOOL)shouldUpdateMenuItem:(id)arg1 ;
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(id)backTitle;
-(id)initWithType:(int)arg1 menu:(id)arg2 ;
-(void)viewControllerViewWillAppear:(BOOL)arg1 ;
-(void)_loadGestures;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(int)type;
@end
