// Autogenerated from Pigeon (v3.1.5), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, LocationAccuracy) {
  LocationAccuracyPowerSave = 0,
  LocationAccuracyLow = 1,
  LocationAccuracyBalanced = 2,
  LocationAccuracyHigh = 3,
  LocationAccuracyNavigation = 4,
};

typedef NS_ENUM(NSUInteger, PermissionStatus) {
  PermissionStatusGranted = 0,
  PermissionStatusGrantedLimited = 1,
  PermissionStatusDenied = 2,
  PermissionStatusDeniedForever = 3,
};

@class LocationData;
@class LocationSettings;

@interface LocationData : NSObject
+ (instancetype)makeWithLatitude:(nullable NSNumber *)latitude
    longitude:(nullable NSNumber *)longitude
    accuracy:(nullable NSNumber *)accuracy
    altitude:(nullable NSNumber *)altitude
    bearing:(nullable NSNumber *)bearing
    bearingAccuracyDegrees:(nullable NSNumber *)bearingAccuracyDegrees
    elaspedRealTimeNanos:(nullable NSNumber *)elaspedRealTimeNanos
    elaspedRealTimeUncertaintyNanos:(nullable NSNumber *)elaspedRealTimeUncertaintyNanos
    sattelites:(nullable NSNumber *)sattelites
    speed:(nullable NSNumber *)speed
    speedAccuracy:(nullable NSNumber *)speedAccuracy
    time:(nullable NSNumber *)time
    verticalAccuracy:(nullable NSNumber *)verticalAccuracy
    isMock:(nullable NSNumber *)isMock;
@property(nonatomic, strong, nullable) NSNumber * latitude;
@property(nonatomic, strong, nullable) NSNumber * longitude;
@property(nonatomic, strong, nullable) NSNumber * accuracy;
@property(nonatomic, strong, nullable) NSNumber * altitude;
@property(nonatomic, strong, nullable) NSNumber * bearing;
@property(nonatomic, strong, nullable) NSNumber * bearingAccuracyDegrees;
@property(nonatomic, strong, nullable) NSNumber * elaspedRealTimeNanos;
@property(nonatomic, strong, nullable) NSNumber * elaspedRealTimeUncertaintyNanos;
@property(nonatomic, strong, nullable) NSNumber * sattelites;
@property(nonatomic, strong, nullable) NSNumber * speed;
@property(nonatomic, strong, nullable) NSNumber * speedAccuracy;
@property(nonatomic, strong, nullable) NSNumber * time;
@property(nonatomic, strong, nullable) NSNumber * verticalAccuracy;
@property(nonatomic, strong, nullable) NSNumber * isMock;
- (NSDictionary *)toMap;
@end

@interface LocationSettings : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithAskForPermission:(NSNumber *)askForPermission
    rationaleMessageForPermissionRequest:(NSString *)rationaleMessageForPermissionRequest
    rationaleMessageForGPSRequest:(NSString *)rationaleMessageForGPSRequest
    useGooglePlayServices:(NSNumber *)useGooglePlayServices
    askForGooglePlayServices:(NSNumber *)askForGooglePlayServices
    askForGPS:(NSNumber *)askForGPS
    fallbackToGPS:(NSNumber *)fallbackToGPS
    ignoreLastKnownPosition:(NSNumber *)ignoreLastKnownPosition
    expirationDuration:(nullable NSNumber *)expirationDuration
    expirationTime:(nullable NSNumber *)expirationTime
    fastestInterval:(NSNumber *)fastestInterval
    interval:(NSNumber *)interval
    maxWaitTime:(nullable NSNumber *)maxWaitTime
    numUpdates:(nullable NSNumber *)numUpdates
    accuracy:(LocationAccuracy)accuracy
    smallestDisplacement:(NSNumber *)smallestDisplacement
    waitForAccurateLocation:(NSNumber *)waitForAccurateLocation
    acceptableAccuracy:(nullable NSNumber *)acceptableAccuracy;
@property(nonatomic, strong) NSNumber * askForPermission;
@property(nonatomic, copy) NSString * rationaleMessageForPermissionRequest;
@property(nonatomic, copy) NSString * rationaleMessageForGPSRequest;
@property(nonatomic, strong) NSNumber * useGooglePlayServices;
@property(nonatomic, strong) NSNumber * askForGooglePlayServices;
@property(nonatomic, strong) NSNumber * askForGPS;
@property(nonatomic, strong) NSNumber * fallbackToGPS;
@property(nonatomic, strong) NSNumber * ignoreLastKnownPosition;
@property(nonatomic, strong, nullable) NSNumber * expirationDuration;
@property(nonatomic, strong, nullable) NSNumber * expirationTime;
@property(nonatomic, strong) NSNumber * fastestInterval;
@property(nonatomic, strong) NSNumber * interval;
@property(nonatomic, strong, nullable) NSNumber * maxWaitTime;
@property(nonatomic, strong, nullable) NSNumber * numUpdates;
@property(nonatomic, assign) LocationAccuracy accuracy;
@property(nonatomic, strong) NSNumber * smallestDisplacement;
@property(nonatomic, strong) NSNumber * waitForAccurateLocation;
@property(nonatomic, strong, nullable) NSNumber * acceptableAccuracy;
@end

/// The codec used by LocationHostApi.
NSObject<FlutterMessageCodec> *LocationHostApiGetCodec(void);

@protocol LocationHostApi
- (void)getLocationSettings:(nullable LocationSettings *)settings completion:(void(^)(LocationData *_Nullable, FlutterError *_Nullable))completion;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)setLocationSettingsSettings:(LocationSettings *)settings error:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)getPermissionStatusWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)requestPermissionWithCompletion:(void(^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)isGPSEnabledWithError:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)isNetworkEnabledWithError:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void LocationHostApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<LocationHostApi> *_Nullable api);

NS_ASSUME_NONNULL_END