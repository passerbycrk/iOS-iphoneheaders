/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface WebService : SQLiteEntity
+(id)webServicesInDatabase:(id)arg1 matchingPredicate:(id)arg2 ;
+(id)webServicesInDatabase:(id)arg1 withPassType:(id)arg2 ;
+(id)anyInDatabase:(id)arg1 withPassType:(id)arg2 serviceURL:(id)arg3 ;
+(id)insertWebServiceWithPassType:(id)arg1 serviceURL:(id)arg2 inDatabase:(id)arg3 ;
+(id)_insertionDictionaryWithPassType:(id)arg1 serviceURL:(id)arg2 ;
+(id)_updateDictionaryWithWebService:(id)arg1 ;
+(id)_propertySettersForWebService;
+(id)_predicateForPassType:(id)arg1 ;
+(id)_predicateForPassType:(id)arg1 serviceURL:(id)arg2 ;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)databaseTable;
+(id)joinClauseForProperty:(id)arg1 ;
-(void)updateWithLastUpdatedTag:(id)arg1 ;
-(void)updateWithLastDeletionDate:(id)arg1 ;
-(void)updateWithWebService:(id)arg1 ;
-(id)lastDeletionDate;
-(id)tagLastUpdateDate;
-(id)initWithPassType:(id)arg1 serviceURL:(id)arg2 inDatabase:(id)arg3 ;
-(id)webService;
-(id)lastUpdatedTag;
@end

