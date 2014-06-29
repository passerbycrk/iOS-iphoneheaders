/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MailboxContentSelectionModelDataSource;
#import <MobileMail/MobileMail-Structs.h>
@class NSMutableArray;

@interface MailboxContentSelectionModel : NSObject {

	<MailboxContentSelectionModelDataSource>* _dataSource;
	CFDictionaryRef _selectedIndicesPerSection;
	CFDictionaryRef _indexToCountMappingPerSection;
	unsigned _messageCount;
	unsigned _conversationCount;
	NSMutableArray* _orderedSelectedMessages;

}
-(id)selectedIndexPaths;
-(id)selectedMessages;
-(id)selectedMessagesBySection;
-(id)orderedSelectedMessages;
-(void)getSelectionStateHasUnread:(BOOL*)arg1 hasUnflagged:(BOOL*)arg2 hasNonJunk:(BOOL*)arg3 supportsFlagging:(BOOL*)arg4 ;
-(id)flaggableMessages;
-(BOOL)isPathSelected:(id)arg1 ;
-(void)selectIndexPath:(id)arg1 ;
-(void)deselectIndexPath:(id)arg1 ;
-(void)deselectAllIndexPathsInTableView:(id)arg1 ;
-(BOOL)updateSelectionInSection:(unsigned)arg1 inserted:(id)arg2 removed:(id)arg3 updated:(id)arg4 relocated:(id)arg5 destination:(id)arg6 ;
-(void)reselectIndexPathsWithTableView:(id)arg1 ;
-(id)_selectedIndicesForSection:(unsigned)arg1 create:(BOOL)arg2 ;
-(CFDictionaryRef)_indexToCountMappingForSection:(unsigned)arg1 create:(BOOL)arg2 ;
-(void)_enumerateSelectedIndexSections:(/*^block*/ id)arg1 ;
-(id)sourcesForSelectedMessages;
-(void)_getSelectionStateForSources:(id)arg1 hasNonJunk:(BOOL*)arg2 supportsFlagging:(BOOL*)arg3 ;
-(void)select:(BOOL)arg1 indicesInTableView:(id)arg2 ;
-(unsigned)conversationCount;
-(void)dealloc;
-(id)init;
-(void)clear;
-(unsigned)messageCount;
-(id)initWithDataSource:(id)arg1 ;
@end
