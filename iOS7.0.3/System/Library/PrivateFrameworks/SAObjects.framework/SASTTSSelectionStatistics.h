/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSArray;

@interface SASTTSSelectionStatistics : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * completionType; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSArray * listenedItems; 
@property (assign,nonatomic) int selectedItemIndex; 
@property (nonatomic,copy) NSString * sessionId; 
@property (nonatomic,copy) NSArray * timesListened; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)tTSSelectionStatistics;
+(id)tTSSelectionStatisticsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(int)selectedItemIndex;
-(void)setSelectedItemIndex:(int)arg1 ;
-(id)encodedClassName;
-(id)sessionId;
-(void)setSessionId:(id)arg1 ;
-(id)interactionId;
-(void)setInteractionId:(id)arg1 ;
-(id)completionType;
-(void)setCompletionType:(id)arg1 ;
-(id)listenedItems;
-(void)setListenedItems:(id)arg1 ;
-(id)timesListened;
-(void)setTimesListened:(id)arg1 ;
@end

