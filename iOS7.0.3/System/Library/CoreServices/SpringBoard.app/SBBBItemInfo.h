/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SBBBItemInfo : NSObject {

	id _representedObject;

}

@property (nonatomic,readonly) id representedObject;               //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
+(id)infoWithRepresentedObject:(id)arg1 ;
-(Class)reusableViewClass;
-(float)heightForReusableViewInTableView:(id)arg1 ;
-(void)invalidateCachedLayoutData;
-(void)populateReusableView:(id)arg1 ;
-(id)initWithRepresentedObject:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)identifier;
-(id)representedObject;
@end

