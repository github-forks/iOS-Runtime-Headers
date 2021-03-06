/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@class NSArray, UIViewController, UITableViewController;

@interface DDLinksController : UIViewController <UITableViewDataSource, UITableViewDelegate, ABPersonViewControllerDelegate, ABUnknownPersonViewControllerDelegate> {
    UIViewController *_currentDisplayedViewController;
    NSArray *_dataDetectorsResults;
    struct __DDResult { } *_displayedResult;
    UITableViewController *_tableController;
}

@property(retain) UIViewController * currentDisplayedViewController;

- (id)_abPersonViewControllerForPerson:(void*)arg1 property:(int)arg2 withIdentifier:(int)arg3;
- (void*)_copyPersonForDisplayedResult;
- (void)_displayViewController:(id)arg1;
- (void)_setDisplayedResult:(struct __DDResult { }*)arg1;
- (id)_unknownPersonViewControllerForDisplayedResult;
- (id)_viewControllerForDisplayedResult;
- (id)currentDisplayedViewController;
- (void)dealloc;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)setCurrentDisplayedViewController:(id)arg1;
- (void)setDataDetectorsResults:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)title;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
