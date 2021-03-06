/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PrintKit/PrintKit-Structs.h>
@interface PKDefaults : NSObject
+(long long)printerLookupWithArray:(id)arg1 withTimeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)lastUsedPrinters;
+(id)lastUsedPrintersForPhoto:(BOOL)arg1 ;
+(void)addLastUsedPrinter:(id)arg1 duplexMode:(id)arg2 lastUsedSize:(CGSize)arg3 forPhoto:(BOOL)arg4 ;
+(void)addLastUsedPrinter:(id)arg1 duplexMode:(id)arg2 lastUsedSize:(CGSize)arg3 ;
@end

