/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class SBFAnimationSettings;

@interface SBIconAnimationSettings : _UISettings {

	SBFAnimationSettings* _centralAnimationSettings;

}

@property (retain) SBFAnimationSettings * centralAnimationSettings;              //@synthesize centralAnimationSettings=_centralAnimationSettings - In the implementation block
+(id)settingsControllerModule;
-(SBFAnimationSettings *)centralAnimationSettings;
-(void)setCentralAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(void)setDefaultValues;
@end

