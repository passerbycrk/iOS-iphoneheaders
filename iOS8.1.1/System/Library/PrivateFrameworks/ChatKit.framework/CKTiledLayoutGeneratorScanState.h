/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CKTiledLayoutGeneratorScanState : NSObject {

	BOOL _scannedBatchHasCaption;
	long long _scanLocation;
	id _scannedBatchID;
	long long _scanSpecialSequenceCount;

}

@property (assign,nonatomic) long long scanLocation;                          //@synthesize scanLocation=_scanLocation - In the implementation block
@property (nonatomic,retain) id scannedBatchID;                               //@synthesize scannedBatchID=_scannedBatchID - In the implementation block
@property (assign,nonatomic) BOOL scannedBatchHasCaption;                     //@synthesize scannedBatchHasCaption=_scannedBatchHasCaption - In the implementation block
@property (assign,nonatomic) long long scanSpecialSequenceCount;              //@synthesize scanSpecialSequenceCount=_scanSpecialSequenceCount - In the implementation block
-(void)setScannedBatchID:(id)arg1 ;
-(void)setScannedBatchHasCaption:(BOOL)arg1 ;
-(id)scannedBatchID;
-(BOOL)scannedBatchHasCaption;
-(long long)scanSpecialSequenceCount;
-(void)setScanSpecialSequenceCount:(long long)arg1 ;
-(void)setScanLocation:(long long)arg1 ;
-(long long)scanLocation;
@end

