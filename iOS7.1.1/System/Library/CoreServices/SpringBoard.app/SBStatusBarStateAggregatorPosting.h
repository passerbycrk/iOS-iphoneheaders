/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBStatusBarStateAggregatorPosting <NSObject>
@required
-(void)statusBarStateAggregatorDidStartPost:(id)arg1;
-(void)statusBarStateAggregator:(id)arg1 didVisitItem:(int)arg2 withUpdates:(BOOL)arg3 toData:(const /*function pointer*/ void**)arg4;
-(void)statusBarStateAggregator:(id)arg1 didUpdateNonItemData:(const /*function pointer*/ void**)arg2;
-(void)statusBarStateAggregatorDidFinishPost:(id)arg1 withData:(const /*function pointer*/ void**)arg2 actions:(int)arg3;
@end

