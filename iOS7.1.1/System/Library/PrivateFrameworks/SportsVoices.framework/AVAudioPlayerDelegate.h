/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVAudioPlayerDelegate <NSObject>
@optional
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)audioPlayerBeginInterruption:(id)arg1;
-(void)audioPlayerEndInterruption:(id)arg1 withOptions:(unsigned long long)arg2;
-(void)audioPlayerEndInterruption:(id)arg1 withFlags:(unsigned long long)arg2;
-(void)audioPlayerEndInterruption:(id)arg1;
@end
