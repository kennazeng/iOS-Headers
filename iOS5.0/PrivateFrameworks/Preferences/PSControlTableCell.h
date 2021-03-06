/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSTableCell.h>

@class NSArray, NSDictionary, UIActivityIndicatorView, UIControl, UIView;

@interface PSControlTableCell : PSTableCell
{
    UIControl *_control;
    UIActivityIndicatorView *_activityIndicator;
    NSArray *_values;
    NSDictionary *_titleDict;
    UIView *_disabledView;
}

- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (BOOL)canReload;
- (void)setCellEnabled:(BOOL)arg1;
- (void)setValues:(id)arg1 titleDictionary:(id)arg2;
- (void)setBackgroundView:(id)arg1;
- (id)titleLabel;
- (id)valueLabel;
- (void)dealloc;
- (id)control;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (void)setControl:(id)arg1;
- (void)controlChanged:(id)arg1;
- (void)setValue:(id)arg1;
- (void)layoutSubviews;

@end

