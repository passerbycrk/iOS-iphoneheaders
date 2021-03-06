/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:39 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaArray.h>
#import <MediaPlayer/NSCopying.h>

@protocol MPMediaLibraryResultSet, OS_dispatch_queue;
@class MPWeakRef, MPMediaQuerySectionInfo, NSMutableArray, NSObject, MPMediaQueryCriteria;

@interface MPMediaEntityResultSetArray : MPMediaArray <NSCopying> {

	id<MPMediaLibraryResultSet> _resultSet;
	Class _entityClass;
	MPWeakRef* _libraryWeakRef;
	MPMediaQuerySectionInfo* _sectionInfo;
	NSMutableArray* _entities;
	NSObject*<OS_dispatch_queue> _entitiesQueue;
	MPMediaQueryCriteria* _queryCriteria;

}
-(id)sectionInfo;
-(id)initWithResultSet:(id)arg1 queryCriteria:(id)arg2 entityType:(unsigned)arg3 library:(id)arg4 ;
-(void)objectAtIndex:(unsigned)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

