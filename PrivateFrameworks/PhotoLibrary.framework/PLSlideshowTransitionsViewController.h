/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UITableView, UIView, NSArray, NSString, NSMutableArray;

@interface PLSlideshowTransitionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray *_alternateLocalizations;
    UIView *_containerView;
    NSString *_selectedTransition;
    UITableView *_table;
    NSMutableArray *_tableCells;
    NSArray *_transitionKeys;
}

@property(retain) NSArray * alternateLocalizations;
@property(retain) NSString * selectedTransition;
@property(retain) NSArray * transitionKeys;

- (void)_configureTableCells;
- (id)alternateLocalizations;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (void)dealloc;
- (id)initWithTransitions:(id)arg1 alternateTransitionLocalizations:(id)arg2;
- (void)loadView;
- (id)selectedTransition;
- (void)setAlternateLocalizations:(id)arg1;
- (void)setSelectedTransition:(id)arg1;
- (void)setTransitionKeys:(id)arg1 alternateLocalizations:(id)arg2;
- (void)setTransitionKeys:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)transitionKeys;
- (void)viewDidUnload;

@end
