/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSMutableArray, NSString;

@interface SUScriptMediaLibrary : SUScriptObject {

	NSMutableArray* _musicPlayers;

}

@property (readonly) NSString * itemPropertyAlbumArtist; 
@property (readonly) NSString * itemPropertyAlbumTitle; 
@property (readonly) NSString * itemPropertyArtist; 
@property (readonly) NSString * itemPropertyComposer; 
@property (readonly) NSString * itemPropertyDiscCount; 
@property (readonly) NSString * itemPropertyDiscNumber; 
@property (readonly) NSString * itemPropertyGenre; 
@property (readonly) NSString * itemPropertyIsCompilation; 
@property (readonly) NSString * itemPropertyIsHD; 
@property (readonly) NSString * itemPropertyIsRental; 
@property (readonly) NSString * itemPropertyLastPlayedDate; 
@property (readonly) NSString * itemPropertyLyrics; 
@property (readonly) NSString * itemPropertyMediaType; 
@property (readonly) NSString * itemPropertyPersistentID; 
@property (readonly) NSString * itemPropertyPlayCount; 
@property (readonly) NSString * itemPropertyPlaybackDuration; 
@property (readonly) NSString * itemPropertyPodcastTitle; 
@property (readonly) NSString * itemPropertyRating; 
@property (readonly) NSString * itemPropertySkipCount; 
@property (readonly) NSString * itemPropertyStoreID; 
@property (readonly) NSString * itemPropertyTitle; 
@property (readonly) NSString * itemPropertyTrackCount; 
@property (readonly) NSString * itemPropertyTrackNumber; 
@property (readonly) NSString * mediaTypeAny; 
@property (readonly) NSString * mediaTypeAnyAudio; 
@property (readonly) NSString * mediaTypeAnyVideo; 
@property (readonly) NSString * mediaTypeAudiobook; 
@property (readonly) NSString * mediaTypeMovie; 
@property (readonly) NSString * mediaTypeMusic; 
@property (readonly) NSString * mediaTypeMusicVideo; 
@property (readonly) NSString * mediaTypePodcast; 
@property (readonly) NSString * mediaTypeTVShow; 
@property (readonly) NSString * mediaTypeVideoPodcast; 
@property (readonly) NSString * playerTypeApplication; 
@property (readonly) NSString * playerTypeIPod; 
@property (readonly) NSString * queryPresetAlbums; 
@property (readonly) NSString * queryPresetArtists; 
@property (readonly) NSString * queryPresetAudiobooks; 
@property (readonly) NSString * queryPresetCompilations; 
@property (readonly) NSString * queryPresetComposers; 
@property (readonly) NSString * queryPresetGenres; 
@property (readonly) NSString * queryPresetMovies; 
@property (readonly) NSString * queryPresetMusicVideos; 
@property (readonly) NSString * queryPresetPlaylists; 
@property (readonly) NSString * queryPresetPodcasts; 
@property (readonly) NSString * queryPresetSongs; 
@property (readonly) NSString * queryPresetTVShows; 
@property (readonly) NSString * queryPresetVideoPodcasts; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(BOOL)_isRestricted;
-(id)queryPresetAlbums;
-(id)queryPresetArtists;
-(id)queryPresetSongs;
-(id)queryPresetPlaylists;
-(id)queryPresetPodcasts;
-(id)queryPresetAudiobooks;
-(id)queryPresetCompilations;
-(id)queryPresetComposers;
-(id)queryPresetGenres;
-(id)queryPresetMovies;
-(id)queryPresetMusicVideos;
-(id)queryPresetTVShows;
-(id)queryPresetVideoPodcasts;
-(void)_launchMusicAppAfterPlayback:(id)arg1 firstItem:(id)arg2 ;
-(void)_launchMusicApp;
-(id)containsAdamID:(id)arg1 ;
-(id)containsAdamIDs:(id)arg1 ;
-(void)getProperties:(id)arg1 ofAdamIDs:(id)arg2 withCompletionFunction:(id)arg3 ;
-(id)makeCollectionWithItems:(id)arg1 ;
-(id)makePickerWithMediaTypes:(id)arg1 ;
-(id)makeQueryWithPreset:(id)arg1 ;
-(id)musicPlayerForType:(id)arg1 ;
-(id)playSongsInCollectionWithAdamID:(id)arg1 firstItemID:(id)arg2 ;
-(id)playSongsWithAdamIDs:(id)arg1 ;
-(id)playVideoWithAdamID:(id)arg1 ;
-(id)itemPropertyAlbumArtist;
-(id)itemPropertyAlbumTitle;
-(id)itemPropertyArtist;
-(id)itemPropertyComposer;
-(id)itemPropertyDiscCount;
-(id)itemPropertyDiscNumber;
-(id)itemPropertyGenre;
-(id)itemPropertyIsCompilation;
-(id)itemPropertyIsHD;
-(id)itemPropertyIsRental;
-(id)itemPropertyLastPlayedDate;
-(id)itemPropertyLyrics;
-(id)itemPropertyMediaType;
-(id)itemPropertyPersistentID;
-(id)itemPropertyPlayCount;
-(id)itemPropertyPlaybackDuration;
-(id)itemPropertyPodcastTitle;
-(id)itemPropertyRating;
-(id)itemPropertySkipCount;
-(id)itemPropertyStoreID;
-(id)itemPropertyTitle;
-(id)itemPropertyTrackCount;
-(id)itemPropertyTrackNumber;
-(id)mediaTypeAny;
-(id)mediaTypeAnyAudio;
-(id)mediaTypeAnyVideo;
-(id)mediaTypeAudiobook;
-(id)mediaTypeMovie;
-(id)mediaTypeMusic;
-(id)mediaTypeMusicVideo;
-(id)mediaTypePodcast;
-(id)mediaTypeTVShow;
-(id)mediaTypeVideoPodcast;
-(id)playerTypeApplication;
-(id)playerTypeIPod;
-(void)_connectNativeObject;
@end

