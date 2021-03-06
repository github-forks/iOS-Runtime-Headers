/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, UILabel, GKUITheme, UIColor;

@interface GKInviteButton : UIControl {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    BOOL _adjustsImageWhenHighlighted;
    int _buttonStyle;
    UIImage *_highlightImage;
    UIColor *_highlightShadowTitleColor;
    UIColor *_highlightTitleColor;
    float _mostlyInsideInset;
    UIImage *_normalImage;
    UIColor *_normalShadowTitleColor;
    UIColor *_normalTitleColor;
    id _representedObject;
    GKUITheme *_theme;
    } _titleEdgeInsets;
    UILabel *_titleLabel;
}

@property BOOL adjustsImageWhenHighlighted;
@property int buttonStyle;
@property(retain) UIImage * highlightImage;
@property(retain) UIColor * highlightTitleColor;
@property(retain) UIColor * highlightTitleShadowColor;
@property float mostlyInsideInset;
@property(retain) UIImage * normalImage;
@property(retain) UIColor * normalTitleColor;
@property(retain) UIColor * normalTitleShadowColor;
@property(retain) id representedObject;
@property(retain) GKUITheme * theme;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } titleEdgeInsets;
@property(retain) UILabel * titleLabel;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)adjustsImageWhenHighlighted;
- (int)buttonStyle;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)highlightImage;
- (id)highlightTitleColor;
- (id)highlightTitleShadowColor;
- (id)initWithTheme:(id)arg1;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (float)mostlyInsideInset;
- (id)normalImage;
- (id)normalTitleColor;
- (id)normalTitleShadowColor;
- (id)representedObject;
- (void)setAdjustsImageWhenHighlighted:(BOOL)arg1;
- (void)setButtonStyle:(int)arg1;
- (void)setHighlightImage:(id)arg1;
- (void)setHighlightTitleColor:(id)arg1;
- (void)setHighlightTitleShadowColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHightlightShadowTitleColor:(id)arg1;
- (void)setHightlightTitleColor:(id)arg1;
- (void)setMostlyInsideInset:(float)arg1;
- (void)setNormalImage:(id)arg1;
- (void)setNormalShadowTitleColor:(id)arg1;
- (void)setNormalTitleColor:(id)arg1;
- (void)setNormalTitleShadowColor:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)theme;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })titleEdgeInsets;
- (id)titleLabel;

@end
