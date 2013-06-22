/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SPSearchQuery : NSObject <NSCopying>
{
    unsigned int _queryID;
    NSString *_searchString;
    BOOL _cancelled;
    BOOL _finished;
    NSArray *_searchDomains;
    int _nextDomainIndex;
    double _creationTime;
    double _cancellationTime;
}

@property(readonly, nonatomic) NSArray *searchDomains; // @synthesize searchDomains=_searchDomains;
@property(readonly, nonatomic) double cancellationTime; // @synthesize cancellationTime=_cancellationTime;
@property(readonly, nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 forSearchDomains:(id)arg2;
- (void)cancel;
@property(readonly, nonatomic) BOOL cancelled;

@end
