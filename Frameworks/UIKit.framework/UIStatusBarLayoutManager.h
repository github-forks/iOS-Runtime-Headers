/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBarItemView, UIStatusBarForegroundView;

@interface UIStatusBarLayoutManager : NSObject {
    UIStatusBarForegroundView *_foregroundView;
    UIStatusBarItemView *_itemViews[24];
    int _region;
}

@property UIStatusBarForegroundView * foregroundView;

- (id)_createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForItemView:(id)arg1 startPosition:(float)arg2;
- (SEL)_itemSortSelector;
- (id)_itemViews;
- (id)_itemViewsSortedForLayout;
- (float)_positionAfterPlacingItemView:(id)arg1 startPosition:(float)arg2;
- (void)_positionNewItemViewsWithEnabledItems:(BOOL*)arg1;
- (void)_prepareEnabledItemType:(int)arg1 withEnabledItems:(BOOL*)arg2 withData:(id)arg3 actions:(int)arg4 itemAppearing:(BOOL*)arg5 itemDisappearing:(BOOL*)arg6;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_repositionedNewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 widthDelta:(float)arg2;
- (float)_startPosition;
- (BOOL)_updateItemView:(id)arg1 withData:(id)arg2 actions:(int)arg3 animated:(BOOL)arg4;
- (id)_viewForItem:(id)arg1;
- (float)_widthNeededForItemView:(id)arg1;
- (void)clearOverlapFromItems:(id)arg1;
- (void)dealloc;
- (float)distributeOverlap:(float)arg1 amongItems:(id)arg2;
- (id)foregroundView;
- (id)initWithRegion:(int)arg1 foregroundView:(id)arg2;
- (BOOL)itemIsVisible:(id)arg1;
- (void)itemView:(id)arg1 widthChangedBy:(float)arg2;
- (void)makeVisibleItemsPerformPendedActions;
- (void)positionInvisibleItems;
- (BOOL)prepareDoubleHeightItemWithEnabledItems:(BOOL*)arg1;
- (BOOL)prepareEnabledItems:(BOOL*)arg1 withData:(id)arg2 actions:(int)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForItems:(id)arg1;
- (void)reflowWithVisibleItems:(id)arg1 duration:(double)arg2;
- (void)removeDisabledItems:(BOOL*)arg1;
- (float)removeOverlap:(float)arg1 fromItems:(id)arg2;
- (void)setForegroundView:(id)arg1;
- (void)setVisibilityOfAllItems:(BOOL)arg1;
- (void)setVisibilityOfItem:(id)arg1 visible:(BOOL)arg2;
- (BOOL)updateDoubleHeightItem;
- (BOOL)updateItemsWithData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3;
- (float)widthNeededForItem:(id)arg1;
- (float)widthNeededForItems:(id)arg1;

@end
