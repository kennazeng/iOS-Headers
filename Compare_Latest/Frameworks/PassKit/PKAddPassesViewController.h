/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class NSDate, NSURL, PKIngestibleCard, PKRemoteAddPassesViewController, _UIAsyncInvocation;

@interface PKAddPassesViewController : UIViewController
{
    BOOL _viewHasAppeared;
    NSDate *_perfTestingForIngestion;
    PKRemoteAddPassesViewController *_remoteViewController;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    PKIngestibleCard *_card;
    NSURL *_URL;
    int _previousStatusBarStyle;
    id <PKAddPassesViewControllerDelegate> _delegate;
}

+ (BOOL)isAvailable;
@property(nonatomic) id <PKAddPassesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(getter=_previousStatusBarStyle, setter=_setPreviousStatusBarStyle:) int _previousStatusBarStyle; // @synthesize _previousStatusBarStyle;
@property(retain, getter=_URL, setter=_setURL:) NSURL *_URL; // @synthesize _URL;
@property(retain, getter=_card, setter=_setCard:) PKIngestibleCard *_card; // @synthesize _card;
@property(retain, getter=_cancelViewServiceRequest, setter=_setCancelViewServiceRequest:) _UIAsyncInvocation *_cancelViewServiceRequest; // @synthesize _cancelViewServiceRequest;
@property(retain, getter=_remoteViewController, setter=_setRemoteViewController:) PKRemoteAddPassesViewController *_remoteViewController; // @synthesize _remoteViewController;
- (void)_transitionDidStop:(id)arg1 finished:(id)arg2;
- (void)ingestionDidFinishWithResult:(int)arg1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (int)modalPresentationStyle;
- (int)modalTransitionStyle;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithPass:(id)arg1;
- (id)initWithPass:(id)arg1 orURL:(id)arg2;
- (void)dealloc;

@end
