/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OISFUBufferedInputStream.h>

@protocol OISFUBufferedInputStream <SFUInputStream>
@required
-(BOOL)seekWithinBufferToOffset:(long long)arg1;
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2;

@end


@protocol SFUInputStream;
@class NSString;

@interface OISFUBufferedInputStream : NSObject <OISFUBufferedInputStream> {

	id<SFUInputStream> mStream;
	char* mBuffer;
	unsigned long long mBufferSize;
	long long mBufferOffset;
	long long mBufferStart;
	long long mBufferEnd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)offset;
-(void)close;
-(id)initWithStream:(id)arg1 ;
-(id)initWithStream:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(id)initWithStream:(id)arg1 dataLength:(long long)arg2 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(BOOL)seekWithinBufferToOffset:(long long)arg1 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 ;
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2 ;
-(BOOL)canSeek;
@end

