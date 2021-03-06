/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <MobileTimer/PagingLandscapeCollectionViewController.h>
#import <MobileTimer/AlarmDelegate.h>
#import <MobileTimer/AlarmActiveDelegate.h>
#import <MobileTimer/EditAlarmViewControllerDelegate.h>
#import <MobileTimer/StateManagement.h>

@class Alarm, NSString;

@interface AlarmViewController : PagingLandscapeCollectionViewController <AlarmDelegate, AlarmActiveDelegate, EditAlarmViewControllerDelegate, StateManagement> {

	char _viewVisible;
	Alarm* _alarmToEdit;
	char _didScrollToCurrentTime;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activeChangedForAlarm:(id)arg1 active:(char)arg2 ;
-(void)pagingCollectionViewDidLoad;
-(void)saveScrollPoint;
-(void)showAddView;
-(void)dismissAddViewController:(id)arg1 ;
-(void)showEditViewForRow:(int)arg1 ;
-(void)didEditAlarm:(id)arg1 ;
-(id)noItemsText;
-(float)itemsTableRowHeight;
-(id)addViewController;
-(void)saveState;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)contentScrollView;
-(void)viewDidUnload;
-(void)viewDidDisappear:(char)arg1 ;
-(id)defaultPNGName;
-(int)numberOfItems;
-(void)reloadState;
-(void)alarmDidUpdate:(id)arg1 ;
@end

