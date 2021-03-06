/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <CoreDAVTaskManager>, NSMutableSet, CoreDAVContainerMultiGetTask, NSError, NSSet, <CoreDAVAccountInfoProvider>;

@interface CoreDAVMultiGetWithFallbackTaskGroup : CoreDAVTaskGroup <CoreDAVContainerMultiGetSubmittable> {
    id _getBlock;
    CoreDAVContainerMultiGetTask *_multiGetTask;
    NSMutableSet *_parsedContents;
    BOOL _shouldIgnoreResponseErrors;
    NSMutableSet *_urls;
    BOOL _usingMultiGet;
}

@property <CoreDAVAccountInfoProvider> * accountInfoProvider;
@property(copy) id completionBlock;
@property(readonly) NSError * error;
@property(readonly) NSSet * missingURLs;
@property(readonly) NSSet * parsedContents;
@property BOOL shouldIgnoreResponseErrors;
@property <CoreDAVTaskManager> * taskManager;
@property double timeoutInterval;

- (void)_configureAndSubmitTask:(id)arg1;
- (void)_fetchOneItem;
- (void)_switchToSingleGetMode;
- (void)dealloc;
- (id)error;
- (id)initWithURLs:(id)arg1 multiGetBlock:(id)arg2 getBlock:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;
- (id)missingURLs;
- (id)parsedContents;
- (void)setShouldIgnoreResponseErrors:(BOOL)arg1;
- (BOOL)shouldIgnoreResponseErrors;
- (void)startTaskGroup;
- (void)taskGroupWillCancelWithError:(id)arg1;

@end
