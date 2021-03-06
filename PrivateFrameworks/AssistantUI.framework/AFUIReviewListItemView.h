/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class UIImageView, UILabel, SALocalSearchReview, UIView;

@interface AFUIReviewListItemView : UIView {
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    UILabel *_authorLabel;
    UILabel *_dateLabel;
    UIImageView *_quote;
    } _ratingOffset;
    UIView *_ratingView;
    } _ratingViewOffset;
    SALocalSearchReview *_review;
    UILabel *_reviewLabel;
    } _selectionOverlayInsets;
    UIImageView *_separator;
}

@property struct UIOffset { float x1; float x2; } ratingOffset;
@property(retain) UIView * ratingView;
@property(retain) SALocalSearchReview * review;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } selectionOverlayInsets;

+ (float)authorHorizontalSpacingFromRating;
+ (float)bottomRectHeight;
+ (float)dateHorizontalSpacingFromAuthor;
+ (float)quoteVerticalSpacing;
+ (id)separatorImage;

- (void).cxx_destruct;
- (id)_displayStringReviewDate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct UIOffset { float x1; float x2; })ratingOffset;
- (id)ratingView;
- (id)review;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })selectionOverlayInsets;
- (void)setAuthor:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setRatingOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setRatingView:(id)arg1;
- (void)setReview:(id)arg1 maxCharactersToDisplay:(int)arg2;
- (void)setReview:(id)arg1;
- (void)setReviewText:(id)arg1 characterLimit:(int)arg2;
- (void)setSelectionOverlayInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
