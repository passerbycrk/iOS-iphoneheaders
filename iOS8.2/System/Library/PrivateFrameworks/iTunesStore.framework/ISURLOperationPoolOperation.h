/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSMutableArray, ISURLOperation;

@interface ISURLOperationPoolOperation : ISOperation {

	int _cancelCount;
	char _forwardImmediately;
	NSMutableArray* _operations;

}

@property (nonatomic,readonly) ISURLOperation * mainOperation; 
-(void)dealloc;
-(void)addOperation:(id)arg1 ;
-(void)run;
-(char)containsOperation:(id)arg1 ;
-(ISURLOperation *)mainOperation;
-(void)_forwardResponseFromOperation:(id)arg1 toOperation:(id)arg2 ;
-(void)cancelOperation:(id)arg1 ;
@end

