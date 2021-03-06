/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol AVRecorderImpl <NSObject>
@required
-(BOOL)isRecording;
-(double)recordedDuration;
-(BOOL)takePhoto;
-(id)attributeForKey:(id)arg1;
-(id)init;
-(BOOL)isActive;
-(void)deactivate;
-(BOOL)start;
-(void)stop;
-(void)setFilePath:(id)arg1;
-(id)filePath;
-(BOOL)activate:(id*)arg1;
-(BOOL)autoFocusAtPoint:(CGPoint)arg1;
-(float)micVolume;
-(void)setMicVolume:(float)arg1;
-(long long)recordedFileSizeInBytes;
-(unsigned)audioNumDeviceChannels;
-(BOOL)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2;
-(BOOL)audioCurrentAverageDecibelLevels:(float*)arg1 andPeakDecibelLevels:(float*)arg2;
-(void)setAttribute:(id)arg1 forKey:(id)arg2;
@end

