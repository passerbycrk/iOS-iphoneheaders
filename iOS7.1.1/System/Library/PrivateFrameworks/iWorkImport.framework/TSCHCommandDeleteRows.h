/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartCommand.h>

@class NSArray;

@interface TSCHCommandDeleteRows : TSCHChartCommand {

	NSRange mRowRange;
	NSArray* mCutNames;
	NSArray* mCutValues;
	bool mRemovedAllRows;
	NSArray* mCutColumnNames;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)commitPrimitive;
-(void)undoPrimitive;
-(void)redoPrimitive;
-(const ChartCommandArchive*)chartCommandArchiveFromUnarchiver:(id)arg1 ;
-(id)initWithChartInfo:(id)arg1 rowRange:(NSRange)arg2 ;
-(void)dealloc;
-(id).cxx_construct;
-(bool)process;
@end
