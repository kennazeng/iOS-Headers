/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITabBar.h>

@interface UITabBar (UITabBarPrivate)
- (void)setButtonItems:(id)arg1;
- (id)buttonItems;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)tintColorDidChange;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)setBadgeAnimated:(_Bool)arg1 forButton:(int)arg2;
- (void)setBadgeGlyph:(id)arg1 forButton:(int)arg2;
- (void)setBadgeValue:(id)arg1 forButton:(int)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dismissCustomizeSheet:(_Bool)arg1;
- (void)_tabBarFinishedAnimating;
@end

