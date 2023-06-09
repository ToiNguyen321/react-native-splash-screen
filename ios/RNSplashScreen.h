/**
 * SplashScreen
 * 启动屏
 * from：http://www.devio.org
 * Author:CrazyCodeBoy
 * GitHub:https://github.com/crazycodeboy
 * Email:crazycodeboy@gmail.com
 */
#import <React/RCTBridgeModule.h>
#import <React/RCTRootView.h>
#import <UIKit/UIKit.h>

@interface RNSplashScreen : NSObject<RCTBridgeModule>
+ (void)showSplashWithRootView:(RCTRootView *)rootView imageUrl:(NSString *) imageUrl;
+ (void)downloadSplashImg:(NSString *)url;
+ (void)show;
+ (void)hide;
@end
