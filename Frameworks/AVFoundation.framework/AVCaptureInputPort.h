/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureInput, NSString, AVCaptureInputPortInternal;

@interface AVCaptureInputPort : NSObject {
    AVCaptureInputPortInternal *_internal;
}

@property(getter=isEnabled) BOOL enabled;
@property(readonly) struct opaqueCMFormatDescription { }* formatDescription;
@property(readonly) AVCaptureInput * input;
@property(readonly) NSString * mediaType;

+ (id)portWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 enabled:(BOOL)arg4;

- (void)_setFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (id)init;
- (id)initWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 enabled:(BOOL)arg4;
- (id)input;
- (BOOL)isEnabled;
- (id)mediaType;
- (void)setEnabled:(BOOL)arg1;
- (void)setOwner:(id)arg1;

@end
