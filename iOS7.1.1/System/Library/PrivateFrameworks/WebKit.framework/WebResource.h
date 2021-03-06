/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@class WebResourcePrivate;

@interface WebResource : NSObject <NSCoding, NSCopying> {

	WebResourcePrivate* _private;

}
-(id)_initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 response:(id)arg6 copyData:(bool)arg7 ;
-(void)_ignoreWhenUnarchiving;
-(id)_initWithData:(id)arg1 URL:(id)arg2 response:(id)arg3 ;
-(id)_suggestedFilename;
-(id)_response;
-(id)_stringValue;
-(ArchiveResource*)_coreResource;
-(id)_initWithCoreResource:(PassRefPtr<WebCore::ArchiveResource>*)arg1 ;
-(id)textEncodingName;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)data;
-(id)URL;
-(id)MIMEType;
-(id)frameName;
-(id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 ;
@end

