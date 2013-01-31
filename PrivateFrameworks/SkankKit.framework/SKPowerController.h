/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

@interface SKPowerController : NSObject  {
    BOOL _backlightPower;
    BOOL _touchPower;
    BOOL _shhhhSleeping;
    struct __CFRunLoop { } *_runLoop;
    struct __SCPreferences { } *_preferences;
    int _cycleCount;
    int _voltage;
    float _instantAmperage;
    BOOL _fullyCharged;
    int _designCapacity;
    int _maxCapacity;
    int _currentCapacity;
    int _level;
    BOOL _installed;
    BOOL _charging;
    BOOL _connected;
    int _chargerID;
    float _chargeCurrent;
    struct IONotificationPort { } *_notificationPort;
    BOOL _showedBatteryWarning;
    unsigned int _service;
    unsigned int _sleepService;
    unsigned int _batteryStatusNotifier;
    unsigned int _systemPowerNotifier;
    struct IONotificationPort { } *_systemPowerPort;
    unsigned int _rootPowerService;
    unsigned int _inhibitChargingAssertion;
    unsigned int _inhibitACConnectAssertion;
    bool_ignorePowerChange;
}

+ (id)sharedInstance;
+ (void)reboot;
+ (void)shutdown;

- (void)dealloc;
- (id)init;
- (void)setIgnorePowerChange:(bool)arg1;
- (int)setBatteryChargeEnabled:(BOOL)arg1;
- (int)setACSoftConnected:(BOOL)arg1;
- (long)batteryRawVoltage;
- (struct IONotificationPort { }*)notificationPort;
- (float)chargeCurrent;
- (id)chargerType;
- (BOOL)isCharging;
- (int)currentCapacity;
- (int)designCapacity;
- (BOOL)isFullyCharged;
- (float)instantAmperage;
- (int)voltage;
- (int)cycleCount;
- (void)setBluetoothPower:(BOOL)arg1;
- (BOOL)bluetoothPower;
- (void)setWifiPower:(BOOL)arg1;
- (BOOL)wifiPower;
- (BOOL)touchPower;
- (BOOL)backlightPower;
- (BOOL)lcdPower;
- (void)scheduleWakeAfterDelay:(double)arg1;
- (void)wake;
- (BOOL)asleep;
- (unsigned int)rootPowerService;
- (void)unsetAsleep;
- (bool)ignorePowerChange;
- (void)setAsleep;
- (void)setBacklightPower:(BOOL)arg1;
- (void)setLcdPower:(BOOL)arg1;
- (int)updateStateForBattery:(unsigned int)arg1;
- (void)handleNewPowerValues;
- (void)scheduleWakeAtTime:(id)arg1;
- (unsigned int)sleepService;
- (void)listenForSystemPower;
- (void)watchPowerSources;
- (void)setTouchPower:(BOOL)arg1;
- (unsigned int)service;
- (int)maxCapacity;
- (float)brightness;
- (void)setBrightness:(float)arg1;
- (int)batteryLevel;
- (void)setAirplaneMode:(BOOL)arg1;
- (BOOL)airplaneMode;
- (BOOL)isInstalled;
- (void)sleep;
- (BOOL)isConnected;

@end