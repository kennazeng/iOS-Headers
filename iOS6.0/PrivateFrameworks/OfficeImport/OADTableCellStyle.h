/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class OADFill, OADTableCellBorderStyle;

@interface OADTableCellStyle : NSObject
{
    OADTableCellBorderStyle *mBorderStyle;
    OADFill *mFill;
}

+ (id)defaultStyle;
+ (id)defaultFill;
- (void)applyOverridesFrom:(id)arg1;
- (id)shallowCopy;
- (void)setFill:(id)arg1;
- (id)fill;
- (void)setBorderStyle:(id)arg1;
- (id)borderStyle;
- (void)dealloc;

@end

