/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSURLDownloadDecoder.h>
#import <Foundation/NSURLDataDecoder.h>

@class NSString;

@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder, NSURLDataDecoder> {

	z_stream_s* _stream;
	unsigned long long _modificationTime;
	NSString* _filename;
	bool _streamInitialized;
	bool _decodedHeader;
	bool _finishedInflating;
	bool _pad;

}
+(bool)decodeDownloadHeader:(id)arg1 headerLength:(int*)arg2 modificationTime:(unsigned long long*)arg3 filename:(id*)arg4 ;
+(bool)canDecodeDownloadHeaderData:(id)arg1 ;
+(id)MIMEType;
-(id)decodeData:(id)arg1 ;
-(bool)isFinishedDecoding;
-(bool)decodeDownloadData:(id)arg1 dataForkData:(id*)arg2 resourceForkData:(id*)arg3 ;
-(bool)finishDownloadDecoding;
-(id)filenameWithOriginalFilename:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)fileAttributes;
-(void)finalize;
@end

