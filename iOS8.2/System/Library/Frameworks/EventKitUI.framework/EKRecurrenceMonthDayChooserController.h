/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKRecurrenceGridChooserController.h>

@class NSMutableSet;

@interface EKRecurrenceMonthDayChooserController : EKRecurrenceGridChooserController {

	NSMutableSet* _daysOfTheMonthSet;
	char _prohibitsMultipleDaysInMonthlyRecurrence;

}

@property (assign,nonatomic) char prohibitsMultipleDaysInMonthlyRecurrence;              //@synthesize prohibitsMultipleDaysInMonthlyRecurrence=_prohibitsMultipleDaysInMonthlyRecurrence - In the implementation block
-(id)initWithDate:(id)arg1 ;
-(char)prohibitsMultipleDaysInMonthlyRecurrence;
-(id)daysOfTheMonth;
-(void)setDaysOfTheMonth:(id)arg1 ;
-(void)setProhibitsMultipleDaysInMonthlyRecurrence:(char)arg1 ;
-(int)gridViewType;
-(id)cellLabels;
-(void)refreshCells;
-(void)selectCell:(id)arg1 atIndex:(int)arg2 ;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(int)frequency;
-(void)prepareForDisplay;
@end

