/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary, NSLock;

@interface _NSXPCConnectionReplyTable : NSObject {
    NSMutableDictionary *_replyTable;
    NSLock *_replyTableLock;
    unsigned long long _sequence;
}

- (void)cleanupReplyBlocksWithError:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invokeErrorBlockForSequence:(unsigned long)arg1 withError:(id)arg2;
- (id)replyInfoForSequence:(unsigned long long)arg1;
- (unsigned long long)sequenceForReplyBlock:(id)arg1 errorBlock:(id)arg2 cleanupBlock:(id)arg3 protocol:(id)arg4 selector:(SEL)arg5;

@end
