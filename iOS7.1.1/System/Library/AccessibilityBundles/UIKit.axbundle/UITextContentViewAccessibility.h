/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextContentViewAccessibility_super.h>

@interface UITextContentViewAccessibility : UITextContentViewAccessibility_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
-(bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(bool)arg3 ;
-(bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(bool)isAccessibilityElement;
-(bool)accessibilityActivate;
-(id)_accessibilitySupplementaryHeaderViews;
-(bool)_accessibilitySupportsActivateAction;
-(id)_accessibilityAttributedValueForRange:(NSRange*)arg1 ;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(bool)_accessibilityShouldAnnounceFontInfo;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(void)_accessibilitySetValue:(id)arg1 ;
-(id)_accessibilityTextViewTextOperationResponder;
@end
