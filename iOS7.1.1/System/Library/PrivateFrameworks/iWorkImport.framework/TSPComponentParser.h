/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSPComponentParserDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@interface TSPComponentParser : NSObject {

	<TSPComponentParserDelegate>* _delegate;
	unsigned long long _state;
	unsigned _archiveInfoLength;
	ArchiveInfo* _archiveInfo;
	unsigned _messagesLength;

}
-(void)readWithChannel:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(bool)readFromStream:(DispatchDataInputStream*)arg1 error:(id*)arg2 ;
-(unsigned long long)readArchiveInfoLengthFromStream:(DispatchDataInputStream*)arg1 error:(id*)arg2 ;
-(unsigned long long)readArchiveInfoFromStream:(DispatchDataInputStream*)arg1 error:(id*)arg2 ;
-(unsigned long long)readArchiveFromStream:(DispatchDataInputStream*)arg1 error:(id*)arg2 ;
-(id)init;
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)initWithDelegate:(id)arg1 ;
@end
