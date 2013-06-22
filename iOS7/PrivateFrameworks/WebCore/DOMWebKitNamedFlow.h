/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMObject.h>

@class NSString;

@interface DOMWebKitNamedFlow : DOMObject
{
}

- (BOOL)dispatchEvent:(id)arg1;
- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (id)getContent;
- (id)getRegions;
- (id)getRegionsByContent:(id)arg1;
@property(readonly) int firstEmptyRegionIndex;
@property(readonly) BOOL overset;
@property(readonly) NSString *name;
- (void)finalize;
- (void)dealloc;

@end
