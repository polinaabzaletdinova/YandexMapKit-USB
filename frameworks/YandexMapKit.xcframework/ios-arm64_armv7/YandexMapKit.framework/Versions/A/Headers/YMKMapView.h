#import <YandexMapKit/YMKMapWindow.h>

#import <UIKit/UIKit.h>

@interface YMKMapView : UIView

@property (nonatomic, readonly) YMKMapWindow *mapWindow;
@property (nonatomic, readonly) BOOL vulkanEnabled;

- (void)setNoninteractive:(bool)is;
- (instancetype)initWithFrame:(CGRect)frame vulkanEnabled:(BOOL)vulkanEnabled;

@end
