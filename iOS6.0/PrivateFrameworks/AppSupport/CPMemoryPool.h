/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface CPMemoryPool : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_files;
    char *_label;
    unsigned long _slotSize;
    BOOL _swappable;
}

@property(readonly, nonatomic) unsigned long slotSize; // @synthesize slotSize=_slotSize;
- (void)dealloc;
- (void)sync;
- (id)nextSlot;
- (id)initWithLabel:(const char *)arg1 slotSize:(unsigned long)arg2 swappable:(BOOL)arg3;

@end
