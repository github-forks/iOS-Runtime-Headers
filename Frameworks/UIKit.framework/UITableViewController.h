/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableViewDataSource, UIRefreshControl, UITableView;

@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    struct { 
        unsigned int clearsSelectionOnViewWillAppear : 1; 
        unsigned int insetsApplied : 1; 
        unsigned int adjustingInsets : 1; 
    id _keyboardSupport;
    id _staticDataSource;
    } _tableViewControllerFlags;
    int _tableViewStyle;
}

@property BOOL clearsSelectionOnViewWillAppear;
@property(retain) UIRefreshControl * refreshControl;
@property(getter=_staticDataSource,setter=_setStaticDataSource:,retain) UITableViewDataSource * staticDataSource;
@property(retain) UITableView * tableView;

- (void)_adjustTableForKeyboardInfo:(id)arg1;
- (id)_existingTableView;
- (void)_setStaticDataSource:(id)arg1;
- (id)_staticDataSource;
- (BOOL)clearsSelectionOnViewWillAppear;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)refreshControl;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setClearsSelectionOnViewWillAppear:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setRefreshControl:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tableView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
