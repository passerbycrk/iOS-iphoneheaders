/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBAppSwitcherPeopleDataSource <NSObject>
@property (assign,nonatomic) id<SBAppSwitcherPeopleDataSourceConsumer> consumer; 
@required
-(unsigned)numberOfContactsInSection:(unsigned)arg1;
-(id)contactItemForIndexPath:(id)arg1;
-(id)optionalEmptyPlaceholderStringForSection:(unsigned)arg1;
-(void)updateIfNecessary;
-(void)cachedMonogramImageForPersonID:(int)arg1 ofSize:(float)arg2 generatingIfNecessaryWithResult:(/*^block*/id)arg3;
-(id)existingCachedMonogramImageForPersonID:(int)arg1 ofSize:(float)arg2 outIsMask:(char*)arg3;
-(id)silhouetteMonogramOfSize:(float)arg1;
-(void)purgeCaches;
-(id)titleForSection:(unsigned)arg1;
-(unsigned)numberOfSections;
-(id<SBAppSwitcherPeopleDataSourceConsumer>)consumer;
-(void)setConsumer:(id)arg1;

@end

