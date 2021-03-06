/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:09:07 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/NSCopying.h>
#import <SceneKit/NSSecureCoding.h>

@class NSString, NSMutableDictionary;

@interface SCNProgram : NSObject <NSCopying, NSSecureCoding> {

	id _reserved;
	NSString* _vertexShader;
	NSString* _fragmentShader;
	NSString* _name;
	id _delegate;
	NSMutableDictionary* _semanticInfos;
	char _opaque;

}

@property (nonatomic,copy) NSString * vertexShader; 
@property (nonatomic,copy) NSString * fragmentShader; 
@property (assign,getter=isOpaque,nonatomic) char opaque; 
@property (assign,nonatomic) id<SCNProgramDelegate> delegate; 
+(id)SCNJSExportProtocol;
+(id)program;
+(char)supportsSecureCoding;
-(void)setVertexShader:(NSString *)arg1 ;
-(void)setFragmentShader:(NSString *)arg1 ;
-(NSString *)vertexShader;
-(NSString *)fragmentShader;
-(void)setSemanticInfos:(id)arg1 ;
-(void)setSemantic:(id)arg1 forSymbol:(id)arg2 options:(id)arg3 ;
-(id)semanticForSymbol:(id)arg1 ;
-(void)_customEncodingOfSCNProgram:(id)arg1 ;
-(void)_customDecodingOfSCNProgram:(id)arg1 ;
-(id)_optionsForSymbol:(id)arg1 ;
-(id)_allSymbolsWithSceneKitSemantic;
-(void)setSemantic:(id)arg1 forSymbol:(id)arg2 ;
-(void)setOpaque:(char)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SCNProgramDelegate>)arg1 ;
-(id)init;
-(id)copy;
-(id<SCNProgramDelegate>)delegate;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isOpaque;
@end

