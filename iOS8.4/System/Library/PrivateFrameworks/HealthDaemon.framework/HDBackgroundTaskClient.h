/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface HDBackgroundTaskClient : NSObject {

	/*^block*/id _taskHandler;

}
-(id)initWithTaskHandler:(/*^block*/id)arg1 ;
-(void)deliverTask:(id)arg1 taskName:(id)arg2 onQueue:(id)arg3 ;
@end

