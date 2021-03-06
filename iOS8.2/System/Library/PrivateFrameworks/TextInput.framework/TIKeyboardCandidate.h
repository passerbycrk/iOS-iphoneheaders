/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/NSCopying.h>
#import <TextInput/NSSecureCoding.h>
#import <TextInput/TIKeyboardCandidateCoding.h>

@class NSString;

@interface TIKeyboardCandidate : NSObject <NSCopying, NSSecureCoding, TIKeyboardCandidateCoding> {

	NSString* _alternativeText;

}

@property (nonatomic,readonly) NSString * candidate; 
@property (nonatomic,readonly) NSString * input; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,copy) NSString * alternativeText;                                                         //@synthesize alternativeText=_alternativeText - In the implementation block
@property (nonatomic,readonly) unsigned wordOriginFeedbackID; 
@property (nonatomic,readonly) unsigned deleteCount; 
@property (nonatomic,readonly) char isForShortcutConversion; 
@property (nonatomic,readonly) char isAutocorrection; 
@property (getter=isExtensionCandidate,nonatomic,readonly) char extensionCandidate; 
@property (getter=isEmojiCandidate,nonatomic,readonly) char emojiCandidate; 
@property (getter=isCompletionCandidate,nonatomic,readonly) char completionCandidate; 
@property (getter=isInlineCompletionCandidate,nonatomic,readonly) char inlineCompletionCandidate; 
@property (getter=isFullwidthCandidate,nonatomic,readonly) char fullwidthCandidate; 
@property (nonatomic,readonly) unsigned usageTrackingMask; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)type;
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(NSString *)input;
-(unsigned)deleteCount;
-(NSString *)alternativeText;
-(void)setAlternativeText:(NSString *)arg1 ;
-(NSString *)candidate;
-(char)isForShortcutConversion;
-(char)isExtensionCandidate;
-(char)isCompletionCandidate;
-(char)isInlineCompletionCandidate;
-(char)isFullwidthCandidate;
-(unsigned)usageTrackingMask;
-(unsigned)wordOriginFeedbackID;
-(char)isAutocorrection;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(char)isEmojiCandidate;
@end

