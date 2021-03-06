/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <Podcasts/MTReachabilityObserver.h>

@class UIView, MTLibrary, TKImageFactory, TKTheme, NSString, NSOperationQueue;

@interface MTBaseTopChartsViewController : UIViewController <UIPopoverControllerDelegate, MTReachabilityObserver> {

	char _reachable;
	char _viewDataLoaded;
	UIView* _baseView;
	MTLibrary* _library;
	TKImageFactory* _imageFactory;
	TKTheme* _globalTheme;
	NSString* _feedURL;
	NSOperationQueue* _chartQueue;

}

@property (retain) UIView * baseView;                                    //@synthesize baseView=_baseView - In the implementation block
@property (assign) char reachable;                                       //@synthesize reachable=_reachable - In the implementation block
@property (assign) char viewDataLoaded;                                  //@synthesize viewDataLoaded=_viewDataLoaded - In the implementation block
@property (assign,nonatomic,__weak) MTLibrary * library;                 //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) TKImageFactory * imageFactory;              //@synthesize imageFactory=_imageFactory - In the implementation block
@property (nonatomic,retain) TKTheme * globalTheme;                      //@synthesize globalTheme=_globalTheme - In the implementation block
@property (nonatomic,retain) NSString * feedURL;                         //@synthesize feedURL=_feedURL - In the implementation block
@property (nonatomic,retain) NSOperationQueue * chartQueue;              //@synthesize chartQueue=_chartQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)playableStoreMediaDictionaryItemFromTopChartEpisodeDetailsDictionaryItem:(id)arg1 ;
+(id)stringFromDictionary:(id)arg1 forKey:(id)arg2 ;
+(char)isAValue:(id)arg1 ;
+(id)encodedQueryStringFromDictionary:(id)arg1 ;
+(id)formatDate:(id)arg1 ;
-(void)reachabilityChangedFrom:(char)arg1 to:(char)arg2 ;
-(void)setFeedURL:(NSString *)arg1 ;
-(void)explicitContentChanged:(id)arg1 ;
-(char)reachable;
-(TKTheme *)globalTheme;
-(char)isSubscribedToPodcast:(id)arg1 ;
-(void)updateGuidelinesWithPalette:(char)arg1 ;
-(id)podcastUUIDForFeed:(id)arg1 ;
-(id)downloadingEpisodesForPodcast:(id)arg1 ;
-(id)knownChildrenForPodcast:(id)arg1 ;
-(char)allowExplicit;
-(void)playMediaItem:(id)arg1 withEpisodes:(id)arg2 withComponent:(id)arg3 atIndex:(int)arg4 ;
-(void)downloadEpisode:(id)arg1 withPodcast:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)pauseDownloadEpisode:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)subscribe:(id)arg1 withComponent:(id)arg2 ;
-(void)unsubscribe:(id)arg1 ;
-(void)setGlobalTheme:(TKTheme *)arg1 ;
-(id)episodeGuidForUUID:(id)arg1 ;
-(id)showPaletteWithHeight:(float)arg1 ;
-(void)showCannotConnectAlertWithTitle:(id)arg1 withMessage:(id)arg2 ;
-(NSOperationQueue *)chartQueue;
-(char)viewDataLoaded;
-(void)loadViewData;
-(void)setViewDataLoaded:(char)arg1 ;
-(TKImageFactory *)imageFactory;
-(void)setImageFactory:(TKImageFactory *)arg1 ;
-(id)createPodcastPlaylistItemWithDetails:(id)arg1 ;
-(char)isMedia:(id)arg1 ;
-(void)openNonMedia:(id)arg1 ;
-(id)episodeForURL:(id)arg1 ;
-(char)episodeDownloaded:(id)arg1 ;
-(char)hasEpisodeForURL:(id)arg1 ;
-(void)setChartQueue:(NSOperationQueue *)arg1 ;
-(UIView *)baseView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)noContentView;
-(void)setReachable:(char)arg1 ;
-(void)setBaseView:(UIView *)arg1 ;
-(MTLibrary *)library;
-(void)setLibrary:(MTLibrary *)arg1 ;
-(NSString *)feedURL;
@end

