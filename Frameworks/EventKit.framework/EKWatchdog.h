/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, NSObject<OS_dispatch_source>;

@interface EKWatchdog : NSObject {
    NSString *_identifier;
    double _timeout;
    NSObject<OS_dispatch_source> *_timer;
}

+ (void)executeWithTimeout:(double)arg1 identifier:(id)arg2 block:(id)arg3;

- (void)dealloc;
- (id)initWithTimeout:(double)arg1 identifier:(id)arg2 block:(id)arg3;
- (id)initWithTimeout:(double)arg1 identifier:(id)arg2;
- (void)invalidate;
- (void)start;

@end
