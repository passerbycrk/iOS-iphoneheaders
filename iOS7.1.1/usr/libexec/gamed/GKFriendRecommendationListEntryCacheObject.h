/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKRecommendationEntryCacheObject.h>

@class NSString, NSNumber;

@interface GKFriendRecommendationListEntryCacheObject : GKRecommendationEntryCacheObject

@property (nonatomic,@dynamic,retain) NSString * playerID; 
@property (nonatomic,@dynamic,retain) NSString * reasonID; 
@property (nonatomic,@dynamic,retain) NSString * reason; 
@property (nonatomic,@dynamic,retain) NSString * reason2; 
@property (nonatomic,@dynamic,retain) NSNumber * rid; 
@property (nonatomic,@dynamic,retain) NSNumber * source; 
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 ;
-(id)internalRepresentation;
@end
