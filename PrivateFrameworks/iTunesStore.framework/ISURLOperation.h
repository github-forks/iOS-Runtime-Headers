/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSMutableURLRequestProperties, NSMutableData, NSCountedSet, NSURLRequest, NSURLResponse, ISURLRequestPerformance, <ISURLOperationDelegate>, SSURLRequestProperties, NSURLConnection, ISDataProvider, SSAuthenticationContext;

@interface ISURLOperation : ISOperation {
    NSURLRequest *_activeURLRequest;
    SSAuthenticationContext *_authenticationContext;
    NSURLConnection *_connection;
    NSMutableData *_dataBuffer;
    ISDataProvider *_dataProvider;
    int _networkRetryCount;
    ISURLRequestPerformance *_performanceMetrics;
    NSCountedSet *_redirectURLs;
    SSMutableURLRequestProperties *_requestProperties;
    NSURLResponse *_response;
    BOOL _shouldSetCookies;
    BOOL _usesPrivateCookieStore;
}

@property(getter=_shouldSetCookies,setter=_setShouldSetCookies:) BOOL _shouldSetCookies;
@property(getter=_usesPrivateCookieStore,setter=_setUsesPrivateCookieStore:) BOOL _usesPrivateCookieStore;
@property(retain) SSAuthenticationContext * authenticationContext;
@property(retain) ISDataProvider * dataProvider;
@property <ISURLOperationDelegate> * delegate;
@property(readonly) ISURLRequestPerformance * performanceMetrics;
@property(copy) SSURLRequestProperties * requestProperties;
@property(retain) NSURLResponse * response;
@property BOOL tracksPerformanceMetrics;

+ (id)copyUserAgent;

- (id)_accountIdentifier;
- (id)_activeURL;
- (id)_copyAcceptLanguageString;
- (id)_copyAuthenticationContext;
- (id)_copyConnectionProperties;
- (id)_copyQueryStringDictionaryForRedirect:(id)arg1;
- (id)_decodedDataForData:(id)arg1;
- (id)_errorWithDefaultStringsForError:(id)arg1;
- (id)_errorWithDomain:(id)arg1 code:(int)arg2;
- (void)_handleFinishedLoading;
- (void)_handleReceivedData:(id)arg1;
- (void)_handleReceivedResponse:(id)arg1;
- (id)_handleRedirectRequest:(id)arg1 response:(id)arg2;
- (BOOL)_isTrustExtendedValidation:(struct __SecTrust { }*)arg1;
- (void)_logRequest:(id)arg1;
- (void)_logResponseBody:(id)arg1;
- (void)_performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (id)_requestProperties;
- (void)_retry;
- (void)_run;
- (BOOL)_runRequestWithURL:(id)arg1;
- (id)_sanitizedDescriptionForObject:(id)arg1;
- (id)_sanitizedStringForString:(id)arg1;
- (id)_sanitizedURLForURL:(id)arg1;
- (void)_sendContentLengthToDelegate:(long long)arg1;
- (void)_sendOutputToDelegate:(id)arg1;
- (void)_sendRequestToDelegate:(id)arg1;
- (void)_sendResponseToDelegate:(id)arg1;
- (void)_setActiveURLRequest:(id)arg1;
- (void)_setShouldSetCookies:(BOOL)arg1;
- (void)_setUsesPrivateCookieStore:(BOOL)arg1;
- (BOOL)_shouldSetCookies;
- (void)_stopConnection;
- (void)_stopIfCancelled;
- (void)_updateProgress;
- (BOOL)_usesPrivateCookieStore;
- (BOOL)_validateContentLength:(long long)arg1 error:(id*)arg2;
- (id)authenticationContext;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)dataProvider;
- (void)dealloc;
- (BOOL)handleRedirectFromDataProvider:(id)arg1 error:(id*)arg2;
- (void)handleResponse:(id)arg1;
- (id)init;
- (id)newRequestWithURL:(id)arg1;
- (id)performanceMetrics;
- (id)request;
- (id)requestProperties;
- (id)response;
- (void)run;
- (void)setAuthenticationContext:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestProperties:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setTracksPerformanceMetrics:(BOOL)arg1;
- (BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2;
- (BOOL)tracksPerformanceMetrics;

@end
