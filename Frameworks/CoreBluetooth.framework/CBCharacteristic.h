/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class CBUUID, NSArray, NSData, CBService;

@interface CBCharacteristic : NSObject {
    CBUUID *_UUID;
    NSArray *_descriptors;
    BOOL _isBroadcasted;
    BOOL _isNotifying;
    int _properties;
    CBService *_service;
    NSData *_value;
}

@property(readonly) CBUUID * UUID;
@property(retain) NSArray * descriptors;
@property(readonly) BOOL isBroadcasted;
@property(readonly) BOOL isNotifying;
@property(readonly) int properties;
@property CBService * service;
@property(retain) NSData * value;

- (id)UUID;
- (id)descriptors;
- (BOOL)isBroadcasted;
- (BOOL)isNotifying;
- (int)properties;
- (id)service;
- (void)setDescriptors:(id)arg1;
- (void)setService:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
