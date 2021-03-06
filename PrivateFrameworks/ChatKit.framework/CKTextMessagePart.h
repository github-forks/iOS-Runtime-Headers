/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString, NSAttributedString;

@interface CKTextMessagePart : CKMessagePart {
    NSString *_contentLocation;
    NSAttributedString *_text;
}

@property(copy) NSString * contentLocation;

- (id)contentLocation;
- (void)copyToPasteboard;
- (void)dealloc;
- (id)description;
- (id)detachedCopy;
- (id)initWithText:(id)arg1;
- (BOOL)isDisplayable;
- (void)setContentLocation:(id)arg1;
- (id)text;
- (int)type;

@end
