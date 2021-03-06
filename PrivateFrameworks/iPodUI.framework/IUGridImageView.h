/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIImage;

@interface IUGridImageView : UIView {
}

@property(getter=isDownloadable) BOOL downloadable;
@property(getter=isHighlighted) BOOL highlighted;
@property(readonly) UIImage * image;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } imageSubRect;

- (id)image;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageSubRect;
- (BOOL)isDownloadable;
- (BOOL)isHighlighted;
- (void)setDownloadable:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1 imageSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setTitle:(id)arg1;
- (void)setTitleHidden:(BOOL)arg1 animated:(BOOL)arg2;

@end
