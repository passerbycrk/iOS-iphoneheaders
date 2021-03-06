/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSMS.app/MobileSMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSMS/MobileSMS-Structs.h>
#import <UIKit/UIApplication.h>
#import <CommunicationsSetupUI/CNFRegWizardControllerDelegate.h>
#import <IMFoundation/IMSystemMonitorListener.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, CKMessagesController, CNFRegWizardController, NSString, NSArray, NSURL, BKSProcessAssertion, TLAlert;

@interface SMSApplication : UIApplication <CNFRegWizardControllerDelegate, IMSystemMonitorListener, UIApplicationDelegate> {

	BOOL _waitToSendFinishLaunching;
	BOOL _isLocked;
	BOOL _isSuspended;
	BOOL _hasEmail;
	UIWindow* _window;
	CKMessagesController* _messagesController;
	int _delaySuspendCount;
	unsigned _backgroundTask;
	CNFRegWizardController* _madridRegistrationController;
	NSString* _defaultPng;
	int _suspendTimeStatusBarStyle;
	NSArray* _suspendUnreadMessages;
	NSURL* _deferredLoadURL;
	BKSProcessAssertion* _backgroundAssertion;
	TLAlert* _alert;

}

@property (nonatomic,retain) NSURL * deferredLoadURL;                                //@synthesize deferredLoadURL=_deferredLoadURL - In the implementation block
@property (nonatomic,retain) CKMessagesController * messagesController;              //@synthesize messagesController=_messagesController - In the implementation block
@property (nonatomic,retain) UIWindow * window; 
-(void)startShowMessagesTest:(id)arg1 ;
-(void)startShowNewComposeTest:(id)arg1 ;
-(void)startScrollConversationsTest:(id)arg1 ;
-(void)startScrollTranscriptTest:(id)arg1 ;
-(void)startRotationTest:(id)arg1 ;
-(void)showTranscriptListNotAnimated;
-(void)showNextMessage;
-(void)showTranscriptList;
-(void)scrollTranscript;
-(void)didShowNewCompose;
-(void)_handleUnreadCountChanged:(id)arg1 ;
-(void)_handleTypingIndicatorChanged:(id)arg1 ;
-(BOOL)_shouldShowMadridRegistrationView;
-(BOOL)_restoreState:(out /*^block*/ id*)arg1 ;
-(void)_mediaDidStartSaving;
-(void)_mediaDidFinishSaving;
-(void)_receivedMessage:(id)arg1 ;
-(void)_handleAccountsChanged:(id)arg1 ;
-(void)_destroyMadridRegistrationView;
-(void)stopPlayingLastAlertTone;
-(void)_playMessageReceivedForMessage:(id)arg1 ;
-(void)_loadURLMessageGUID:(id)arg1 ;
-(void)_activateSiriForConversation:(id)arg1 ;
-(void)setWaitToSendFinishLaunching:(BOOL)arg1 ;
-(id)defaultPng;
-(id)deferredLoadURL;
-(void)setDeferredLoadURL:(id)arg1 ;
-(void)reportAppLaunchFinished;
-(void)setDefaultPng:(id)arg1 ;
-(void)_storeState;
-(BOOL)_restoreState;
-(void)_scheduleDeferredSetup;
-(void)_prepareForResume:(BOOL)arg1 ;
-(void)_showMadridRegistrationViewIfNecessary;
-(void)__updateAppSnapshot;
-(BOOL)_isShowingNewComposition;
-(void)_updateAppSnapshot;
-(void)_updateDefaultPNGSuspended;
-(void)_updateMadridRegistrationViewAnimated:(BOOL)arg1 ;
-(void)__showMadridRegistrationViewIfNecessary;
-(void)_createMadridRegistrationViewIfNecessary;
-(void)_prepareForSuspend;
-(void)didChangeOrientation:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 ;
-(void)applicationDidResumeFromUnderLock;
-(BOOL)applicationSuspend:(GSEventRef)arg1 settings:(id)arg2 ;
-(BOOL)openURL:(id)arg1 ;
-(void)applicationOpenURL:(id)arg1 ;
-(void)applicationDidEndResumeAnimation;
-(BOOL)isHandlingURL;
-(void)significantTimeChange;
-(BOOL)isLocked;
-(void)failedTest:(id)arg1 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)showKeyboard;
-(void)handleURL:(id)arg1 ;
-(void)didShowAMessage;
-(id)messagesController;
-(void)didShowTranscriptList;
-(void)setMessagesController:(id)arg1 ;
-(void)firstRunControllerDidFinish:(id)arg1 finished:(BOOL)arg2 ;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(void)systemApplicationDidSuspendForEventsOnly;
-(void)systemApplicationDidResumeForEventsOnly;
-(void)_resetIdleTimer;
-(void)_clearFailureBadge;
@end

