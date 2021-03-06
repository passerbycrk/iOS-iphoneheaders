/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STWeatherCurrentConditions, NSArray, AFCity, STWeatherUnits;

@interface STShowWeatherForecastRequest : AFSiriRequest {

	STWeatherCurrentConditions* _currentConditions;
	NSArray* _hourlyForecasts;
	AFCity* _city;
	STWeatherUnits* _units;
	int _forecastType;

}
+(char)supportsSecureCoding;
-(id)city;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(id)units;
-(id)currentConditions;
-(id)hourlyForecasts;
-(id)_initWithCurrentConditions:(id)arg1 hourlyForecasts:(id)arg2 city:(id)arg3 units:(id)arg4 forecastType:(int)arg5 ;
-(int)forecastType;
@end

