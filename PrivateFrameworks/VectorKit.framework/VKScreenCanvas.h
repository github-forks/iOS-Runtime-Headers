/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKWorld, VKCamera, VKScene, VKLayoutContext, NSArray, NSMutableArray;

@interface VKScreenCanvas : VGLScreenCanvas <VKWorldDelegate, VKCameraControllerCanvasDelegate, VKCameraDelegate> {
    VKCamera *_camera;
    NSMutableArray *_cameraControllers;
    float _debugFramesPerSecond;
    BOOL _debugPaintFrameRateGraph;
    VKLayoutContext *_layoutContext;
    BOOL _needsLayout;
    unsigned int _needsRepaint;
    BOOL _rendersInBackground;
    VKScene *_scene;
    int _state;
    BOOL _userIsGesturing;
    unsigned int _wantsLayout;
    VKWorld *_world;
}

@property(readonly) VKCamera * camera;
@property(readonly) NSArray * cameraControllers;
@property BOOL debugEnableMultisampling;
@property float debugFramesPerSecond;
@property BOOL debugPaintFrameRateGraph;
@property(getter=isGesturing) BOOL gesturing;
@property BOOL rendersInBackground;
@property(readonly) int state;
@property(readonly) VKWorld * world;

+ (Class)contextClass;

- (void)_applicationDidBecomeActive:(id)arg1;
- (BOOL)_updateDisplayStatus:(id)arg1;
- (void)addCameraController:(id)arg1;
- (id)camera;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)cameraControllerDidStopRegionAnimation:(id)arg1 completed:(BOOL)arg2;
- (void)cameraControllerWillStartRegionAnimation:(id)arg1;
- (id)cameraControllers;
- (void)cameraDidChange:(id)arg1;
- (BOOL)canRenderInWindow:(id)arg1;
- (void)dealloc;
- (BOOL)debugEnableMultisampling;
- (float)debugFramesPerSecond;
- (BOOL)debugPaintFrameRateGraph;
- (void)didDrawView;
- (void)didMoveToWindow;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)forceLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isGesturing;
- (void)layoutSubviews;
- (void)onTimerFired:(double)arg1;
- (void)removeCameraController:(id)arg1;
- (BOOL)rendersInBackground;
- (void)setDebugEnableMultisampling:(BOOL)arg1;
- (void)setDebugFramesPerSecond:(float)arg1;
- (void)setDebugPaintFrameRateGraph:(BOOL)arg1;
- (void)setGesturing:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)setRendersInBackground:(BOOL)arg1;
- (int)state;
- (void)takeSnapshotIfNeeded;
- (void)updateCameraForFrameResize;
- (void)willMoveToWindow:(id)arg1;
- (id)world;
- (void)worldDisplayDidChange:(id)arg1;
- (void)worldLayoutDidChange:(id)arg1;

@end
