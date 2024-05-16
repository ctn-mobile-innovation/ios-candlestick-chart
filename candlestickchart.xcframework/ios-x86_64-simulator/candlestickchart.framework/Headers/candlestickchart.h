#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CandlestickchartCandlestickChart, UIViewController, CandlestickchartCandlestickData, CandlestickchartChartStyle, CandlestickchartChartConfig, CandlestickchartBollingerBandsData, CandlestickchartColorHex, CandlestickchartInternalIndicatorData, CandlestickchartKDJData, CandlestickchartKotlinEnumCompanion, CandlestickchartKotlinEnum<E>, CandlestickchartAxisDirection, CandlestickchartKotlinArray<T>, CandlestickchartChartColor, CandlestickchartInternalIndicators, CandlestickchartExternalIndicators, CandlestickchartMovingAverage;

@protocol CandlestickchartKotlinComparable, CandlestickchartDateFormatter, CandlestickchartKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface CandlestickchartBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface CandlestickchartBase (CandlestickchartBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface CandlestickchartMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface CandlestickchartMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorCandlestickchartKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface CandlestickchartNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface CandlestickchartByte : CandlestickchartNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface CandlestickchartUByte : CandlestickchartNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface CandlestickchartShort : CandlestickchartNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface CandlestickchartUShort : CandlestickchartNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface CandlestickchartInt : CandlestickchartNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface CandlestickchartUInt : CandlestickchartNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface CandlestickchartLong : CandlestickchartNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface CandlestickchartULong : CandlestickchartNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface CandlestickchartFloat : CandlestickchartNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface CandlestickchartDouble : CandlestickchartNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface CandlestickchartBoolean : CandlestickchartNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("DateFormatter")))
@protocol CandlestickchartDateFormatter
@required
- (NSString *)formatTimestampTimestamp:(int64_t)timestamp __attribute__((swift_name("formatTimestamp(timestamp:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CandlestickChart")))
@interface CandlestickchartCandlestickChart : CandlestickchartBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)candlestickChart __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CandlestickchartCandlestickChart *shared __attribute__((swift_name("shared")));
- (void)initialize __attribute__((swift_name("initialize()")));
- (UIViewController *)setupWithData:(NSArray<CandlestickchartCandlestickData *> *)data chartStyle:(CandlestickchartChartStyle *)chartStyle chartConfig:(CandlestickchartChartConfig *)chartConfig onLoadMore:(void (^)(void))onLoadMore __attribute__((swift_name("setupWith(data:chartStyle:chartConfig:onLoadMore:)")));
- (void)updateChartData:(NSArray<CandlestickchartCandlestickData *> *)data chartConfig:(CandlestickchartChartConfig *)chartConfig __attribute__((swift_name("updateChart(data:chartConfig:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BollingerBandsData")))
@interface CandlestickchartBollingerBandsData : CandlestickchartBase
- (instancetype)initWithUpperBand:(CandlestickchartFloat * _Nullable)upperBand middleBand:(CandlestickchartFloat * _Nullable)middleBand lowerBand:(CandlestickchartFloat * _Nullable)lowerBand __attribute__((swift_name("init(upperBand:middleBand:lowerBand:)"))) __attribute__((objc_designated_initializer));
- (CandlestickchartBollingerBandsData *)doCopyUpperBand:(CandlestickchartFloat * _Nullable)upperBand middleBand:(CandlestickchartFloat * _Nullable)middleBand lowerBand:(CandlestickchartFloat * _Nullable)lowerBand __attribute__((swift_name("doCopy(upperBand:middleBand:lowerBand:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property CandlestickchartFloat * _Nullable lowerBand __attribute__((swift_name("lowerBand")));
@property CandlestickchartFloat * _Nullable middleBand __attribute__((swift_name("middleBand")));
@property CandlestickchartFloat * _Nullable upperBand __attribute__((swift_name("upperBand")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CandlestickData")))
@interface CandlestickchartCandlestickData : CandlestickchartBase
- (instancetype)initWithXAxisLabel:(NSString *)xAxisLabel open:(float)open high:(float)high low:(float)low close:(float)close volume:(double)volume __attribute__((swift_name("init(xAxisLabel:open:high:low:close:volume:)"))) __attribute__((objc_designated_initializer));
- (CandlestickchartCandlestickData *)doCopyXAxisLabel:(NSString *)xAxisLabel open:(float)open high:(float)high low:(float)low close:(float)close volume:(double)volume __attribute__((swift_name("doCopy(xAxisLabel:open:high:low:close:volume:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float close __attribute__((swift_name("close")));
@property (readonly) float high __attribute__((swift_name("high")));
@property (readonly) float low __attribute__((swift_name("low")));
@property (readonly) float open __attribute__((swift_name("open")));
@property (readonly) double volume __attribute__((swift_name("volume")));
@property (readonly) NSString *xAxisLabel __attribute__((swift_name("xAxisLabel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorHex")))
@interface CandlestickchartColorHex : CandlestickchartBase
- (instancetype)initWithColor:(NSString * _Nullable)color __attribute__((swift_name("init(color:)"))) __attribute__((objc_designated_initializer));
- (CandlestickchartColorHex *)doCopyColor:(NSString * _Nullable)color __attribute__((swift_name("doCopy(color:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable color __attribute__((swift_name("color")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InternalIndicatorData")))
@interface CandlestickchartInternalIndicatorData : CandlestickchartBase
- (instancetype)initWithSimpleMovingAverageData:(NSArray<id> * _Nullable)simpleMovingAverageData weightedMovingAverageData:(NSArray<id> * _Nullable)weightedMovingAverageData exponentialMovingAverageData:(NSArray<id> * _Nullable)exponentialMovingAverageData bollingerData:(NSArray<id> * _Nullable)bollingerData __attribute__((swift_name("init(simpleMovingAverageData:weightedMovingAverageData:exponentialMovingAverageData:bollingerData:)"))) __attribute__((objc_designated_initializer));
- (CandlestickchartInternalIndicatorData *)doCopySimpleMovingAverageData:(NSArray<id> * _Nullable)simpleMovingAverageData weightedMovingAverageData:(NSArray<id> * _Nullable)weightedMovingAverageData exponentialMovingAverageData:(NSArray<id> * _Nullable)exponentialMovingAverageData bollingerData:(NSArray<id> * _Nullable)bollingerData __attribute__((swift_name("doCopy(simpleMovingAverageData:weightedMovingAverageData:exponentialMovingAverageData:bollingerData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<id> * _Nullable bollingerData __attribute__((swift_name("bollingerData")));
@property NSArray<id> * _Nullable exponentialMovingAverageData __attribute__((swift_name("exponentialMovingAverageData")));
@property NSArray<id> * _Nullable simpleMovingAverageData __attribute__((swift_name("simpleMovingAverageData")));
@property NSArray<id> * _Nullable weightedMovingAverageData __attribute__((swift_name("weightedMovingAverageData")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KDJData")))
@interface CandlestickchartKDJData : CandlestickchartBase
- (instancetype)initWithK:(CandlestickchartDouble * _Nullable)k d:(CandlestickchartDouble * _Nullable)d j:(CandlestickchartDouble * _Nullable)j __attribute__((swift_name("init(k:d:j:)"))) __attribute__((objc_designated_initializer));
- (CandlestickchartKDJData *)doCopyK:(CandlestickchartDouble * _Nullable)k d:(CandlestickchartDouble * _Nullable)d j:(CandlestickchartDouble * _Nullable)j __attribute__((swift_name("doCopy(k:d:j:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property CandlestickchartDouble * _Nullable d __attribute__((swift_name("d")));
@property CandlestickchartDouble * _Nullable j __attribute__((swift_name("j")));
@property CandlestickchartDouble * _Nullable k __attribute__((swift_name("k")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol CandlestickchartKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface CandlestickchartKotlinEnum<E> : CandlestickchartBase <CandlestickchartKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CandlestickchartKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AxisDirection")))
@interface CandlestickchartAxisDirection : CandlestickchartKotlinEnum<CandlestickchartAxisDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CandlestickchartAxisDirection *left __attribute__((swift_name("left")));
@property (class, readonly) CandlestickchartAxisDirection *right __attribute__((swift_name("right")));
+ (CandlestickchartKotlinArray<CandlestickchartAxisDirection *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CandlestickchartAxisDirection *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChartColor")))
@interface CandlestickchartChartColor : CandlestickchartBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithBullishCandleColor:(CandlestickchartColorHex *)bullishCandleColor bearishCandleColor:(CandlestickchartColorHex *)bearishCandleColor bullishVolumeColor:(CandlestickchartColorHex *)bullishVolumeColor bearishVolumeColor:(CandlestickchartColorHex *)bearishVolumeColor bgColor:(CandlestickchartColorHex *)bgColor wickColor:(CandlestickchartColorHex *)wickColor xAxisLabelColor:(CandlestickchartColorHex *)xAxisLabelColor yAxisLabelColor:(CandlestickchartColorHex *)yAxisLabelColor dividerColor:(CandlestickchartColorHex *)dividerColor rsiLineColor:(CandlestickchartColorHex *)rsiLineColor kdjKLineColor:(CandlestickchartColorHex *)kdjKLineColor kdjDLineColor:(CandlestickchartColorHex *)kdjDLineColor kdjJLineColor:(CandlestickchartColorHex *)kdjJLineColor smaLineColor:(CandlestickchartColorHex *)smaLineColor emaLineColor:(CandlestickchartColorHex *)emaLineColor wmaLineColor:(CandlestickchartColorHex *)wmaLineColor bollingerBandsOuterColor:(CandlestickchartColorHex *)bollingerBandsOuterColor bollingerBandsInnerColor:(CandlestickchartColorHex *)bollingerBandsInnerColor infoWindowLabelColor:(CandlestickchartColorHex *)infoWindowLabelColor infoWindowBgColor:(CandlestickchartColorHex *)infoWindowBgColor currentPriceBackgroundColor:(CandlestickchartColorHex *)currentPriceBackgroundColor currentPriceLabelColor:(CandlestickchartColorHex *)currentPriceLabelColor __attribute__((swift_name("init(bullishCandleColor:bearishCandleColor:bullishVolumeColor:bearishVolumeColor:bgColor:wickColor:xAxisLabelColor:yAxisLabelColor:dividerColor:rsiLineColor:kdjKLineColor:kdjDLineColor:kdjJLineColor:smaLineColor:emaLineColor:wmaLineColor:bollingerBandsOuterColor:bollingerBandsInnerColor:infoWindowLabelColor:infoWindowBgColor:currentPriceBackgroundColor:currentPriceLabelColor:)"))) __attribute__((objc_designated_initializer));
- (CandlestickchartChartColor *)doCopyBullishCandleColor:(CandlestickchartColorHex *)bullishCandleColor bearishCandleColor:(CandlestickchartColorHex *)bearishCandleColor bullishVolumeColor:(CandlestickchartColorHex *)bullishVolumeColor bearishVolumeColor:(CandlestickchartColorHex *)bearishVolumeColor bgColor:(CandlestickchartColorHex *)bgColor wickColor:(CandlestickchartColorHex *)wickColor xAxisLabelColor:(CandlestickchartColorHex *)xAxisLabelColor yAxisLabelColor:(CandlestickchartColorHex *)yAxisLabelColor dividerColor:(CandlestickchartColorHex *)dividerColor rsiLineColor:(CandlestickchartColorHex *)rsiLineColor kdjKLineColor:(CandlestickchartColorHex *)kdjKLineColor kdjDLineColor:(CandlestickchartColorHex *)kdjDLineColor kdjJLineColor:(CandlestickchartColorHex *)kdjJLineColor smaLineColor:(CandlestickchartColorHex *)smaLineColor emaLineColor:(CandlestickchartColorHex *)emaLineColor wmaLineColor:(CandlestickchartColorHex *)wmaLineColor bollingerBandsOuterColor:(CandlestickchartColorHex *)bollingerBandsOuterColor bollingerBandsInnerColor:(CandlestickchartColorHex *)bollingerBandsInnerColor infoWindowLabelColor:(CandlestickchartColorHex *)infoWindowLabelColor infoWindowBgColor:(CandlestickchartColorHex *)infoWindowBgColor currentPriceBackgroundColor:(CandlestickchartColorHex *)currentPriceBackgroundColor currentPriceLabelColor:(CandlestickchartColorHex *)currentPriceLabelColor __attribute__((swift_name("doCopy(bullishCandleColor:bearishCandleColor:bullishVolumeColor:bearishVolumeColor:bgColor:wickColor:xAxisLabelColor:yAxisLabelColor:dividerColor:rsiLineColor:kdjKLineColor:kdjDLineColor:kdjJLineColor:smaLineColor:emaLineColor:wmaLineColor:bollingerBandsOuterColor:bollingerBandsInnerColor:infoWindowLabelColor:infoWindowBgColor:currentPriceBackgroundColor:currentPriceLabelColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property CandlestickchartColorHex *bearishCandleColor __attribute__((swift_name("bearishCandleColor")));
@property CandlestickchartColorHex *bearishVolumeColor __attribute__((swift_name("bearishVolumeColor")));
@property CandlestickchartColorHex *bgColor __attribute__((swift_name("bgColor")));
@property CandlestickchartColorHex *bollingerBandsInnerColor __attribute__((swift_name("bollingerBandsInnerColor")));
@property CandlestickchartColorHex *bollingerBandsOuterColor __attribute__((swift_name("bollingerBandsOuterColor")));
@property CandlestickchartColorHex *bullishCandleColor __attribute__((swift_name("bullishCandleColor")));
@property CandlestickchartColorHex *bullishVolumeColor __attribute__((swift_name("bullishVolumeColor")));
@property CandlestickchartColorHex *currentPriceBackgroundColor __attribute__((swift_name("currentPriceBackgroundColor")));
@property CandlestickchartColorHex *currentPriceLabelColor __attribute__((swift_name("currentPriceLabelColor")));
@property CandlestickchartColorHex *dividerColor __attribute__((swift_name("dividerColor")));
@property CandlestickchartColorHex *emaLineColor __attribute__((swift_name("emaLineColor")));
@property CandlestickchartColorHex *infoWindowBgColor __attribute__((swift_name("infoWindowBgColor")));
@property CandlestickchartColorHex *infoWindowLabelColor __attribute__((swift_name("infoWindowLabelColor")));
@property CandlestickchartColorHex *kdjDLineColor __attribute__((swift_name("kdjDLineColor")));
@property CandlestickchartColorHex *kdjJLineColor __attribute__((swift_name("kdjJLineColor")));
@property CandlestickchartColorHex *kdjKLineColor __attribute__((swift_name("kdjKLineColor")));
@property CandlestickchartColorHex *rsiLineColor __attribute__((swift_name("rsiLineColor")));
@property CandlestickchartColorHex *smaLineColor __attribute__((swift_name("smaLineColor")));
@property CandlestickchartColorHex *wickColor __attribute__((swift_name("wickColor")));
@property CandlestickchartColorHex *wmaLineColor __attribute__((swift_name("wmaLineColor")));
@property CandlestickchartColorHex *xAxisLabelColor __attribute__((swift_name("xAxisLabelColor")));
@property CandlestickchartColorHex *yAxisLabelColor __attribute__((swift_name("yAxisLabelColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChartConfig")))
@interface CandlestickchartChartConfig : CandlestickchartBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithInternalIndicator:(CandlestickchartInternalIndicators *)internalIndicator externalIndicator:(CandlestickchartExternalIndicators *)externalIndicator axisDirection:(CandlestickchartAxisDirection *)axisDirection __attribute__((swift_name("init(internalIndicator:externalIndicator:axisDirection:)"))) __attribute__((objc_designated_initializer));
- (CandlestickchartChartConfig *)doCopyInternalIndicator:(CandlestickchartInternalIndicators *)internalIndicator externalIndicator:(CandlestickchartExternalIndicators *)externalIndicator axisDirection:(CandlestickchartAxisDirection *)axisDirection __attribute__((swift_name("doCopy(internalIndicator:externalIndicator:axisDirection:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property CandlestickchartAxisDirection *axisDirection __attribute__((swift_name("axisDirection")));
@property CandlestickchartExternalIndicators *externalIndicator __attribute__((swift_name("externalIndicator")));
@property CandlestickchartInternalIndicators *internalIndicator __attribute__((swift_name("internalIndicator")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChartStyle")))
@interface CandlestickchartChartStyle : CandlestickchartBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithTopPadding:(float)topPadding bottomPadding:(float)bottomPadding startPadding:(float)startPadding endPadding:(float)endPadding childPadding:(float)childPadding candleWidth:(float)candleWidth candleWickWidth:(float)candleWickWidth candleSpacing:(float)candleSpacing volWidth:(float)volWidth chartHeight:(float)chartHeight labelTextSize:(int64_t)labelTextSize yAxisSections:(int32_t)yAxisSections minZoom:(float)minZoom maxZoom:(float)maxZoom chartColor:(CandlestickchartChartColor *)chartColor maxTextWidth:(float)maxTextWidth chartBottomPadding:(float)chartBottomPadding xAxisTextRotationAngle:(float)xAxisTextRotationAngle chartSectionPadding:(float)chartSectionPadding showLivePriceChange:(BOOL)showLivePriceChange __attribute__((swift_name("init(topPadding:bottomPadding:startPadding:endPadding:childPadding:candleWidth:candleWickWidth:candleSpacing:volWidth:chartHeight:labelTextSize:yAxisSections:minZoom:maxZoom:chartColor:maxTextWidth:chartBottomPadding:xAxisTextRotationAngle:chartSectionPadding:showLivePriceChange:)"))) __attribute__((objc_designated_initializer));
- (CandlestickchartChartStyle *)doCopyTopPadding:(float)topPadding bottomPadding:(float)bottomPadding startPadding:(float)startPadding endPadding:(float)endPadding childPadding:(float)childPadding candleWidth:(float)candleWidth candleWickWidth:(float)candleWickWidth candleSpacing:(float)candleSpacing volWidth:(float)volWidth chartHeight:(float)chartHeight labelTextSize:(int64_t)labelTextSize yAxisSections:(int32_t)yAxisSections minZoom:(float)minZoom maxZoom:(float)maxZoom chartColor:(CandlestickchartChartColor *)chartColor maxTextWidth:(float)maxTextWidth chartBottomPadding:(float)chartBottomPadding xAxisTextRotationAngle:(float)xAxisTextRotationAngle chartSectionPadding:(float)chartSectionPadding showLivePriceChange:(BOOL)showLivePriceChange __attribute__((swift_name("doCopy(topPadding:bottomPadding:startPadding:endPadding:childPadding:candleWidth:candleWickWidth:candleSpacing:volWidth:chartHeight:labelTextSize:yAxisSections:minZoom:maxZoom:chartColor:maxTextWidth:chartBottomPadding:xAxisTextRotationAngle:chartSectionPadding:showLivePriceChange:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property float bottomPadding __attribute__((swift_name("bottomPadding")));
@property float candleSpacing __attribute__((swift_name("candleSpacing")));
@property float candleWickWidth __attribute__((swift_name("candleWickWidth")));
@property float candleWidth __attribute__((swift_name("candleWidth")));
@property (readonly) float chartBottomPadding __attribute__((swift_name("chartBottomPadding")));
@property CandlestickchartChartColor *chartColor __attribute__((swift_name("chartColor")));
@property float chartHeight __attribute__((swift_name("chartHeight")));
@property (readonly) float chartSectionPadding __attribute__((swift_name("chartSectionPadding")));
@property float childPadding __attribute__((swift_name("childPadding")));
@property float endPadding __attribute__((swift_name("endPadding")));
@property int64_t labelTextSize __attribute__((swift_name("labelTextSize")));
@property (readonly) float maxTextWidth __attribute__((swift_name("maxTextWidth")));
@property float maxZoom __attribute__((swift_name("maxZoom")));
@property float minZoom __attribute__((swift_name("minZoom")));
@property (readonly) BOOL showLivePriceChange __attribute__((swift_name("showLivePriceChange")));
@property float startPadding __attribute__((swift_name("startPadding")));
@property float topPadding __attribute__((swift_name("topPadding")));
@property float volWidth __attribute__((swift_name("volWidth")));
@property (readonly) float xAxisTextRotationAngle __attribute__((swift_name("xAxisTextRotationAngle")));
@property int32_t yAxisSections __attribute__((swift_name("yAxisSections")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExternalIndicators")))
@interface CandlestickchartExternalIndicators : CandlestickchartKotlinEnum<CandlestickchartExternalIndicators *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CandlestickchartExternalIndicators *rsi __attribute__((swift_name("rsi")));
@property (class, readonly) CandlestickchartExternalIndicators *kdj __attribute__((swift_name("kdj")));
@property (class, readonly) CandlestickchartExternalIndicators *vol __attribute__((swift_name("vol")));
@property (class, readonly) CandlestickchartExternalIndicators *none __attribute__((swift_name("none")));
+ (CandlestickchartKotlinArray<CandlestickchartExternalIndicators *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CandlestickchartExternalIndicators *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InternalIndicators")))
@interface CandlestickchartInternalIndicators : CandlestickchartKotlinEnum<CandlestickchartInternalIndicators *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CandlestickchartInternalIndicators *sma __attribute__((swift_name("sma")));
@property (class, readonly) CandlestickchartInternalIndicators *ema __attribute__((swift_name("ema")));
@property (class, readonly) CandlestickchartInternalIndicators *wma __attribute__((swift_name("wma")));
@property (class, readonly) CandlestickchartInternalIndicators *boll __attribute__((swift_name("boll")));
@property (class, readonly) CandlestickchartInternalIndicators *none __attribute__((swift_name("none")));
+ (CandlestickchartKotlinArray<CandlestickchartInternalIndicators *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CandlestickchartInternalIndicators *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MovingAverage")))
@interface CandlestickchartMovingAverage : CandlestickchartKotlinEnum<CandlestickchartMovingAverage *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CandlestickchartMovingAverage *sma __attribute__((swift_name("sma")));
@property (class, readonly) CandlestickchartMovingAverage *ema __attribute__((swift_name("ema")));
@property (class, readonly) CandlestickchartMovingAverage *wma __attribute__((swift_name("wma")));
+ (CandlestickchartKotlinArray<CandlestickchartMovingAverage *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CandlestickchartMovingAverage *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CandleChartKt")))
@interface CandlestickchartCandleChartKt : CandlestickchartBase
+ (CandlestickchartInternalIndicatorData *)normaliseVisibleCandlesMovingAverageListCandleBounds:(NSArray<id> *)listCandleBounds visibleRect:(id)visibleRect internalIndicatorData:(CandlestickchartInternalIndicatorData *)internalIndicatorData previousData:(int32_t)previousData __attribute__((swift_name("normaliseVisibleCandlesMovingAverage(listCandleBounds:visibleRect:internalIndicatorData:previousData:)")));
+ (NSString *)priceFormatValue:(double)value __attribute__((swift_name("priceFormat(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChartUtil_iosKt")))
@interface CandlestickchartChartUtil_iosKt : CandlestickchartBase
+ (id<CandlestickchartDateFormatter>)getDateFormatter __attribute__((swift_name("getDateFormatter()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilsKt")))
@interface CandlestickchartUtilsKt : CandlestickchartBase
+ (NSString *)formatTimeTimestamp:(int64_t)timestamp __attribute__((swift_name("formatTime(timestamp:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface CandlestickchartKotlinEnumCompanion : CandlestickchartBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CandlestickchartKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CandlestickchartKotlinArray<T> : CandlestickchartBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(CandlestickchartInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CandlestickchartKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol CandlestickchartKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
