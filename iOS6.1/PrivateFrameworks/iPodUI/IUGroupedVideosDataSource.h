/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUMediaQueriesDataSource.h>

@class MPMediaQuery;

@interface IUGroupedVideosDataSource : IUMediaQueriesDataSource
{
    MPMediaQuery *_moviesQuery;
    MPMediaQuery *_musicVideosQuery;
    MPMediaQuery *_rentalsQuery;
    MPMediaQuery *_tvShowsQuery;
    MPMediaQuery *_videoPodcastsQuery;
    MPMediaQuery *_iTunesUQuery;
}

+ (id)tabBarItemTitleKey;
+ (id)tabBarItemIconName;
+ (int)mediaEntityType;
+ (Class)cellConfigurationClassForSongs;
- (id)_iTunesUQuery;
- (id)_videoPodcastsQuery;
- (id)_tvShowsQuery;
- (id)_rentalsQuery;
- (id)_musicVideosQuery;
- (id)_moviesQuery;
- (BOOL)_showSharedLibrariesActionRow;
- (void)_reloadQueries;
- (unsigned int)_groupingThresholdForQuery:(id)arg1;
- (id)_copyQueryWithMediaType:(int)arg1 groupingProperty:(int)arg2;
- (void)_rentalInfoChangedNotification:(id)arg1;
- (id)entitiesForQuery:(id)arg1;
- (void)reloadQueriesEntities;
- (id)viewControllerContextForMediaQuery:(id)arg1;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (void)setQueries:(id)arg1;
- (void)reloadSectionInfo;
- (void)reloadData;
- (void)reloadDataWithCompletionHandler:(id)arg1;
- (void)reloadActionRows;
- (BOOL)hideActionRowsOnAppear;
- (BOOL)hasActionRowsEvenWhenNoOtherRowsExist;
- (id)createNoContentDataSource;
- (void)createGlobalContexts;
- (BOOL)canDeleteIndex:(unsigned int)arg1;
- (BOOL)allowsDeletion;
- (BOOL)isRestorableNavigationPathNode;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (void)dealloc;
- (id)init;

@end
