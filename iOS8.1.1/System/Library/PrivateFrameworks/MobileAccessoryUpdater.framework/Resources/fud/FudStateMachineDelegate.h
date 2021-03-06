/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Resources/fud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FudStateMachineDelegate <NSObject>
@required
-(id)getPluginWithName:(id)arg1 forFilter:(id)arg2 delegate:(id)arg3 info:(id*)arg4 options:(id)arg5;
-(id)getStorage;
-(void)stepWillBegin:(int)arg1 stateMachine:(id)arg2;
-(void)stepComplete:(int)arg1 stateMachine:(id)arg2 status:(BOOL)arg3 error:(id)arg4 info:(id)arg5;
-(void)stepProgress:(int)arg1 stateMachine:(id)arg2 progress:(double)arg3 overallProgress:(double)arg4;
-(void)accessoryDisconnected:(id)arg1 error:(id)arg2;

@end

