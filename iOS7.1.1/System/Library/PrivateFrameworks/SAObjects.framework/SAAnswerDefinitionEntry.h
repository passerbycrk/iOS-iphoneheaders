/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SAAnswerDefinitionEntry : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * definition; 
@property (nonatomic,copy) NSArray * examples; 
@property (nonatomic,copy) NSArray * variations; 
+(id)definitionEntry;
+(id)definitionEntryWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)definition;
-(id)encodedClassName;
-(void)setDefinition:(id)arg1 ;
-(id)examples;
-(void)setExamples:(id)arg1 ;
-(id)variations;
-(void)setVariations:(id)arg1 ;
@end
