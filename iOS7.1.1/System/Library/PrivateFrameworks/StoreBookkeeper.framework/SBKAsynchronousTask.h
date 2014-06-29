/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSError, NSString, SBKTaskAssertion, NSMutableArray;

@interface SBKAsynchronousTask : NSObject {

	NSObject<OS_dispatch_queue>* _handlerQueue;
	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_source>* _timeoutTimer;
	bool _taskInvalidationDisabled;
	double _timeout;
	int _cancelType;
	id _result;
	NSError* _error;
	/*^block*/ id _expirationHandler;
	/*^block*/ id _finishedHandler;
	NSString* _debugDescription;
	SBKTaskAssertion* _taskAssertion;
	NSMutableArray* _completions;

}

@property (copy) id finishedHandler;                              //@synthesize finishedHandler=_finishedHandler - In the implementation block
@property (copy) id expirationHandler;                            //@synthesize expirationHandler=_expirationHandler - In the implementation block
@property (retain) id result;                                     //@synthesize result=_result - In the implementation block
@property (retain) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (assign) int cancelType;                                //@synthesize cancelType=_cancelType - In the implementation block
@property (copy) NSString * debugDescription;                     //@synthesize debugDescription=_debugDescription - In the implementation block
@property (retain) SBKTaskAssertion * taskAssertion;              //@synthesize taskAssertion=_taskAssertion - In the implementation block
@property (retain) NSMutableArray * completions;                  //@synthesize completions=_completions - In the implementation block
-(void)_invalidateTimer;
-(void)setError:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(void)invalidate;
-(void).cxx_destruct;
-(void)setResult:(id)arg1 ;
-(id)result;
-(void)setFinishedHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)finishedHandler;
-(id)error;
-(void)addTaskCompletionBlock:(/*^block*/ id)arg1 ;
-(id)initWithHandlerQueue:(id)arg1 timeout:(double)arg2 debugDescription:(id)arg3 ;
-(void)setExpirationHandler:(/*^block*/ id)arg1 ;
-(void)invokeTaskCompletionBlocksWithBlock:(/*^block*/ id)arg1 ;
-(void)finishTaskOperationWithResult:(id)arg1 error:(id)arg2 ;
-(void)beginTaskOperation;
-(int)cancelType;
-(void)setCompletions:(id)arg1 ;
-(void)setDebugDescription:(id)arg1 ;
-(void)setCancelType:(int)arg1 ;
-(void)_onQueueFireExpirationHandlerIfNecesary;
-(/*^block*/ id)expirationHandler;
-(void)setTaskAssertion:(id)arg1 ;
-(void)_invalidateAssertion:(bool)arg1 ;
-(void)endTaskOperation;
-(id)taskAssertion;
-(id)completions;
@end
