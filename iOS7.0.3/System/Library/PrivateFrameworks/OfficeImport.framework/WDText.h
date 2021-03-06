/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, WDDocument, WDTableCell;

@interface WDText : NSObject {

	NSMutableArray* mBlocks;
	WDDocument* mDocument;
	int mTextType;
	WDTableCell* mTableCell;

}
-(void)dealloc;
-(BOOL)isEmpty;
-(id)content;
-(id)document;
-(unsigned)blockCount;
-(id)blockAt:(unsigned)arg1 ;
-(id)addParagraph;
-(int)textType;
-(void)removeLastCharacter:(unsigned short)arg1 ;
-(void)removeLastBlock;
-(int)tableNestingLevel;
-(id)addTable;
-(id)initWithDocument:(id)arg1 textType:(int)arg2 ;
-(id)tableCell;
-(id)initWithDocument:(id)arg1 textType:(int)arg2 tableCell:(id)arg3 ;
-(id)runIterator;
-(id)newRunIterator;
-(void)addBlock:(id)arg1 ;
-(id)blockIterator;
-(id)newBlockIterator;
-(id)blocks;
-(id)lastBlock;
-(unsigned)indexOfBlock:(id)arg1 ;
-(id)addParagraphAtIndex:(int)arg1 ;
-(id)addTableAtIndex:(int)arg1 ;
@end

