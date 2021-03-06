/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:22:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/MobilePhone.axbundle/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <FaceTime/__PHHandsetDialerLCDViewAccessibility_super.h>

@interface PHHandsetDialerLCDViewAccessibility : __PHHandsetDialerLCDViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 forDialerType:(int)arg2 ;
-(void)_voStatusChanged:(id)arg1 ;
-(void)_axApplyDeleteButtonInfo:(id)arg1 ;
-(void)setText:(id)arg1 needsFormat:(char)arg2 ;
-(void)updateAddAndDeleteButtonForText:(id)arg1 name:(id)arg2 animated:(char)arg3 ;
-(void)deleteCharacter;
-(id)newDeleteButton;
-(void)_accessibilityLoadAccessibilityInformation;
-(float)_accessibilityAllowedGeometryOverlap;
-(void)dealloc;
-(char)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(char)shouldGroupAccessibilityChildren;
@end

