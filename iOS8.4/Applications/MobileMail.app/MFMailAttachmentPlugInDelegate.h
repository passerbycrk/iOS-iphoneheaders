/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFMailAttachmentPlugInDelegate <NSObject>
@optional
-(void)attachment:(id)arg1 startDownloadWithProgress:(id)arg2 group:(id)arg3 userInitiated:(char)arg4;
-(void)displayAttachmentTooLargeAlert;
-(void)attachment:(id)arg1 displayMenuFromRect:(CGRect)arg2 iconRect:(CGRect)arg3 inView:(id)arg4;
-(id)attachment:(id)arg1 iconForSize:(CGSize)arg2;
-(void)attachment:(id)arg1 cancelDownloadWithProgress:(id)arg2;
-(void)startDownloadAndSaveToCameraRollForAttachment:(id)arg1 withDownloadProgress:(id)arg2;
-(char)isAttachmentDownloadable:(id)arg1;
-(void)attachment:(id)arg1 displayViewerFromRect:(CGRect)arg2 inView:(id)arg3;
-(void)attachment:(id)arg1 didFinishDownloadWithProgress:(id)arg2;

@end

