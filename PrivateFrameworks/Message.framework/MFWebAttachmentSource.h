/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableDictionary, MFLock;

@interface MFWebAttachmentSource : NSObject {
    NSMutableDictionary *_attachmentsByURL;
    MFLock *_attachmentsLock;
    NSMutableDictionary *_removedAttachmentsByURL;
}

@property BOOL keepRemovedAttachments;

+ (id)allSources;

- (id)attachmentForURL:(id)arg1 includeRemoved:(BOOL)arg2;
- (id)attachmentForURL:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)keepRemovedAttachments;
- (void)removeAttachmentForURL:(id)arg1;
- (BOOL)setAttachment:(id)arg1 forURL:(id)arg2;
- (void)setKeepRemovedAttachments:(BOOL)arg1;

@end
