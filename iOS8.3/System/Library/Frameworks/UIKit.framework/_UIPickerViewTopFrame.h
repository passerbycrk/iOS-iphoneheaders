/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:29 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface _UIPickerViewTopFrame : UIView {

	UIImage* _leftImage;
	UIImage* _middleImage;
	UIImage* _rightImage;
	float _inset;
	float _shift;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setLeftImage:(id)arg1 middleImage:(id)arg2 rightImage:(id)arg3 ;
-(void)setInset:(float)arg1 ;
-(void)setShift:(float)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

