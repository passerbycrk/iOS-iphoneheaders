/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FBAQuestionChoice;

@interface FBAChoiceCell : UITableViewCell {

	FBAQuestionChoice* _choice;

}

@property (assign,nonatomic,__weak) FBAQuestionChoice * choice;              //@synthesize choice=_choice - In the implementation block
-(void)setChoice:(FBAQuestionChoice *)arg1 ;
-(FBAQuestionChoice *)choice;
-(void)updateWithChoice:(id)arg1 ;
-(void)evaluateSelectionWithValue:(id)arg1 ;
-(void)evaluateSelectionWithValues:(id)arg1 ;
@end

