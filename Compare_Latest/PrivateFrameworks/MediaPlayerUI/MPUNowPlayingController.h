/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_source>, NSString, UIImage;

@interface MPUNowPlayingController : NSObject
{
    NSObject<OS_dispatch_source> *_timeInformationTimer;
    NSDictionary *_currentNowPlayingInfo;
    double _currentElapsed;
    double _currentDuration;
    long long _isPlaying;
    int _currentNowPlayingAppPID;
    int _nowPlayingPIDForCachedDisplayID;
    NSString *_cachedNowPlayingAppDisplayID;
    _Bool _isRegisteredForNowPlayingNotifications;
    _Bool _isUpdatingNowPlayingInfo;
    _Bool _isUpdatingPlaybackState;
    _Bool _isUpdatingNowPlayingApp;
    UIImage *_cachedNowPlayingArtwork;
    _Bool _cachedArtworkDirty;
    id <MPUNowPlayingDelegate> _delegate;
    double _timeInformationUpdateInterval;
}

@property(nonatomic) double timeInformationUpdateInterval; // @synthesize timeInformationUpdateInterval=_timeInformationUpdateInterval;
@property(readonly, nonatomic) double currentElapsed; // @synthesize currentElapsed=_currentElapsed;
@property(nonatomic) __weak id <MPUNowPlayingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateTimeInformation;
- (void)_updateNowPlayingApp;
- (void)_updatePlaybackState;
- (void)_updateCurrentNowPlaying;
- (void)_stopUpdatingTimeInformation;
- (void)_unregisterForNotifications;
- (void)_startUpdatingTimeInformation;
- (void)_registerForNotifications;
- (void)update;
- (void)stopUpdating;
- (void)startUpdating;
@property(readonly, nonatomic) double currentDuration;
@property(readonly, nonatomic) NSString *nowPlayingAppDisplayID;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) UIImage *currentNowPlayingArtwork;
@property(readonly, nonatomic) NSDictionary *currentNowPlayingInfo;
- (void)dealloc;
- (id)init;

@end

