/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GKRemoteViewControllerDelegate <NSObject>
@property (nonatomic,retain) GKGame * game; 
@optional
-(void)nudge;

@required
-(id)game;
-(void)setGame:(id)arg1;
-(void)setIntialState:(id)arg1 withReply:(/*^block*/ id)arg2;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 withReply:(/*^block*/ id)arg3;
-(void)remoteViewControllerDidFinish;
-(void)remoteViewControllerDidCancel;
@end
