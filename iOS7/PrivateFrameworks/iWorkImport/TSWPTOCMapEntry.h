/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSWPTOCEntryStyle;

// Not exported
@interface TSWPTOCMapEntry : NSObject
{
    _Bool _showInTOC;
    TSWPTOCEntryStyle *_tocEntryStyle;
}

@property(nonatomic) _Bool showInTOC; // @synthesize showInTOC=_showInTOC;
@property(retain, nonatomic) TSWPTOCEntryStyle *tocEntryStyle; // @synthesize tocEntryStyle=_tocEntryStyle;
- (id)initWithTOCEntryStyle:(id)arg1 showInTOC:(_Bool)arg2;

@end

