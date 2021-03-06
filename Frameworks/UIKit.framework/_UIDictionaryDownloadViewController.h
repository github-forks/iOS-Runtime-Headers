/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIReferenceLibraryViewController, _UIDictionaryDownloadConfirmView, NSMutableArray, _UIDictionaryDownloadProgressView;

@interface _UIDictionaryDownloadViewController : UIViewController {
    NSMutableArray *_assetsDownloadList;
    _UIDictionaryDownloadConfirmView *_downloadConfirmView;
    _UIDictionaryDownloadProgressView *_downloadProgressView;
    UIReferenceLibraryViewController *_referenceLibraryController;
}

@property UIReferenceLibraryViewController * referenceLibraryController;

- (void)addAssetForDownload:(id)arg1;
- (void)dealloc;
- (void)downloadAsset:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)referenceLibraryController;
- (void)setReferenceLibraryController:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)userWantsToDownload:(id)arg1;
- (void)viewDidLoad;

@end
