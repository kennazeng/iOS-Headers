/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSString;

@interface MFCountryConfiguration : NSObject
{
    struct dispatch_queue_s *_queue;
    BOOL _isUpdating;
    id _networkObserver;
    NSLock *_countryCodeLock;
    NSString *_countryCode;
    NSString *_oldCountryCode;
}

+ (id)sharedConfiguration;
- (id)init;
- (void)dealloc;
- (void)updateCurrentCountry;
- (void)_checkCountryCode;
- (void)_useCountryCode:(id)arg1;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;

@end

