/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DResource.h>

@class NSIndexSet;

// Not exported
@interface TSCH3DVAOResource : TSCH3DResource
{
    struct vector<TSCH3D::ResourceAttributeState, std::__1::allocator<TSCH3D::ResourceAttributeState>> mAttributes;
    TSCH3DResource *mIndices;
    NSIndexSet *mEnabledArrays;
    _Bool mFailed;
}

+ (id)resourceWithObjectState:(const struct ObjectState *)arg1 indices:(id)arg2;
@property(nonatomic) _Bool failed; // @synthesize failed=mFailed;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexSet *enabledArrays; // @synthesize enabledArrays=mEnabledArrays;
- (id)get;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithObjectState:(const struct ObjectState *)arg1 indices:(id)arg2;

@end

