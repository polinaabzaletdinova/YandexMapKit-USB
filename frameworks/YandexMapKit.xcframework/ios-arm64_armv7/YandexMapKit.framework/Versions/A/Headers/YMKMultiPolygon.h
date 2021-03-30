#import <YandexMapKit/YMKPolygon.h>

/**
 * An area consisting of multiple external polygons.
 */
@interface YMKMultiPolygon : NSObject

@property (nonatomic, readonly, nonnull) NSArray<YMKPolygon *> *polygons;


+ (nonnull YMKMultiPolygon *)multiPolygonWithPolygons:(nonnull NSArray<YMKPolygon *> *)polygons;


@end

