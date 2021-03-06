/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class UIImage, <PLCloudSharedContainer>, CLLocation, NSURL, NSData, NSMutableOrderedSet, NSMutableSet, NSDate, NSSet, NSDictionary, NSArray, NSOrderedSet, NSString, PLManagedAsset, NSNumber;

@interface PLManagedAsset : _PLManagedAsset <UIActivityItemSource> {
    BOOL _didPrepareForDeletion;
    BOOL _isRegisteredForChanges;
    UIImage *inflightImageInMemory;
    NSString *inflightImagePath;
    UIImage *inflightIndexSheetImage;
    NSDictionary *inflightMetadata;
}

@property(readonly) NSMutableOrderedSet * adjustments;
@property(readonly) NSSet * allFileURLs;
@property(readonly) NSArray * allUniformTypeIdentifiers;
@property(readonly) BOOL allowsRotation;
@property(readonly) BOOL allowsWallpaperEditing;
@property int assetKind;
@property(readonly) NSURL * assetURL;
@property double captureTime;
@property(retain) NSString * cloudAssetGUID;
@property(retain) NSString * cloudAssetKind;
@property(retain) NSString * cloudBatchID;
@property(retain) NSDate * cloudBatchPublishDate;
@property(retain) NSString * cloudCollectionGUID;
@property(retain) NSOrderedSet * cloudComments;
@property(retain) NSNumber * cloudHasCommentsByMe;
@property BOOL cloudHasCommentsByMeBoolValue;
@property(retain) NSNumber * cloudHasCommentsConversation;
@property BOOL cloudHasCommentsConversationBoolValue;
@property(retain) NSNumber * cloudHasUnseenComments;
@property BOOL cloudHasUnseenCommentsBoolValue;
@property(retain) NSDate * cloudLastViewedCommentDate;
@property(retain) NSDictionary * cloudMetadata;
@property int cloudPlaceholderKindValue;
@property(readonly) <PLCloudSharedContainer> * cloudShareAlbum;
@property(readonly) NSDate * date;
@property unsigned int effectiveThumbnailIndex;
@property(readonly) NSData * embeddedThumbnailData;
@property(retain) NSNumber * embeddedThumbnailHeight;
@property short embeddedThumbnailHeightValue;
@property(retain) NSNumber * embeddedThumbnailLength;
@property int embeddedThumbnailLengthValue;
@property(retain) NSNumber * embeddedThumbnailOffset;
@property int embeddedThumbnailOffsetValue;
@property(retain) NSNumber * embeddedThumbnailWidth;
@property short embeddedThumbnailWidthValue;
@property(retain) NSMutableSet * faces;
@property(readonly) NSString * fileExtension;
@property(readonly) NSSet * filePathsWithoutThumbs;
@property(readonly) NSURL * fileURLForLargeDisplayableImage;
@property(readonly) NSURL * fileURLForLargeThumbnailFile;
@property(readonly) NSURL * fileURLForPrebakedLandscapeScrubberThumbnails;
@property(readonly) NSURL * fileURLForPrebakedPortraitScrubberThumbnails;
@property(readonly) NSURL * fileURLForThumbnailFile;
@property struct { double x1; double x2; } gpsCoordinate;
@property(readonly) BOOL hasEmbeddedThumbnail;
@property(readonly) BOOL hasLocationInfo;
@property(readonly) BOOL hasXMPFile;
@property int highDynamicRangeTypeValue;
@property struct CGSize { float x1; float x2; } imageSize;
@property(readonly) UIImage * inflightImage;
@property(retain) UIImage * inflightImageInMemory;
@property(retain) NSString * inflightImagePath;
@property(retain) UIImage * inflightIndexSheetImage;
@property(retain) NSDictionary * inflightMetadata;
@property(readonly) BOOL isAudio;
@property(readonly) BOOL isCloudSharedAsset;
@property(readonly) BOOL isHDVideo;
@property BOOL isInFlight;
@property(readonly) BOOL isJPEG;
@property(readonly) BOOL isPhoto;
@property(readonly) BOOL isPhotoStreamPhoto;
@property(readonly) BOOL isVideo;
@property(retain) NSOrderedSet * likeComments;
@property(retain) CLLocation * location;
@property(readonly) NSURL * mainFileURL;
@property(readonly) NSString * mimeType;
@property(retain) PLManagedAsset * originalAsset;
@property(readonly) NSString * pathForImageFile;
@property(readonly) NSString * pathForLargeDisplayableImageFile;
@property(readonly) NSString * pathForLargeThumbnailFile;
@property(readonly) NSString * pathForLowResolutionFile;
@property(readonly) NSString * pathForMetadataDirectory;
@property(readonly) NSString * pathForOriginalFile;
@property(readonly) NSString * pathForPrebakedLandscapeScrubberThumbnails;
@property(readonly) NSString * pathForPrebakedPortraitScrubberThumbnails;
@property(readonly) NSString * pathForPrebakedThumbnail;
@property(readonly) NSString * pathForPrebakedWildcatThumbnailsFile;
@property(readonly) NSString * pathForTrimmedVideoFile;
@property(readonly) NSString * pathForVideoFile;
@property(readonly) NSString * pathForVideoPreviewFile;
@property(readonly) NSString * pathForXMPFile;
@property double recordModDate;
@property int savedAssetTypeValue;
@property(readonly) NSArray * sortedSidecarFiles;
@property(readonly) BOOL supportsDistributedPhotoStreamDeletion;
@property(readonly) NSString * textBadgeString;
@property int thumbnailIndex;
@property(readonly) unsigned int totalCommentsCount;
@property BOOL userCloudSharedLiked;
@property(copy) NSString * utiType;
@property(readonly) UIImage * wallpaperFullScreenImage;

+ (id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
+ (id)_allAssetUUIDsInManagedObjectContext:(id)arg1;
+ (id)_insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(int)arg3 replacementUUID:(id)arg4 imageMetadata:(id)arg5 imageUTI:(id)arg6 imageSource:(struct CGImageSource {}**)arg7 imageData:(id*)arg8;
+ (id)_pathsByAssetUUIDFromFetchResults:(id)arg1 absolute:(BOOL)arg2;
+ (id)abbreviatedMetadataDirectoryForDirectory:(id)arg1;
+ (id)allCloudSharedAssetsInLibrary:(id)arg1;
+ (int)assetTypeFromUniformTypeIdentifier:(id)arg1;
+ (id)assetWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)assetWithObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)assetWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetsWithUUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)bestCreationDateForAssetAtURL:(id)arg1 modificationDate:(id*)arg2;
+ (id)cloudSharedAssetsWithGUIDs:(id)arg1 inLibrary:(id)arg2;
+ (unsigned int)countAssetsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned int)countUsedAssetsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)fileURLFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (int)formatForThumbnailGeneration;
+ (int)fullSizeImageFormat;
+ (id)incompleteAssetsInManagedObjectContext:(id)arg1;
+ (int)indexSheetFormat;
+ (id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(int)arg3 replacementUUID:(id)arg4 imageMetadata:(id)arg5 imageUTI:(id)arg6;
+ (id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(int)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource {}**)arg5 imageData:(id*)arg6;
+ (id)keyPathsForValuesAffectingAssetKind;
+ (id)keyPathsForValuesAffectingCaptureTime;
+ (id)keyPathsForValuesAffectingDate;
+ (id)keyPathsForValuesAffectingGpsCoordinate;
+ (id)keyPathsForValuesAffectingHasLocationInfo;
+ (id)keyPathsForValuesAffectingImageSize;
+ (id)keyPathsForValuesAffectingIsAudio;
+ (id)keyPathsForValuesAffectingIsJPEG;
+ (id)keyPathsForValuesAffectingIsPhoto;
+ (id)keyPathsForValuesAffectingIsPhotoStreamPhoto;
+ (id)keyPathsForValuesAffectingIsVideo;
+ (id)keyPathsForValuesAffectingMimeType;
+ (id)keyPathsForValuesAffectingRecordModDate;
+ (id)keyPathsForValuesAffectingUtiType;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (int)landscapeScrubberThumbnailFormat;
+ (int)largestThumbnailFormat;
+ (void)markAssetAsRecentlyUsed:(id)arg1;
+ (struct CGImage { }*)newUnrotatedImageWithSize:(struct CGSize { float x1; float x2; })arg1 originalImage:(struct CGImage { }*)arg2 imageOrientation:(int)arg3;
+ (id)pathsForAllIncompleteAssetsInManagedObjectContext:(id)arg1;
+ (id)pathsForAssetsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)persistedRecentlyUsedGUIDS;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2 sidecar:(id*)arg3;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (int)portraitScrubberThumbnailFormat;
+ (int)posterThumbnailFormat;
+ (id)preferredFileExtensionForType:(id)arg1;
+ (id)recentlyUsedGUIDsPath;
+ (id)sortedCloudSharedAssetsWithDerivativesInLibrary:(id)arg1;
+ (int)thumbnailFormat;
+ (id)uniformTypeIdentifierFromPathExtension:(id)arg1 assetType:(int)arg2;
+ (id)uuidFromAssetURL:(id)arg1 fileExtension:(id*)arg2 sidecarIndex:(id*)arg3;
+ (id)uuidFromAssetURL:(id)arg1;
+ (int)wildcatCachedStackImageFormat;
+ (int)wildcatIndexSheetFormat;
+ (int)wildcatPhotoScrubberFormat;
+ (int)wildcatStackFormat;

- (id)_compactDebugDescription;
- (id)_highDynamicRangeTypeDesription;
- (BOOL)_isSavedAssetTypeValueValid:(int)arg1;
- (BOOL)_isValidUTI:(id)arg1 forService:(id)arg2;
- (id)_kindDesription;
- (id)_prettyDescription;
- (id)_savedAssetTypeDesription;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)addAdjustment;
- (void)addComment:(id)arg1;
- (void)addExtension:(id)arg1;
- (id)addFaceWithRelativeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 identifier:(short)arg2 albumUUID:(id)arg3;
- (id)adjustmentsXMPRepresentation;
- (id)allFileExtensions;
- (id)allFileURLs;
- (id)allUniformTypeIdentifiers;
- (BOOL)allowsRotation;
- (BOOL)allowsWallpaperEditing;
- (int)assetKind;
- (id)assetURL;
- (id)assetURLForSidecarFile:(id)arg1;
- (id)assetURLWithExtension:(id)arg1;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)awakeFromSnapshotEvents:(unsigned int)arg1;
- (BOOL)canPerformEditOperation:(int)arg1;
- (BOOL)canPerformSharingActions;
- (double)captureTime;
- (int)cloudCommentsStatusForOwnedAsset:(BOOL)arg1;
- (BOOL)cloudHasCommentsByMeBoolValue;
- (BOOL)cloudHasCommentsConversationBoolValue;
- (BOOL)cloudHasUnseenCommentsBoolValue;
- (int)cloudPlaceholderKindValue;
- (id)cloudShareAlbum;
- (void)copyToPasteboard;
- (BOOL)couldBeStoredInDCIM;
- (id)date;
- (void)dealloc;
- (void)delete;
- (void)deleteComment:(id)arg1;
- (void)deleteFromDatabaseOnly;
- (unsigned int)effectiveThumbnailIndex;
- (id)embeddedThumbnailData;
- (id)embeddedThumbnailHeight;
- (short)embeddedThumbnailHeightValue;
- (id)embeddedThumbnailLength;
- (int)embeddedThumbnailLengthValue;
- (id)embeddedThumbnailOffset;
- (int)embeddedThumbnailOffsetValue;
- (id)embeddedThumbnailWidth;
- (short)embeddedThumbnailWidthValue;
- (id)faceWithIdentifier:(short)arg1;
- (id)fileExtension;
- (id)fileExtensionForService:(id)arg1;
- (id)filePathsWithoutThumbs;
- (id)fileURLForLargeDisplayableImage;
- (id)fileURLForLargeThumbnailFile;
- (id)fileURLForMetadataWithExtension:(id)arg1;
- (id)fileURLForPrebakedLandscapeScrubberThumbnails;
- (id)fileURLForPrebakedPortraitScrubberThumbnails;
- (id)fileURLForSidecarFile:(id)arg1;
- (id)fileURLForThumbnailFile;
- (void)generateThumbnailsWithPreviewImage:(id)arg1 thumbnailImage:(id)arg2 existingThumbnailIndex:(unsigned int)arg3 fromImageSource:(struct CGImageSource { }*)arg4 imageData:(id)arg5 thumbnailDataByFormatID:(struct __CFDictionary { }*)arg6;
- (struct { double x1; double x2; })gpsCoordinate;
- (BOOL)hasEmbeddedThumbnail;
- (BOOL)hasGPS;
- (BOOL)hasLocationInfo;
- (BOOL)hasXMPFile;
- (int)highDynamicRangeTypeValue;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;
- (id)imageWithFormat:(int)arg1;
- (id)indexSheetImage;
- (id)inflightImage;
- (id)inflightImageInMemory;
- (id)inflightImagePath;
- (id)inflightIndexSheetImage;
- (id)inflightMetadata;
- (BOOL)isAudio;
- (BOOL)isCloudSharedAsset;
- (BOOL)isEditable;
- (BOOL)isHDVideo;
- (BOOL)isInFlight;
- (BOOL)isInRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isJPEG;
- (BOOL)isLocatedAtCoordinates:(struct { double x1; double x2; })arg1;
- (BOOL)isPhoto;
- (BOOL)isPhotoStreamPhoto;
- (BOOL)isSavedPhotosAsset;
- (BOOL)isVideo;
- (id)largestAvailableDataRepresentationAndType:(id*)arg1;
- (id)location;
- (id)mainFileURL;
- (id)mimeType;
- (id)mimeTypeForService:(id)arg1;
- (id)newFullScreenImage:(const struct __CFDictionary {}**)arg1;
- (id)newFullSizeImage;
- (id)newFullSizeImageForImagePickerClient;
- (id)newLowResolutionFullScreenImage;
- (id)originalAsset;
- (id)pasteBoardRepresentation;
- (id)pathForImageFile;
- (id)pathForLargeDisplayableImageFile;
- (id)pathForLargeThumbnailFile;
- (id)pathForLowResolutionFile;
- (id)pathForMetadataDirectory;
- (id)pathForMetadataWithExtension:(id)arg1;
- (id)pathForOriginalFile;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForPrebakedThumbnail;
- (id)pathForPrebakedWildcatThumbnailsFile;
- (id)pathForTrimmedVideoFile;
- (id)pathForVideoFile;
- (id)pathForVideoPreviewFile;
- (id)pathForXMPFile;
- (void)persistMetadataToFilesystem;
- (id)pictureTransferProtocolInformationWithAlbumsObjectIDs:(id)arg1;
- (void)prepareForDeletion;
- (id)previewFrameImageFromDatabase;
- (double)recordModDate;
- (void)registerForChanges;
- (void)save;
- (void)saveBakedVideoThumbnail;
- (int)savedAssetTypeValue;
- (void)setAssetKind:(int)arg1;
- (BOOL)setAttributesFromMainFileURL:(id)arg1 savedAssetType:(int)arg2 imageMetadata:(id)arg3 imageUTI:(id)arg4 imageSource:(struct CGImageSource {}**)arg5 imageData:(id*)arg6;
- (BOOL)setAttributesFromMainFileURL:(id)arg1 savedAssetType:(int)arg2 imageSource:(struct CGImageSource {}**)arg3 imageData:(id*)arg4;
- (void)setCaptureTime:(double)arg1;
- (void)setCloudHasCommentsByMeBoolValue:(BOOL)arg1;
- (void)setCloudHasCommentsConversationBoolValue:(BOOL)arg1;
- (void)setCloudHasUnseenCommentsBoolValue:(BOOL)arg1;
- (void)setCloudPlaceholderKindValue:(int)arg1;
- (void)setEffectiveThumbnailIndex:(unsigned int)arg1;
- (void)setEmbeddedThumbnailHeight:(id)arg1;
- (void)setEmbeddedThumbnailHeightValue:(short)arg1;
- (void)setEmbeddedThumbnailLength:(id)arg1;
- (void)setEmbeddedThumbnailLengthValue:(int)arg1;
- (void)setEmbeddedThumbnailOffset:(id)arg1;
- (void)setEmbeddedThumbnailOffsetValue:(int)arg1;
- (void)setEmbeddedThumbnailWidth:(id)arg1;
- (void)setEmbeddedThumbnailWidthValue:(short)arg1;
- (void)setGpsCoordinate:(struct { double x1; double x2; })arg1;
- (void)setHDRFlagFromImageProperties:(id)arg1;
- (void)setHighDynamicRangeTypeValue:(int)arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setInflightImageInMemory:(id)arg1;
- (void)setInflightImagePath:(id)arg1;
- (void)setInflightIndexSheetImage:(id)arg1;
- (void)setInflightMetadata:(id)arg1;
- (void)setIsInFlight:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationFromImageProperties:(id)arg1;
- (void)setOriginalAsset:(id)arg1;
- (void)setPersistedFileSystemAttributes;
- (void)setRecordModDate:(double)arg1;
- (void)setRecordModDate;
- (void)setSavedAssetTypeFromImageProperties:(id)arg1;
- (void)setSavedAssetTypeValue:(int)arg1;
- (void)setSizeAndOrientationFromImageProperties:(id)arg1;
- (void)setThumbnailDataFromImageProperties:(id)arg1;
- (void)setThumbnailIndex:(int)arg1;
- (void)setUniformTypeIdentifierFromPathExtension:(id)arg1 assetKind:(int)arg2;
- (void)setUniformTypeIdentifierFromPathExtension:(id)arg1;
- (void)setUserCloudSharedLiked:(BOOL)arg1;
- (void)setUtiType:(id)arg1;
- (BOOL)setVideoInfoFromFileAtURL:(id)arg1;
- (id)shortenedFilePath;
- (id)sortedSidecarFiles;
- (BOOL)supportsDistributedPhotoStreamDeletion;
- (id)textBadgeString;
- (int)thumbnailIndex;
- (unsigned int)totalCommentsCount;
- (void)unregisterForChanges;
- (void)updateAdjustmentsWithAdjustmentMetadata:(id)arg1;
- (void)updateAdjustmentsWithFiltersAndIdentifiers:(id)arg1;
- (void)updateAssetKindFromUniformTypeIdentifier;
- (void)updateFromPersistedFileSystemAttributes;
- (id)userAddCloudSharedCommentWithText:(id)arg1;
- (BOOL)userCloudSharedLiked;
- (void)userDeleteCloudSharedComment:(id)arg1;
- (void)userReadAllCloudSharedComments;
- (id)utiType;
- (id)wallpaperFullScreenImage;
- (void)willTurnIntoFault;

@end
