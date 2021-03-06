/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLXPCTransaction, NSRecursiveLock, NSMutableArray, NSCountedSet;

@interface PLImageWriter : NSObject <PLPhotoBakedThumbnailsDelegate> {
    BOOL _databaseIsCorrupt;
    NSMutableArray *_highPriorityJobs;
    unsigned int _highPrioritySequentialJobCount;
    int _jobQueueAvailabilityToken;
    NSRecursiveLock *_jobsLock;
    NSMutableArray *_lowPriorityJobs;
    PLXPCTransaction *_transaction;
    NSCountedSet *_unfinishedHighPriorityJobs;
    int _unfinishedJobCount;
    NSCountedSet *_unfinishedLowPriorityJobs;
    BOOL _writerThreadRunning;
}

+ (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext { }*)arg2;
+ (void)decorateThumbnailInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 size:(struct CGSize { float x1; float x2; })arg2 duration:(id)arg3 inContext:(struct CGContext { }*)arg4 format:(int)arg5;
+ (id)sharedWriter;
+ (void)writeableDataForImage:(id)arg1 previewImage:(id)arg2 imageData:(id)arg3 imageUTIType:(struct __CFString { }*)arg4 exifProperties:(id)arg5 imageRefOut:(struct CGImage {}**)arg6 lowResImageRefOut:(struct CGImage {}**)arg7 thumbnailDataOut:(id*)arg8 imageUTITypeOut:(const struct __CFString {}**)arg9 exifPropertiesOut:(id*)arg10 isJPEGOut:(BOOL*)arg11 imageDataOut:(id*)arg12;

- (void)_decorateThumbnail:(id)arg1;
- (void)_decrementJobCount:(id)arg1;
- (void)_enablePhotoStreamJob:(id)arg1;
- (void)_incrementJobCount:(id)arg1;
- (BOOL)_isHighPriorityJob:(id)arg1;
- (void)_postJobQueueNotificationIsAvailable:(BOOL)arg1;
- (void)_processAutodeleteEmptyAlbumJob:(id)arg1;
- (void)_processCrashRecoveryJob:(id)arg1;
- (void)_processDaemonJob:(id)arg1;
- (void)_processDeletePhotoStreamAssetsWithUUIDs:(id)arg1;
- (void)_processDeletePhotoStreamDataJob:(id)arg1;
- (void)_processImageJob:(id)arg1;
- (void)_processImportImageJob:(id)arg1;
- (void)_processIngestedSyncedAssetJob:(id)arg1;
- (void)_processJob:(id)arg1;
- (void)_processReenqueueAssetUUIDsToPhotoStreamJob:(id)arg1;
- (void)_processSavePhotoStreamImageToCameraRollJob:(id)arg1;
- (void)_processSyncedVideoSaveJob:(id)arg1;
- (void)_processVideoJob:(id)arg1;
- (void)_processVideoSaveJob:(id)arg1;
- (void)_removeTransientKeys:(id)arg1;
- (BOOL)_sufficientDiskSpaceToCopyVideoAtPath:(id)arg1;
- (void)_writerThread;
- (id)cameraAssetExtensionForType:(int)arg1;
- (id)cameraAssetPathForNewAssetWithExtension:(id)arg1;
- (BOOL)canEnqueueJob:(id)arg1;
- (void)dealloc;
- (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (BOOL)enqueueJob:(id)arg1;
- (id)incomingDirectoryPath;
- (id)incomingDirectoryPathForPhotoStream;
- (id)init;
- (id)pathForNewAssetPathAtAlbumDirectoryPath:(id)arg1 assetType:(unsigned int)arg2 extension:(id)arg3;
- (BOOL)saveImageJobToDisk:(id)arg1;
- (id)uniqueIncomingPathForAssetWithUUID:(id)arg1 andExtension:(id)arg2 isPhotoStream:(BOOL)arg3;
- (id)uuidFromIncomingFilename:(id)arg1;

@end
