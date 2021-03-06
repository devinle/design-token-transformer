
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Mon, 22 Feb 2021 20:17:53 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
LightThemeBrandPrimary,
LightThemeBrandSecondary,
LightThemeBrandAccent,
LightThemeBrandMuted,
LightThemeUiPrimary,
LightThemeUiSecondary,
LightThemeUiTertiary,
LightThemeUiQuaternary,
LightThemeUiDisabled,
LightThemeUiError,
LightThemeUiSuccess,
LightThemeBackground1,
LightThemeBackground2,
LightThemeTextPrimary,
LightThemeTextSecondary,
LightThemeTextDisabled,
LightThemeTextInverse,
LightThemeTextError,
LightThemeTextSuccess,
DarkThemeBrandPrimary,
DarkThemeBrandSecondary,
DarkThemeBrandAccent,
DarkThemeBrandMuted,
DarkThemeUiPrimary,
DarkThemeUiSecondary,
DarkThemeUiTertiary,
DarkThemeUiQuaternary,
DarkThemeUiDisabled,
DarkThemeUiError,
DarkThemeUiSuccess,
DarkThemeBackground1,
DarkThemeBackground2,
DarkThemeTextPrimary,
DarkThemeTextSecondary,
DarkThemeTextDisabled,
DarkThemeTextInverse,
DarkThemeTextError,
DarkThemeTextSuccess
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
