/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPFontHeightCache : NSObject {

	list<unsigned long, std::__1::allocator<unsigned long> >* _fontHashList;
	map<unsigned long, TSWPFontHeightCacheEntry, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TSWPFontHeightCacheEntry> > >* _fontHashToInfoMap;
	unsigned _cacheSize;
	unsigned _maxCacheSize;
	opaque_pthread_rwlock_t _lock;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedCache;
+(id)_singletonAlloc;
-(SCD_Struct_TS608)fontHeightInfoForFont:(CTFontRef)arg1 ;
-(char)p_findEntryForFont:(CTFontRef)arg1 outHeightInfo:(SCD_Struct_TS608*)arg2 collision:(char*)arg3 ;
-(void)p_addEntryForFont:(CTFontRef)arg1 heightInfo:(const SCD_Struct_TS608*)arg2 ;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(oneway void)release;
@end

