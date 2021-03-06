/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer, NSMutableArray, NSMutableSet;

@interface _UIViewServiceFencingController : NSObject {
    unsigned int _expectedParticipatingFencingProxyCount;
    NSTimer *_fencingControlTimeoutTimer;
    int _lock;
    NSMutableSet *_pendingFenceSendRights;
    NSMutableArray *_resumeActions;
}

+ (id)activeFencePort;

- (void)_fencingControlTimedOut;
- (void)dealloc;
- (void)fencingControlProxy:(id)arg1 didBeginFencingWithSendRight:(id)arg2 expectedParticipatingFencingProxyCount:(unsigned int)arg3;
- (void)fencingControlProxy:(id)arg1 didEndFencingWithSendRight:(id)arg2;
- (id)init;

@end
