/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@class NSString;

@interface DDURLMatch : NSObject {

	NSRange _range;
	NSString* _url;

}
-(void)dealloc;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)url;
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 url:(id)arg2 ;
@end

