/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface RTFNSTextList : NSObject <NSCoding, NSCopying> {

	NSString* _markerFormat;
	unsigned long long _listFlags;
	long long _startIndex;
	void* _listSecondary;

}
+(void)initialize;
+(id)_standardMarkerAttributesForAttributes:(id)arg1 ;
-(bool)_isOrdered;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(unsigned long long)options;
-(unsigned long long)listOptions;
-(id)initWithMarkerFormat:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setStartingItemNumber:(long long)arg1 ;
-(id)markerFormat;
-(long long)startingItemNumber;
-(id)_markerForMarkerFormat:(id)arg1 itemNumber:(long long)arg2 isNumbered:(bool*)arg3 substitutionStart:(unsigned long long*)arg4 end:(unsigned long long*)arg5 specifierStart:(unsigned long long*)arg6 end:(unsigned long long*)arg7 ;
-(id)markerForItemNumber:(long long)arg1 ;
-(id)_unaffixedMarkerForItemNumber:(long long)arg1 ;
-(id)_markerTitle;
-(id)_markerPrefix;
-(id)_markerSpecifier;
-(id)_unaffixedMarkerFormat;
-(id)_unaffixedMarkerTitle;
-(id)_markerSuffix;
@end

