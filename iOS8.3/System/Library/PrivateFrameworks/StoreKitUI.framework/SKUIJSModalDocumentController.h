/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:39:16 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <StoreKitUI/SKUIJSModalDocumentController.h>
@class NSArray;


@protocol SKUIJSModalDocumentController <JSExport>
@property (nonatomic,retain,readonly) NSArray * documents; 
@required
-(NSArray *)documents;
-(void)popDocument;
-(void)popToDocument:(id)arg1;
-(void)pushDocument:(id)arg1 :(id)arg2;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3;

@end


@class NSArray, SKUIModalDocumentController;

@interface SKUIJSModalDocumentController : IKJSObject <SKUIJSModalDocumentController> {

	SKUIModalDocumentController* _modalDocumentController;

}

@property (nonatomic,retain,readonly) NSArray * documents; 
-(NSArray *)documents;
-(void)popDocument;
-(void)popToDocument:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 modalDocumentController:(id)arg2 ;
-(id)_adjustedOptionsWithOptions:(id)arg1 ;
-(void)pushDocument:(id)arg1 :(id)arg2 ;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
@end

