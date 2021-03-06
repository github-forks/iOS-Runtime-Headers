/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAObjectSupport : AceObject <SAAceSerializable> {
}

@property(copy) NSString * aceVersion;
@property(copy) NSString * classId;
@property(copy) NSString * groupId;
@property(copy) NSArray * supportedProperties;

+ (id)objectSupport;
+ (id)objectSupportWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceVersion;
- (id)classId;
- (id)encodedClassName;
- (id)groupId;
- (id)groupIdentifier;
- (void)setAceVersion:(id)arg1;
- (void)setClassId:(id)arg1;
- (void)setGroupId:(id)arg1;
- (void)setSupportedProperties:(id)arg1;
- (id)supportedProperties;

@end
