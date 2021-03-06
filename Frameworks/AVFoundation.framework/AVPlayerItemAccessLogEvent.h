/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayerItemAccessLogEventInternal, NSDate, NSString;

@interface AVPlayerItemAccessLogEvent : NSObject <NSCopying> {
    AVPlayerItemAccessLogEventInternal *_playerItemAccessLogEvent;
}

@property(readonly) NSString * URI;
@property(readonly) double durationWatched;
@property(readonly) double indicatedBitrate;
@property(readonly) long long numberOfBytesTransferred;
@property(readonly) int numberOfDroppedVideoFrames;
@property(readonly) int numberOfMediaRequests;
@property(readonly) int numberOfSegmentsDownloaded;
@property(readonly) int numberOfServerAddressChanges;
@property(readonly) int numberOfStalls;
@property(readonly) double observedBitrate;
@property(readonly) NSString * playbackSessionID;
@property(readonly) NSDate * playbackStartDate;
@property(readonly) double playbackStartOffset;
@property(readonly) double segmentsDownloadedDuration;
@property(readonly) NSString * serverAddress;

- (id)URI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)durationWatched;
- (void)finalize;
- (double)indicatedBitrate;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (long long)numberOfBytesTransferred;
- (int)numberOfDroppedVideoFrames;
- (int)numberOfMediaRequests;
- (int)numberOfSegmentsDownloaded;
- (int)numberOfServerAddressChanges;
- (int)numberOfStalls;
- (double)observedBitrate;
- (id)playbackSessionID;
- (id)playbackStartDate;
- (double)playbackStartOffset;
- (double)segmentsDownloadedDuration;
- (id)serverAddress;

@end
