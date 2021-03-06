/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKPassBucketTemplate, NSMutableArray;

@interface PKPassBucketView : UIView {
    PKPassBucketTemplate *_bucketTemplate;
    NSMutableArray *_fieldViews;
}

@property(readonly) PKPassBucketTemplate * bucketTemplate;

- (id)bucketTemplate;
- (void)dealloc;
- (id)initWithBucket:(id)arg1 bucketTemplate:(id)arg2;
- (void)layoutSubviews;
- (void)presentDiff:(id)arg1 inView:(id)arg2 completion:(id)arg3;
- (void)setColorProfile:(id)arg1 background:(int)arg2;

@end
