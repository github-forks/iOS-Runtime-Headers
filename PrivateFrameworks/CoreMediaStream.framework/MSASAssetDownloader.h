/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString, <MSASAssetDownloaderDelegate>, NSMutableArray, NSMutableDictionary;

@interface MSASAssetDownloader : MSASAssetTransferer {
    NSMutableDictionary *_assetToItemInFlightMap;
    NSString *_currentFocusAlbumGUID;
    NSString *_currentFocusAssetCollectionGUID;
    BOOL _didEncounterNetworkConditionError;
    NSString *_downloadBatchPerfGUID;
    NSMutableArray *_finishedAssets;
    BOOL _isDownloadingThumbnails;
    BOOL _isWaitingForFirstDownloadEvent;
    NSMutableArray *_itemsInFlight;
    NSString *_objectGUID;
    int _state;
}

@property(retain) NSMutableDictionary * assetToItemInFlightMap;
@property(retain) NSString * currentFocusAlbumGUID;
@property(retain) NSString * currentFocusAssetCollectionGUID;
@property <MSASAssetDownloaderDelegate> * delegate;
@property BOOL didEncounterNetworkConditionError;
@property(retain) NSString * downloadBatchPerfGUID;
@property(retain) NSMutableArray * finishedAssets;
@property BOOL isDownloadingThumbnails;
@property BOOL isWaitingForFirstDownloadEvent;
@property(retain) NSMutableArray * itemsInFlight;
@property(retain) NSString * objectGUID;
@property int state;

- (void).cxx_destruct;
- (void)MMCSEngine:(id)arg1 didFinishGettingAllAssetsContext:(id)arg2;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 context:(id)arg4 error:(id)arg5;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAllAssetsContext:(id)arg2;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 context:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 context:(id)arg5;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 context:(id)arg5;
- (id)_orphanedAssetError;
- (id)_pathForPersonID:(id)arg1;
- (void)_workQueueDidFinishWithItem:(id)arg1 error:(id)arg2;
- (void)_workQueueGoIdle;
- (void)_workQueueStopTrackingItem:(id)arg1;
- (id)assetToItemInFlightMap;
- (id)currentFocusAlbumGUID;
- (id)currentFocusAssetCollectionGUID;
- (BOOL)didEncounterNetworkConditionError;
- (void)didEnqueueAsset:(id)arg1 forAlbumGUID:(id)arg2;
- (id)downloadBatchPerfGUID;
- (id)finishedAssets;
- (BOOL)isDownloadingThumbnails;
- (BOOL)isWaitingForFirstDownloadEvent;
- (id)itemsInFlight;
- (id)objectGUID;
- (void)registerAssets:(id)arg1 completionBlock:(id)arg2;
- (void)setAssetToItemInFlightMap:(id)arg1;
- (void)setCurrentFocusAlbumGUID:(id)arg1;
- (void)setCurrentFocusAssetCollectionGUID:(id)arg1;
- (void)setDidEncounterNetworkConditionError:(BOOL)arg1;
- (void)setDownloadBatchPerfGUID:(id)arg1;
- (void)setFinishedAssets:(id)arg1;
- (void)setIsDownloadingThumbnails:(BOOL)arg1;
- (void)setIsWaitingForFirstDownloadEvent:(BOOL)arg1;
- (void)setItemsInFlight:(id)arg1;
- (void)setObjectGUID:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (void)unregisterAssets:(id)arg1;
- (void)workQueueCancel;
- (void)workQueueDownloadNextBatch;
- (id)workQueueObjectGUID;
- (void)workQueueRegisterAssets:(id)arg1 completionBlock:(id)arg2;
- (void)workQueueRetryOutstandingActivities;
- (void)workQueueShutDownCompletionBlock:(id)arg1;
- (void)workQueueStop;
- (void)workQueueUnregisterAssets:(id)arg1;

@end
