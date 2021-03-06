/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPObject.h>

#import "TSKDocumentObject-Protocol.h"
#import "TSPCopying-Protocol.h"

@class TSWPStorage;

// Not exported
@interface TSWPSmartField : TSPObject <TSKDocumentObject, TSPCopying>
{
    TSWPStorage *_parentStorage;
    unsigned long long _lastTableIndex;
}

+ (id)defaultFieldStyleIdentifier;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) TSWPStorage *parentStorage; // @synthesize parentStorage=_parentStorage;
- (void)loadFromArchive:(const struct SmartFieldArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct SmartFieldArchive *)arg1 archiver:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)text;
- (_Bool)canCopy:(struct _NSRange)arg1;
- (_Bool)allowsPasteAsSmartField;
- (_Bool)allowsEditing;
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, nonatomic) int styleAttributeArrayKind;
@property(readonly, nonatomic) int attributeArrayKind;
- (int)elementKind;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

