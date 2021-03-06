/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLRequest, NSString, NSCachedURLResponse, NSURLCacheNode;

@interface NSURLCacheNode : NSObject {
    NSCachedURLResponse *cachedResponse;
    unsigned long hash;
    NSString *key;
    NSURLCacheNode *next;
    NSURLCacheNode *prev;
    NSURLRequest *request;
}

- (void)dealloc;
- (id)description;
- (id)initWithCachedResponse:(id)arg1 request:(id)arg2 key:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end
