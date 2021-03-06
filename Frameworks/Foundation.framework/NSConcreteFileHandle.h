/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_data>, NSObject<OS_dispatch_source>;

@interface NSConcreteFileHandle : NSFileHandle {
    unsigned short _activity;
    NSObject<OS_dispatch_data> *_anchor;
    NSObject<OS_dispatch_source> *_dsrc;
    int _error;
    int _fd;
    NSObject<OS_dispatch_queue> *_fhLock;
    unsigned short _flags;
    void *_nativeHandle;
    BOOL _padding2[2];
    BOOL _padding[2];
    NSObject<OS_dispatch_queue> *_readMonitoringQueue;
    NSObject<OS_dispatch_source> *_readMonitoringSource;
    id _readabilityHandler;
    void *_resultBytes;
    unsigned long _resultLength;
    int _resultSocket;
    struct __CFRunLoop { } *_rl;
    struct __CFRunLoopSource { } *_source;
    long long _weakRefCount;
    NSObject<OS_dispatch_queue> *_writeMonitoringQueue;
    NSObject<OS_dispatch_source> *_writeMonitoringSource;
    id _writeabilityHandler;
}

- (void)_cancelDispatchSources;
- (id)_monitor:(const struct dispatch_source_type_s { }*)arg1 source:(id)arg2 onQueue:(id)arg3;
- (void)acceptConnectionInBackgroundAndNotify;
- (void)acceptConnectionInBackgroundAndNotifyForModes:(id)arg1;
- (id)availableData;
- (void)clearReadabilityHandler;
- (void)clearWriteabilityHandler;
- (void)closeFile;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (int)fileDescriptor;
- (void)finalize;
- (id)init;
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(BOOL)arg2;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initWithPath:(id)arg1 flags:(int)arg2 createMode:(int)arg3 error:(id*)arg4;
- (id)initWithPath:(id)arg1 flags:(int)arg2 createMode:(int)arg3;
- (void)lockedRelease;
- (id)lockedRetain;
- (unsigned long long)offsetInFile;
- (void)performActivity:(int)arg1 modes:(id)arg2;
- (id)port;
- (unsigned int)readDataOfLength:(unsigned int)arg1 buffer:(char *)arg2;
- (id)readDataOfLength:(unsigned int)arg1;
- (id)readDataToEndOfFile;
- (void)readInBackgroundAndNotify;
- (void)readInBackgroundAndNotifyForModes:(id)arg1;
- (void)readToEndOfFileInBackgroundAndNotify;
- (void)readToEndOfFileInBackgroundAndNotifyForModes:(id)arg1;
- (id)readabilityHandler;
- (oneway void)release;
- (id)retain;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (void)setPort:(id)arg1;
- (void)setReadabilityHandler:(id)arg1;
- (void)setWriteabilityHandler:(id)arg1;
- (void)synchronizeFile;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)waitForDataInBackgroundAndNotify;
- (void)waitForDataInBackgroundAndNotifyForModes:(id)arg1;
- (void)writeData:(id)arg1;
- (id)writeabilityHandler;

@end
