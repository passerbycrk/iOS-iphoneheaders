/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSURLResponse;

@interface ISURLRequestPerformance : NSObject {

	double _finishTime;
	double _receivedResponseTime;
	double _renderBeginTime;
	double _renderEndTime;
	double _startTime;
	NSURLResponse* _urlResponse;

}

@property (assign,nonatomic) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSURLResponse * URLResponse;                      //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,readonly) double finishInterval; 
@property (nonatomic,readonly) double receivedResponseInterval; 
@property (nonatomic,readonly) double renderBeginInterval; 
@property (nonatomic,readonly) double renderEndInterval; 
-(void)dealloc;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(void)setURLResponse:(id)arg1 ;
-(void)setFinishTime:(double)arg1 ;
-(void)setReceivedResponseTime:(double)arg1 ;
-(void)setRenderFinishTime:(double)arg1 ;
-(double)renderEndInterval;
-(id)URLResponse;
-(void)setRenderBeginTime:(double)arg1 ;
-(double)finishInterval;
-(double)receivedResponseInterval;
-(double)renderBeginInterval;
@end

