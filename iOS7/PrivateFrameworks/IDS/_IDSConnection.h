/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDSAccountDelegate-Protocol.h"
#import "IDSDaemonListenerProtocol-Protocol.h"

@class IDSAccount, NSMapTable, NSMutableDictionary, NSSet, NSString;

@interface _IDSConnection : NSObject <IDSDaemonListenerProtocol, IDSAccountDelegate>
{
    id _messageContext;
    id _delegateContext;
    NSMapTable *_delegateToInfo;
    IDSAccount *_account;
    NSSet *_commands;
    NSString *_serviceToken;
    NSMutableDictionary *_pendingSends;
    unsigned int _delegateCapabilities;
}

- (void)messageReceived:(id)arg1 withGUID:(id)arg2 withPayload:(id)arg3 forTopic:(id)arg4 fromID:(id)arg5;
- (void)_setTemporaryMessageContext:(id)arg1;
- (void)messageIdentifier:(id)arg1 updatedWithResponseCode:(long long)arg2 error:(id)arg3 lastCall:(_Bool)arg4;
- (void)daemonDisconnected;
- (void)_connect;
- (void)account:(id)arg1 devicesChanged:(id)arg2;
- (void)account:(id)arg1 isActiveChanged:(_Bool)arg2;
- (void)requestKeepAlive;
- (_Bool)sendServerMessage:(id)arg1 command:(id)arg2;
- (_Bool)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (void)setDelegateCapabilities:(unsigned int)arg1;
- (void)_callDelegatesWithBlock:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) IDSAccount *account;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 commands:(id)arg2 delegateContext:(id)arg3;

@end

