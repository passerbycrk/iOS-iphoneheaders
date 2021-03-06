/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPContentIndexer.h>

@class CPSearchMatcher, NSString, NSArray;

@interface SPTopHitIndexer : SPContentIndexer {

	CPSearchMatcher* _matcher;
	NSString* _queryString;
	NSArray* _searchDomains;

}
+(void)preheat;
+(id)indexerForTopHits;
-(void)dealloc;
-(id)init;
-(BOOL)nextSearchResults:(id*)arg1 ;
-(float)_calculateMovingAverageWithLastTime:(double)arg1 andLastAverage:(float)arg2 ;
-(id)_externalRecordForIdentifier:(id)arg1 domain:(unsigned)arg2 ;
-(id)_recordForExternalID:(id)arg1 displayIdentifier:(id)arg2 category:(id)arg3 ;
-(void)_setTopHitWithCurrentHit:(id)arg1 content:(id)arg2 stringIdentifier:(id)arg3 domain:(unsigned)arg4 query:(id)arg5 ;
-(id)_getDisplayIdentifierForDomain:(unsigned)arg1 ;
-(id)_fetchAndCleanQueryResults:(id)arg1 ;
-(void)setIdentifier:(id)arg1 forRecordDictionary:(id)arg2 ;
-(void)removeIdentifier:(id)arg1 ;
-(void)setTopHit:(id)arg1 domain:(unsigned)arg2 queryString:(id)arg3 ;
-(void)beginSearch:(id)arg1 domains:(id)arg2 ;
@end

