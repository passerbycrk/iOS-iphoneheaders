/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCharacterSet;

@interface Romakana : NSObject {

	bool _kanaMode;
	NSCharacterSet* _consonantsCharacterSet;

}
+(id)hiraganaString:(id)arg1 mappingArray:(id)arg2 withKanaMode:(bool)arg3 ;
+(id)oneKanaToRoma:(id)arg1 ;
+(id)hiraganaString:(id)arg1 withKanaMode:(bool)arg2 ;
+(id)kanaSymbol:(id)arg1 ;
-(void)dealloc;
-(id)roma2hiragana:(id)arg1 stripIncompleteRomajiAtEnd:(bool)arg2 incompleteRomajiLength:(unsigned long long*)arg3 ;
-(id)initWithKanaMode:(bool)arg1 ;
-(id)roma2katakana:(id)arg1 ;
-(id)adjustIncompleteRomaji:(id)arg1 ;
@end

