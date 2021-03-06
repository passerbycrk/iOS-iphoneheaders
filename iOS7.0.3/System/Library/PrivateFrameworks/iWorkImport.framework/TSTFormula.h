/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class TSTExpressionNode, TSCECalculationEngine, TSTTableInfo, NSString;

@interface TSTFormula : NSObject <NSCopying> {

	TSTExpressionNode* mExpressionTree;
	TSCECalculationEngine* mCalculationEngine;
	TSTTableInfo* mHostInfo;
	NSString* mInitialWhitespace;
	SCD_Struct_TS266 mHostCell;
	BOOL mSyntaxError;
	BOOL mFixupFormulas;
	BOOL mFormulaWasFixable;
	BOOL mFormulaFixupsShouldStick;
	BOOL mEmpty;
	BOOL mRequireEqualsToken;

}

@property (nonatomic,readonly) TSCEFormula* formula; 
@property (nonatomic,copy) NSString * initialWhitespace; 
@property (assign,getter=isSyntaxError,nonatomic) BOOL syntaxError; 
@property (assign,nonatomic) BOOL fixupFormulas; 
@property (nonatomic,readonly) BOOL formulaWasFixable; 
@property (nonatomic,readonly) BOOL formulaFixupsShouldStick; 
@property (assign,nonatomic) BOOL requireEqualsToken; 
@property (nonatomic,retain) TSTExpressionNode * expressionTree; 
@property (assign,getter=isEmpty,nonatomic) BOOL empty; 
@property (nonatomic,retain) TSCECalculationEngine * calculationEngine; 
+(id)singleQuoteCharacters;
+(id)doubleQuoteCharacters;
+(id)leftParenCharacters;
+(id)rightParenCharacters;
+(id)p_charactersToTemporarilyChopOffEndToFixSyntaxError;
+(id)leadingSingleQuoteEscapeCharacters;
+(id)equalsCharacters;
+(int)formulaQuoteContextAtCharIndex:(unsigned)arg1 inStorage:(id)arg2 ;
-(void)setCalculationEngine:(id)arg1 ;
-(BOOL)isSyntaxError;
-(id)calculationEngine;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 ;
-(id)initWithCalculationEngine:(id)arg1 expressionTree:(id)arg2 hostCell:(SCD_Struct_TS266)arg3 hostTable:(id)arg4 ;
-(void)setExpressionTree:(id)arg1 ;
-(void)setInitialWhitespace:(id)arg1 ;
-(void)setSyntaxError:(BOOL)arg1 ;
-(id)nodesToCheckForBareArgumentPlaceholders;
-(void)reparseWithStorage:(id)arg1 adjustExpressionTree:(/*^block*/ id)arg2 ;
-(id)p_fixFormula:(id)arg1 ;
-(id)expressionTree;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 hostCell:(SCD_Struct_TS266)arg3 TSCEFormula:(const TSCEFormula*)arg4 ownerID:(CFUUIDRef)arg5 ;
-(id)initWithCalculationEngine:(id)arg1 hostCell:(SCD_Struct_TS266)arg2 hostTable:(id)arg3 ;
-(BOOL)hasBareArgumentPlaceholders;
-(void)reparseWithStorage:(id)arg1 ;
-(BOOL)fixupFormulas;
-(void)setFixupFormulas:(BOOL)arg1 ;
-(BOOL)formulaWasFixable;
-(BOOL)formulaFixupsShouldStick;
-(id)initialWhitespace;
-(BOOL)requireEqualsToken;
-(void)setRequireEqualsToken:(BOOL)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isEmpty;
-(id).cxx_construct;
-(void)reset;
-(TSCEFormula*)formula;
@end

