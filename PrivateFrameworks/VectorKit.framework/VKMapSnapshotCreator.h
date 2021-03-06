/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class VKMapModel, VKImageCanvas;

@interface VKMapSnapshotCreator : NSObject <VKMapModelDelegate> {
    VKImageCanvas *_canvas;
    id _completion;
    VKMapModel *_mapModel;
    int _mapType;
}

@property int labelScaleFactor;
@property BOOL localizeLabels;
@property int mapType;

+ (BOOL)supportsHighResolutionSnapshots;
+ (BOOL)supportsSharingThumbnails;

- (void)_mapkit_configureFromDefaults;
- (void)cancel;
- (void)dealloc;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (BOOL)isRoadClassDisabled:(int)arg1;
- (int)labelScaleFactor;
- (BOOL)localizeLabels;
- (void)mapModel:(id)arg1 annotationMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapModel:(id)arg1 annotationMarker:(id)arg2 didChangeDragState:(int)arg3 fromOldState:(int)arg4;
- (void)mapModel:(id)arg1 didAddAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 didDeselectAnnotationMarker:(id)arg2;
- (void)mapModel:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)mapModel:(id)arg1 didDeselectTrafficIncident:(id)arg2;
- (void)mapModel:(id)arg1 didSelectAnnotationMarker:(id)arg2;
- (void)mapModel:(id)arg1 didUpdateCalloutPopoverController:(id)arg2 forSource:(id)arg3;
- (void)mapModel:(id)arg1 didUpdateCalloutView:(id)arg2 forSource:(id)arg3 animated:(BOOL)arg4;
- (void)mapModel:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (id)mapModel:(id)arg1 markerForAnnotation:(id)arg2;
- (void)mapModel:(id)arg1 needsPanByPixelOffset:(struct CGPoint { float x1; float x2; })arg2 relativeToScreenPoint:(struct CGPoint { float x1; float x2; })arg3 animated:(BOOL)arg4 duration:(double)arg5 completionHandler:(id)arg6;
- (id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapModel:(id)arg1 trafficIncident:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapModel:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 willSelectLabelMarker:(id)arg2;
- (void)mapModel:(id)arg1 willSelectTrafficIncident:(id)arg2;
- (void)mapModel:(id)arg1 willShowCalloutPopoverController:(id)arg2 forSource:(id)arg3;
- (void)mapModel:(id)arg1 willShowCalloutView:(id)arg2 forSource:(id)arg3;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (BOOL)mapModelInNav:(id)arg1;
- (BOOL)mapModelInNavAtDefaultZoom:(id)arg1;
- (double)mapModelZoomScale:(id)arg1;
- (int)mapType;
- (void)renderSnapshot:(id)arg1;
- (void)setLabelScaleFactor:(int)arg1;
- (void)setLocalizeLabels:(BOOL)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)setMapType:(int)arg1;

@end
