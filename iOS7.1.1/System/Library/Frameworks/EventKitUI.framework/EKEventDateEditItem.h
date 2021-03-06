/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventEditItem.h>
#import <EventKitUI/EKTimeZoneViewControllerDelegate.h>
#import <EventKitUI/EKCellShortener.h>

@class NSDateComponents, NSTimeZone, PreferencesTwoPartValueCell, UITableViewCell, UIDatePicker;

@interface EKEventDateEditItem : EKEventEditItem <EKTimeZoneViewControllerDelegate, EKCellShortener> {

	NSDateComponents* _startComponents;
	NSDateComponents* _endComponents;
	bool _allDay;
	NSTimeZone* _timeZone;
	PreferencesTwoPartValueCell* _startDateCell;
	PreferencesTwoPartValueCell* _endDateCell;
	UITableViewCell* _allDayCell;
	UITableViewCell* _timeZoneCell;
	UITableViewCell* _startDatePickerCell;
	UITableViewCell* _endDatePickerCell;
	long long _selectedSubitem;
	UIDatePicker* _startDatePicker;
	UIDatePicker* _endDatePicker;
	bool _endTimeWasMessedUp;
	bool _changingDate;
	int _shorteningStatus;
	bool _supportsTimeZone;
	bool _showsAllDay;

}

@property (assign,nonatomic) bool supportsTimeZone;              //@synthesize supportsTimeZone=_supportsTimeZone - In the implementation block
@property (assign,nonatomic) bool showsAllDay;                   //@synthesize showsAllDay=_showsAllDay - In the implementation block
-(bool)saveAndDismissWithForce:(bool)arg1 ;
-(bool)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(void)endInlineEditing;
-(bool)configureForCalendarConstraints:(id)arg1 ;
-(void)editor:(id)arg1 didStartEditingItem:(id)arg2 ;
-(bool)requiresReconfigurationOnCommit;
-(unsigned long long)numberOfSubitemsInSubsection:(unsigned long long)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 forWidth:(double)arg3 ;
-(bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3 ;
-(void)refreshFromCalendarItemAndStore;
-(bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 ;
-(id)_calendarForEventComponents;
-(void)_setEndDate:(id)arg1 ;
-(void)_setAllDay:(bool)arg1 ;
-(void)_setTimeZone:(id)arg1 ;
-(void)_updateDatePickerAnimated:(bool)arg1 ;
-(bool)_shouldShowTimeZone;
-(void)_allDayChanged:(id)arg1 ;
-(void)_datePickerChanged:(id)arg1 ;
-(void)_datePickerDoubleTapped:(id)arg1 ;
-(id)_newDatePicker;
-(id)_dateComponentsInSystemCalendarFromDate:(id)arg1 ;
-(id)_dateInSystemCalendarFromComponents:(id)arg1 ;
-(long long)_subitemForRow:(long long)arg1 ;
-(id)_startDateCell;
-(id)_endDateCell;
-(id)_allDayCell;
-(id)_timeZoneCell;
-(id)_timeZoneDescription;
-(id)_startDatePickerCell;
-(id)_endDatePickerCell;
-(void)_hideDatePicker;
-(long long)_rowForSubitem:(long long)arg1 ;
-(void)_updateDateColors;
-(void)_resetStartString:(bool)arg1 endString:(bool)arg2 ;
-(void)_updateTimeWidths;
-(void)_pickNextReasonableTime;
-(bool)_endDateIsBeforeStartDate;
-(void)timeZoneViewController:(id)arg1 didSelectTimeZone:(id)arg2 ;
-(void)timeZoneViewControllerDidCancel:(id)arg1 ;
-(void)shortenCell:(id)arg1 ;
-(bool)supportsTimeZone;
-(void)setSupportsTimeZone:(bool)arg1 ;
-(bool)showsAllDay;
-(void)setShowsAllDay:(bool)arg1 ;
-(id)init;
-(id)description;
-(void).cxx_destruct;
-(bool)isInline;
-(void)_setStartDate:(id)arg1 ;
@end

