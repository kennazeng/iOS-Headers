/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PBPresentation : NSObject
{
}

+ (id)readFromArchive:(id)arg1 asThumbnail:(BOOL)arg2 delegate:(id)arg3;
+ (id)readFromData:(id)arg1 asThumbnail:(BOOL)arg2 delegate:(id)arg3;
+ (void)readFrom:(struct PptBinaryReader *)arg1 to:(id)arg2 cancel:(id)arg3 asThumbnail:(BOOL)arg4 delegate:(id)arg5;
+ (void)setFontEntites:(id)arg1 environmentHolder:(id)arg2;
+ (void)addHeadersFootersToDocumentContainer:(id)arg1 instance:(int)arg2;

@end
