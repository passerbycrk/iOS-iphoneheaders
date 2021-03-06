/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIScreenMode : NSObject {

	id _mode;
	BOOL _mainScreen;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) float pixelAspectRatio; 
@property (assign) BOOL _mainScreen;                                //@synthesize mainScreen=_mainScreen - In the implementation block
+(id)_screenModeForDisplayMode:(id)arg1 mainScreen:(BOOL)arg2 ;
-(CGSize)size;
-(id)description;
-(BOOL)_isNTSCOrPAL;
-(float)pixelAspectRatio;
-(id)_displayMode;
-(id)initWithDisplayMode:(id)arg1 mainScreen:(BOOL)arg2 ;
-(BOOL)_mainScreen;
-(void)set_mainScreen:(BOOL)arg1 ;
@end

