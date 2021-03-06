/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <SiriUI/SiriUIClearBackgroundCell.h>

@class SAMovieV2MovieListCell, UILabel, SiriUIBorderedLabelView, SiriUIDownloadableImageView, SiriMoviesRottenTomatoesRatingView;

@interface SiriMoviesMovieListCellView : SiriUIClearBackgroundCell {

	SAMovieV2MovieListCell* _snippet;
	UILabel* _movieTitleLabel;
	UILabel* _showtimeLabel;
	SiriUIBorderedLabelView* _ratingView;
	SiriUIDownloadableImageView* _posterImageView;
	SiriMoviesRottenTomatoesRatingView* _tomatoView;

}
+(double)_posterHeight;
+(double)_placeHolderVerticalCenterOffset;
+(double)_titleBaselineFromBottomOfImage;
+(double)defaultHeight;
+(id)reuseIdentifier;
+(CGSize)cellSize;
-(id)_movieListViewLabelWithText:(id)arg1 lightWeight:(BOOL)arg2 ;
-(void)configureWithMovieListCell:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
@end

