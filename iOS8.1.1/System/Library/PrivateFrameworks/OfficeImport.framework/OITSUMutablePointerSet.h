/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface OITSUMutablePointerSet : NSMutableSet {

	CFSetRef mSet;

}
+(Class)privateMutableClass;
+(Class)privateNonMutableClass;
-(void)getObjects:(id*)arg1 ;
-(void)dealloc;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)allObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectEnumerator;
-(id)setByAddingObjectsFromSet:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(id)setByAddingObjectsFromArray:(id)arg1 ;
-(id)setByAddingObject:(id)arg1 ;
-(id)initWithCFSet:(CFSetRef)arg1 ;
@end

