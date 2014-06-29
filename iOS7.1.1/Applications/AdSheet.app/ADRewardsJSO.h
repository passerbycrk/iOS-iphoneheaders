/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AdSheet/ADJavaScriptObject.h>
#import <AdSheet/ADRewardsJSO_Bindings.h>

@class JSValue, NSArray, NSMutableSet;

@interface ADRewardsJSO : ADJavaScriptObject <ADRewardsJSO_Bindings> {

	NSMutableSet* _lookedUpRewards;

}

@property (nonatomic,retain) NSMutableSet * lookedUpRewards;              //@synthesize lookedUpRewards=_lookedUpRewards - In the implementation block
@property (nonatomic,retain) JSValue * listener; 
@property (nonatomic,readonly) NSArray * rewardTokens; 
-(id)initWithDelegate:(id)arg1 impressionController:(id)arg2 ;
-(id)rewardTokens;
-(void)_processRewardResponse:(id)arg1 forToken:(id)arg2 ;
-(id)lookedUpRewards;
-(void)_reportResult:(BOOL)arg1 forReward:(id)arg2 withErrorMessage:(id)arg3 ;
-(void)lookupReward:(id)arg1 ;
-(void)userRedeemedReward:(id)arg1 ;
-(void)reportRedeemFailureForReward:(id)arg1 withErrorMessage:(id)arg2 ;
-(void)setLookedUpRewards:(id)arg1 ;
-(void)dealloc;
@end
