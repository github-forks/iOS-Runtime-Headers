/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError, AVWeakKeyValueObserverProxy, NSObject<OS_dispatch_queue>, AVWeakReference, NSMutableArray, AVAsset;

@interface AVAssetReaderInternal : NSObject {
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    AVWeakKeyValueObserverProxy *KVOProxy;
    AVAsset *asset;
    NSError *error;
    struct OpaqueFigAssetReader { } *figAssetReader;
    NSMutableArray *outputs;
    int status;
    NSObject<OS_dispatch_queue> *statusReadWriteQueue;
    } timeRange;
    AVWeakReference *weakReference;
}

@end
