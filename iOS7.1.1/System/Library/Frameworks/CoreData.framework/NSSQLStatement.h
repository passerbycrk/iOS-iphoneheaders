/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSQLEntity, NSMutableArray, NSString;

@interface NSSQLStatement : NSObject {

	NSSQLEntity* _entity;
	NSMutableArray* _bindVariables;
	NSMutableArray* _bindIntarrays;
	NSString* _sqlString;
	bool _isImpossibleCondition;
	NSSQLEntity* _fakeEntityForFetch;

}
-(unsigned)addBindVariable:(id)arg1 ;
-(void)setImpossibleCondition:(bool)arg1 ;
-(id)sqlString;
-(id)initWithEntity:(id)arg1 ;
-(id)initWithEntity:(id)arg1 sqlString:(id)arg2 ;
-(void)setSQLString:(id)arg1 ;
-(id)bindIntarrays;
-(bool)isImpossibleCondition;
-(void)clearCaches;
-(id)fakeEntityForFetch;
-(void)removeAllBindVariables;
-(id)bindVariables;
-(void)setBindVariables:(id)arg1 ;
-(void)cacheFakeEntityForFetch:(id)arg1 ;
-(void)setBindIntarrays:(id)arg1 ;
-(unsigned)addBindIntarray:(id)arg1 ;
-(void)removeAllBindIntarrays;
-(void)dealloc;
-(id)description;
-(bool)isReadOnly;
-(id)entity;
@end

