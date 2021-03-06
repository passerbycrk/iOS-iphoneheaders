/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@protocol OS_dispatch_semaphore;
@class GEOZilchDecoder, NSError, NSObject;

@interface GEOZilchDecoderRequest : GEOMapRequest {

	unique_ptr<geo::ZilchMapModel, std::__1::default_delete<geo::ZilchMapModel> >* _mapModel;
	GEOZilchDecoder* _decoder;
	shared_ptr<zilch::Message>* _message;
	/*^block*/ id _pathHandler;
	/*^block*/ id _errorHandler;
	NSError* _firstTileLoadingError;
	NSObject<OS_dispatch_semaphore>* _finishedSemaphore;

}

@property (copy) id pathHandler;               //@synthesize pathHandler=_pathHandler - In the implementation block
@property (copy) id errorHandler;              //@synthesize errorHandler=_errorHandler - In the implementation block
-(/*^block*/ id)errorHandler;
-(void)dealloc;
-(void)cancel;
-(id).cxx_construct;
-(void)setErrorHandler:(/*^block*/ id)arg1 ;
-(id)initWithDecoder:(id)arg1 message:(shared_ptr<zilch::Message>*)arg2 ;
-(void)decodeWithPathHandler:(/*^block*/ id)arg1 errorHandler:(/*^block*/ id)arg2 ;
-(/*^block*/ id)pathHandler;
-(void)setPathHandler:(/*^block*/ id)arg1 ;
-(void)_finishedDecodingWithPath:(Path<std::__1::shared_ptr<geo::MapEdge> >*)arg1 ;
-(void).cxx_destruct;
@end

