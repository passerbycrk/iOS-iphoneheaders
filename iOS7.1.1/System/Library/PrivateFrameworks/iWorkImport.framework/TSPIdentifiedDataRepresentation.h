/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSPIdentifiedDataRepresentation <NSObject>
@optional
-(void)setFileStateIdentifier:(id)arg1;
-(bool)fromExternalReference;
-(void)setRelativeDataPath:(id)arg1;

@required
-(bool)setDataRepresentation:(id)arg1 shouldCopy:(bool)arg2 error:(id*)arg3;
-(long long)identifier;
-(bool)isLoaded;
@end
