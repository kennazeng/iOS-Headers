/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface UINibStringIDTable : NSObject
{
    struct UIStringIDTableBucket **table;
    struct UIStringIDTableBucket *buckets;
    unsigned int hashMask;
    unsigned int count;
}

- (int)count;
- (BOOL)lookupKey:(id)arg1 identifier:(int *)arg2;
- (void)dealloc;
- (id)initWithKeysTransferingOwnership:(id *)arg1 count:(unsigned int)arg2;

@end

