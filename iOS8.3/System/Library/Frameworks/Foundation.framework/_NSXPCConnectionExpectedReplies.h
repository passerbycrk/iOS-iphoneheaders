/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:43 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSXPCConnectionExpectedReplies : NSObject {

	CFDictionaryRef _replyTable;
	int _lock;
	unsigned long long _sequence;

}
-(void)removeSequence:(unsigned long long)arg1 ;
-(unsigned long long)sequenceWithProgress:(id)arg1 ;
-(id)progressForSequence:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end

