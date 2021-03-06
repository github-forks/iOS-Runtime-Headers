/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSDateComponents, <CalDAVCalendar>;

@interface CalDAVContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
    <CalDAVCalendar> *_calendar;
    NSDateComponents *_eventFilterEndDate;
    NSDateComponents *_eventFilterStartDate;
    BOOL _fallbackOnMultiGetError;
    int _fetchingEtagState;
    BOOL _getScheduleChanges;
    BOOL _getScheduleTags;
    BOOL _supportsExtendedCalendarQuery;
    BOOL _syncEvents;
    BOOL _syncTodos;
    NSDateComponents *_todoFilterEndDate;
    NSDateComponents *_todoFilterStartDate;
}

@property(retain) <CalDAVCalendar> * calendar;
@property(retain) NSDateComponents * eventFilterEndDate;
@property(retain) NSDateComponents * eventFilterStartDate;
@property BOOL fallbackOnMultiGetError;
@property BOOL getScheduleChanges;
@property BOOL getScheduleTags;
@property BOOL supportsExtendedCalendarQuery;
@property BOOL syncEvents;
@property BOOL syncTodos;
@property(retain) NSDateComponents * todoFilterEndDate;
@property(retain) NSDateComponents * todoFilterStartDate;

- (BOOL)_shouldFetchEventsForState:(int)arg1;
- (BOOL)_shouldFetchTodosForState:(int)arg1;
- (void)applyAdditionalPropertiesFromPostTask:(id)arg1;
- (void)applyAdditionalPropertiesFromPutTask:(id)arg1;
- (id)calendar;
- (id)copyAdditionalResourcePropertiesToFetch;
- (id)copyGetEtagTaskWithPropertiesToFind:(id)arg1;
- (id)copyGetTaskWithURL:(id)arg1;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)copyPutTaskWithPayloadItem:(id)arg1 forAction:(id)arg2;
- (id)dataContentType;
- (void)dealloc;
- (id)eventFilterEndDate;
- (id)eventFilterStartDate;
- (BOOL)fallbackOnMultiGetError;
- (BOOL)getScheduleChanges;
- (BOOL)getScheduleTags;
- (id)initWithCalendar:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 appSpecificCalendarItemClass:(Class)arg7;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 getScheduleTags:(BOOL)arg5 getScheduleChanges:(BOOL)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 appSpecificCalendarItemClass:(Class)arg9;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 getScheduleTags:(BOOL)arg4 getScheduleChanges:(BOOL)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;
- (void)setCalendar:(id)arg1;
- (void)setEventFilterEndDate:(id)arg1;
- (void)setEventFilterStartDate:(id)arg1;
- (void)setFallbackOnMultiGetError:(BOOL)arg1;
- (void)setGetScheduleChanges:(BOOL)arg1;
- (void)setGetScheduleTags:(BOOL)arg1;
- (void)setSupportsExtendedCalendarQuery:(BOOL)arg1;
- (void)setSyncEvents:(BOOL)arg1;
- (void)setSyncTodos:(BOOL)arg1;
- (void)setTodoFilterEndDate:(id)arg1;
- (void)setTodoFilterStartDate:(id)arg1;
- (BOOL)shouldFetchMoreETags;
- (BOOL)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2;
- (BOOL)supportsExtendedCalendarQuery;
- (BOOL)syncEvents;
- (BOOL)syncTodos;
- (id)todoFilterEndDate;
- (id)todoFilterStartDate;

@end
