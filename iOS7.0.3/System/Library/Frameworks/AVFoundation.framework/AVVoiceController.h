/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSString, NSDictionary;

@interface AVVoiceController : NSObject {

	void* _impl;

}

@property (getter=isBargeInDetectEnabled) BOOL bargeInDetectEnabled; 
@property (getter=isStopOnBargeInEnabled) BOOL stopOnBargeInEnabled; 
@property (readonly) NSString * recordRoute; 
@property (readonly) unsigned long long lastRecordStartTime; 
@property (readonly) NSDictionary * recordSettings; 
@property (getter=isRecording,readonly) BOOL recording; 
@property (assign) <Endpointer> * endpointerDelegate; 
@property (assign) int recordEndpointMode; 
@property (assign) double recordStartWaitTime; 
@property (assign) double recordInterspeechWaitTime; 
@property (assign) double recordEndWaitTime; 
@property (@dynamic) <AVVoiceControllerRecordDelegate> * recordDelegate; 
@property (getter=isMeteringEnabled) BOOL meteringEnabled; 
@property (readonly) NSDictionary * playbackSettings; 
@property (getter=isPlaying,readonly) BOOL playing; 
@property (@dynamic) <AVVoiceControllerPlaybackDelegate> * playbackDelegate; 
@property (assign) float playbackVolume; 
@property (getter=isStopOnEndpointEnabled) BOOL stopOnEndpointEnabled; 
@property (assign) float alertVolume; 
-(BOOL)isRecording;
-(void)handleInterruption:(id)arg1 ;
-(void)handleRouteChange:(id)arg1 ;
-(void)handleMediaServerDeath:(id)arg1 ;
-(void)handleMediaServerReset:(id)arg1 ;
-(ControllerImpl*)impl;
-(void)setSessionNotifications;
-(void)removeSessionNotifications;
-(void)hardwareConfigChanged;
-(void)beganRecording;
-(void)recordBufferReceived:(MyAudioQueueBuffer*)arg1 ;
-(void)finishedRecording;
-(void)startpointDetected;
-(void)interspeechPointDetected;
-(void)endpointDetected;
-(void)encodeError;
-(void)beganPlaying;
-(void)playbackBufferReceived:(MyAudioQueueBuffer*)arg1 ;
-(void)finishedPlaying;
-(void)decodeError;
-(void)beginRecordInterruption;
-(void)endRecordInterruption;
-(void)beginPlaybackInterruption;
-(void)endPlaybackInterruption;
-(id)recordRoute;
-(unsigned long long)lastRecordStartTime;
-(BOOL)isBargeInDetectEnabled;
-(void)setBargeInDetectEnabled:(BOOL)arg1 ;
-(BOOL)isStopOnBargeInEnabled;
-(void)setStopOnBargeInEnabled:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 error:(id*)arg2 ;
-(void)prewarmAudioSession;
-(void)releaseAudioSession;
-(BOOL)setCurrentContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareRecordWithSettings:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAlertSoundFromURL:(id)arg1 forType:(int)arg2 ;
-(BOOL)playAlertSoundForType:(int)arg1 ;
-(BOOL)startRecording;
-(BOOL)preparePlaybackWithSettings:(id)arg1 error:(id*)arg2 ;
-(BOOL)preparePlaybackFromURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)startPlaying;
-(id)recordDelegate;
-(void)setRecordDelegate:(id)arg1 ;
-(id)recordSettings;
-(double)getRecordBufferDuration;
-(BOOL)setRecordBufferDuration:(double)arg1 ;
-(id)endpointerDelegate;
-(void)setEndpointerDelegate:(id)arg1 ;
-(int)recordEndpointMode;
-(void)setRecordEndpointMode:(int)arg1 ;
-(double)recordStartWaitTime;
-(void)setRecordStartWaitTime:(double)arg1 ;
-(double)recordInterspeechWaitTime;
-(void)setRecordInterspeechWaitTime:(double)arg1 ;
-(double)recordEndWaitTime;
-(void)setRecordEndWaitTime:(double)arg1 ;
-(id)playbackDelegate;
-(void)setPlaybackDelegate:(id)arg1 ;
-(id)playbackSettings;
-(double)getPlaybackBufferDuration;
-(BOOL)setPlaybackBufferDuration:(double)arg1 ;
-(void)setAlertVolume:(float)arg1 ;
-(float)alertVolume;
-(void)setPlaybackVolume:(float)arg1 ;
-(float)playbackVolume;
-(BOOL)isMeteringEnabled;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(float)peakPowerForChannel:(unsigned)arg1 ;
-(float)averagePowerForChannel:(unsigned)arg1 ;
-(BOOL)isStopOnEndpointEnabled;
-(void)setStopOnEndpointEnabled:(BOOL)arg1 ;
-(void)stopPlaying;
-(BOOL)isPlaying;
-(void)dealloc;
-(void)stopRecording;
-(void)finalize;
@end

