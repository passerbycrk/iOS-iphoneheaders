/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SWRunWorkoutProxy.h>

@class NSTimer, NSString, NSDictionary;

@interface SWRemoteRunWorkoutProxyClient : SWRunWorkoutProxy {

	NSTimer* _updateTimer;
	NSString* _goalType;
	NSString* _presetGoal;
	float _goal;
	NSString* _sensorSearchState;
	NSString* _workoutState;
	NSDictionary* _workoutData;
	BOOL _hasEverStarted;
	BOOL _hasPowerSong;
	NSString* _powerSongName;
	BOOL _shouldControlMusic;
	long long _musicSelection;
	NSString* _currentSongName;
	NSString* _currentAlbumName;
	NSString* _currentArtistName;

}
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)dealloc;
-(id)init;
-(float)goal;
-(id)workoutData;
-(void)activateWorkout;
-(void)pauseWorkout;
-(BOOL)shouldControlMusic;
-(void)selectNextSong;
-(void)selectPreviousSong;
-(void)playOnDemandPrompt;
-(void)endWorkout;
-(id)goalType;
-(void)prepareToActivateWorkout;
-(id)workoutState;
-(BOOL)hasEverStarted;
-(id)presetGoal;
-(void)playPowerSong;
-(void)goToNowPlaying;
-(void)pauseMusic;
-(void)playMusic;
-(void)_sensorSearchStateChanged:(id)arg1 ;
-(void)_workoutStateChanged:(id)arg1 ;
-(void)_nowPlayingChanged:(id)arg1 ;
-(long long)musicSelection;
-(id)currentSongName;
-(id)currentAlbumName;
-(id)currentArtistName;
-(id)sensorSearchState;
-(BOOL)hasPowerSong;
-(id)powerSongName;
-(void)_handlePropertyUpdateNotification:(id)arg1 ;
-(void)_checkinWithServer;
@end

