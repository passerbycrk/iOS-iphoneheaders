/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class EBReaderState, EDSheet;

@interface EBReaderSheetState : NSObject {

	EBReaderState* mReaderState;
	EDSheet* mEDSheet;
	map<int, unsigned long, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, unsigned long> > >* mSharedFormulas;
	unsigned long long mChartIndex;

}
-(void)dealloc;
-(id)workbook;
-(XlBinaryReader*)xlReader;
-(id)edSheet;
-(id)readerState;
-(unsigned long long)sharedFormulaIndexForRowCol:(int)arg1 ;
-(void)setSharedFormulaIndex:(unsigned long long)arg1 forRowCol:(int)arg2 ;
-(id)initWithReaderState:(id)arg1 ;
-(void)setEDSheet:(id)arg1 ;
-(unsigned long long)nextChartIndex;
-(void)reportWorksheetWarning:(TCTaggedMessageStructure*)arg1 ;
-(id)resources;
@end

