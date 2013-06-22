/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIImage, UIImageView;

@interface MPVideoBackgroundView : UIView
{
    int _interfaceOrientation;
    UIView *_imageView;
    UIImageView *_iconView;
    UIImageView *_backgroundPlaceholderImageView;
    UIView *_backgroundPlaceholderPosterImageView;
    UIView *_backgroundPlaceholderView;
    UIImageView *_customBackgroundImageView;
    NSString *_destinationName;
    int _destinationPlaceholderStyle;
    BOOL _showDestinationPlaceholder;
    id _layoutSubviewsPostflightHandler;
}

@property(copy, nonatomic) id layoutSubviewsPostflightHandler; // @synthesize layoutSubviewsPostflightHandler=_layoutSubviewsPostflightHandler;
@property(nonatomic) int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) int destinationPlaceholderStyle; // @synthesize destinationPlaceholderStyle=_destinationPlaceholderStyle;
@property(copy, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(retain, nonatomic) UIView *backgroundPlaceholderPosterImageView; // @synthesize backgroundPlaceholderPosterImageView=_backgroundPlaceholderPosterImageView;
- (void).cxx_destruct;
- (void)_updateDestinationBackgroundViewAnimated:(BOOL)arg1;
- (void)_tvOutCapabilityDidChangeNotification:(id)arg1;
- (void)setShowDestinationPlaceholder:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) UIView *backgroundPlaceholderView;
@property(retain, nonatomic) UIImage *backgroundPlaceholderImage;
- (void)setCustomBackgroundImage:(id)arg1;
- (void)_createInformationalTitleView:(id *)arg1 systemFont:(id)arg2 lineBreakMode:(int)arg3;
- (void)setShowQTAudioOnlyUI:(BOOL)arg1;
- (id)qtIcon;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
