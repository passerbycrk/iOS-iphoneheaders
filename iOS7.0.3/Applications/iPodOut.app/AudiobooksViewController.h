/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/iPodOut.app/iPodOut
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iPodOut/FocusedTableViewController.h>

@class MPMediaQuery;

@interface AudiobooksViewController : FocusedTableViewController {

	MPMediaQuery* query;

}

@property (nonatomic,retain) MPMediaQuery * query; 
-(void)writeCurrentPositionIntoNavigationPathComponent:(id)arg1 ;
-(id)statusBarTitle;
-(void)selectAction:(BOOL)arg1 transition:(int)arg2 ;
-(int)restoreWithPathComponent:(id)arg1 ;
-(id)viewControllerForCurrentRow;
-(void)setQuery:(id)arg1 ;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)query;
-(void).cxx_destruct;
@end

