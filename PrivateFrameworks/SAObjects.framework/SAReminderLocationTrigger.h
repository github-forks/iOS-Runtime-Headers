/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString, SALocation;

@interface SAReminderLocationTrigger : SAReminderTrigger {
}

@property(copy) NSURL * contactIdentifier;
@property(retain) SALocation * location;
@property(copy) NSString * timing;

+ (id)locationTrigger;
+ (id)locationTriggerWithDictionary:(id)arg1 context:(id)arg2;

- (id)contactIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)location;
- (void)setContactIdentifier:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setTiming:(id)arg1;
- (id)timing;

@end
