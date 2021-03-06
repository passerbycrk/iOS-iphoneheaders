/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class HKDataUnitGroup, WDControllerManager, HKUnitController;

@interface WDAddDataViewController : UITableViewController {

	HKDataUnitGroup* _dataUnitGroup;
	WDControllerManager* _controllerManager;
	HKUnitController* _unitController;

}
-(id)initWithDataUnitGroup:(id)arg1 controllerManager:(id)arg2 unitController:(id)arg3 ;
-(id)defaultMetadata;
-(void)saveHKObjectWithCompletion:(/*^block*/id)arg1 ;
-(void)addButtonTapped:(id)arg1 ;
-(void)_dataValidated;
-(void)_showValidationAlertWithErrorString:(id)arg1 ;
-(void)validateDataWithCompletion:(/*^block*/id)arg1 ;
-(id)generateHKObjects;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)viewDidLoad;
@end

