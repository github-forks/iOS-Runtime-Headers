/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, NSArray;

@interface GKImageBackgroundView : GKBackgroundView {
    UIImage *_backgroundImage;
    NSArray *_backgroundTiles;
}

@property(retain) UIImage * backgroundImage;
@property(retain) NSArray * backgroundTiles;

- (id)backgroundImage;
- (id)backgroundImageForCurrentWidth;
- (id)backgroundTiles;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundTiles:(id)arg1;

@end
