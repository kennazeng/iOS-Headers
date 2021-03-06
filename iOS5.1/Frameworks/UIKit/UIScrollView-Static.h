/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIScrollView.h>

@interface UIScrollView (Static)
- (void)_hideScrollIndicators;
- (void)_adjustContentOffsetIfNecessary;
- (void)_adjustScrollerIndicators:(BOOL)arg1 alwaysShowingThem:(BOOL)arg2;
- (void)_deferredBeginTouchesInContentView;
- (void)_startTimer:(BOOL)arg1;
- (void)_prepareToPageWithHorizontalVelocity:(float)arg1 verticalVelocity:(float)arg2;
- (void)_runLoopModePopped:(id)arg1;
- (void)_popTrackingRunLoopMode;
- (BOOL)_continueScrollingAtOffset:(struct CGPoint)arg1;
- (void)_smoothScroll:(id)arg1;
- (void)_getStandardDecelerationOffset:(double *)arg1 forTimeInterval:(double)arg2 min:(double)arg3 max:(double)arg4 decelerationFactor:(double)arg5 decelerationLnFactor:(double)arg6 velocity:(double *)arg7;
- (BOOL)_getBouncingDecelerationOffset:(double *)arg1 forTimeInterval:(double)arg2 lastUpdateOffset:(double)arg3 min:(double)arg4 max:(double)arg5 decelerationFactor:(double)arg6 decelerationLnFactor:(double)arg7 velocity:(double *)arg8;
- (struct CGPoint)_pageDecelerationTarget;
- (BOOL)_getPagingDecelerationOffset:(struct CADoublePoint *)arg1 forTimeInterval:(double)arg2;
- (void)_notifyDidScroll;
@end

