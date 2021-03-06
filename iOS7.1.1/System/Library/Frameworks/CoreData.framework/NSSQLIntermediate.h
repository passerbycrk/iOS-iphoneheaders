/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSSQLIntermediate : NSObject {

	NSSQLIntermediate* _scope;

}
+(bool)isSimpleKeypath:(id)arg1 ;
+(bool)expressionIsBasicKeypath:(id)arg1 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(bool)isOrScoped;
-(id)initWithScope:(id)arg1 ;
-(bool)isSelectTargetScoped;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(id)_lastScopedItem;
-(bool)isSimpleKeypath:(id)arg1 ;
-(bool)isVariableBasedKeypathScopedBySubquery:(id)arg1 ;
-(bool)isFunctionScoped;
-(void)_promoteJoinsForSubqueryScopedKeypaths;
-(id)fetchIntermediateForKeypathExpression:(id)arg1 ;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(bool)keypathExpressionIsSafeLHSForIn:(id)arg1 ;
-(id)fetchIntermediate;
-(id)governingAlias;
-(id)_generateSQLForExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForConstantValue:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForSubqueryExpression:(id)arg1 trailingKeypath:(id)arg2 inContext:(id)arg3 ;
-(bool)_functionExpressionIsSubqueryFollowedByKeypath:(id)arg1 ;
-(bool)isHavingScoped;
-(bool)expressionIsBasicKeypath:(id)arg1 ;
-(id)_generateSQLForVariableExpression:(id)arg1 inContext:(id)arg2 ;
-(void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1 ;
-(void)promoteJoinsInKeypathsForExpression:(id)arg1 ;
-(void)_promoteJoinsForKeypathExpression:(id)arg1 ;
-(void)_promoteJoinsForFunctionExpression:(id)arg1 ;
-(void)_promoteJoinsForAggregateExpression:(id)arg1 ;
-(void)_promoteJoinsForTernaryExpression:(id)arg1 ;
-(id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForConstantCollection:(id)arg1 inContext:(id)arg2 ;
-(bool)_canDoASubselectForExpression:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForFunctionExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForExpressionCollection:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForFetchExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForTernaryExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3 ;
-(id)scope;
@end

