## Summary

[![Pod Version](http://img.shields.io/cocoapods/v/IconFontsKit.svg)](http://cocoadocs.org/docsets/IconFontsKit)

**IconFontsKit** is inspired to [FontAwesomeKit](https://github.com/PrideChung/FontAwesomeKit).

[![Sample](https://raw.githubusercontent.com/ElfSundae/IconFontsKit/master/screenshots/sample.png?3)](https://raw.githubusercontent.com/ElfSundae/IconFontsKit/master/screenshots/sample.png)
[![Explorer](https://raw.githubusercontent.com/ElfSundae/IconFontsKit/master/screenshots/explorer.png?3)](https://raw.githubusercontent.com/ElfSundae/IconFontsKit/master/screenshots/explorer.png)
[![Selector](https://raw.githubusercontent.com/ElfSundae/IconFontsKit/master/screenshots/selector.png?3)](https://raw.githubusercontent.com/ElfSundae/IconFontsKit/master/screenshots/selector.png)

## Supported Icon Fonts

| Font | Version | Icons Number | Font Size | License | Description |
|---|---|---|---|---|---|
| [Font Awesome](http://fontawesome.io)| 4.5.0 | [605](http://fontawesome.io/icons) | 110 KB | [SIL OFL 1.1](http://fontawesome.io/license) ||
| [Octicons](https://octicons.github.com)| 3.5.0 | [165](https://octicons.github.com) | 31 KB | [SIL OFL 1.1](https://github.com/github/octicons/blob/master/LICENSE.txt) | GitHub's icons |
| [Foundation Icon Fonts 3](http://zurb.com/playground/foundation-icon-fonts-3)| 3.0 | [283](http://zurb.com/playground/foundation-icon-fonts-3#allicons) | 57 KB | ? ||
| [Ionicons](http://ionicons.com)| 2.0.1 | [733](http://ionicons.com) | 189 KB | [MIT](https://github.com/driftyco/ionicons/blob/master/LICENSE) | The premium icon font for Ionic Framework. |
| [Material Design Icons](https://materialdesignicons.com) | 1.4.57 | [1457](https://materialdesignicons.com) | 208 KB | [SIL OFL 1.1](https://github.com/Templarian/MaterialDesign/blob/master/license.txt) ||
| [Elusive Icons](http://elusiveicons.com) | 2.0.0 | [304](http://elusiveicons.com/icons) | 80 KB | [SIL OFL 1.1](http://elusiveicons.com/license) ||
| [Material Icons](https://google.github.io/material-design-icons/) | 2.2.0 | [932](https://design.google.com/icons/) | 128 KB | [CC-BY 4.0](https://github.com/google/material-design-icons/blob/master/LICENSE) | Made by Google for Material design. |
| [ZocialButtons](http://zocial.smcllns.com) | 1.2.0 | [102](http://zocial.smcllns.com/sample.html) | 26 KB | [MIT](https://github.com/smcllns/css-social-buttons#license) | Social buttons |
| [Typicons](http://www.typicons.com) | 2.0.7 | [336](http://www.typicons.com) | 100 KB | [SIL OFL 1.1](https://github.com/stephenhutchings/typicons.font/blob/master/src/font/LICENCE.md) ||
| [Open Iconic](https://useiconic.com/open/) | 1.1.1 | [223](https://useiconic.com/open/) | 28 KB | [SIL OFL 1.1](https://github.com/iconic/open-iconic/blob/master/FONT-LICENSE) | The open source sibling of [Iconic](https://useiconic.com). |
| [Metrize Icons](http://www.alessioatzeni.com/metrize-icons) | 1.0 | 300 | 63 KB | [Free to use](http://www.alessioatzeni.com/metrize-icons) | Metro-Style Icons |
| [Meteocons](http://www.alessioatzeni.com/meteocons) | 1.0 | 47 | 18 KB | [Free to use](http://www.alessioatzeni.com/meteocons) | A set of weather icons |
| [MFG Labs iconset](http://mfglabs.github.io/mfglabs-iconset) | 1.0 | [186](http://mfglabs.github.io/mfglabs-iconset/) | 56 KB | [SIL OFL 1.1](https://github.com/MfgLabs/mfglabs-iconset/blob/master/licenses.txt) ||
| [Linearicons Free](https://linearicons.com/free) | v1.0.0 | [170](https://linearicons.com/free) | 56 KB | [CC BY-SA 4.0](https://creativecommons.org/licenses/by-sa/4.0/) | Linearicons Free Version |

## Installation

`pod 'IconFontsKit'` to install all icon fonts.

***OR*** install certain of icon fonts like:

```ruby
pod 'IconFontsKit/FontAwesome'
pod 'IconFontsKit/Octicons'
pod 'IconFontsKit/FoundationIcons'
pod 'IconFontsKit/Ionicons'
pod 'IconFontsKit/MaterialDesignIcons'
pod 'IconFontsKit/ElusiveIcons'
pod 'IconFontsKit/MaterialIcons'
pod 'IconFontsKit/ZocialButtons'
pod 'IconFontsKit/Typicons'
pod 'IconFontsKit/OpenIconic'
pod 'IconFontsKit/MetrizeIcons'
pod 'IconFontsKit/Meteocons'
pod 'IconFontsKit/MFGLabsIconset'
pod 'IconFontsKit/LineariconsFree'
```
## Usage

+ An icon can be created by three ways: **code** like `@"\uf179"`, **type** like `IFFAApple`, **identifier** like `@"fa-apple"`.

 The **code** and **type** way are ***recommended***.

 ```objc
 IFFontAwesome *faIcon = [IFFontAwesome iconWithCode:@"\uf17b" fontSize:20.0];
 IFIonicons *ionIcon = [IFFontAwesome iconWithType:IFIIWifi fontSize:20.0];
 IFOcticons *octIcon = [IFOcticons iconWithIdentifier:@"octicon-gift" fontSize:20.0];
 ```

+ IFIcon are backend with `NSAttributedString`, and there are several attributes accessors methods, like:

 ```objc
 - (NSDictionary *)attributes;
 - (void)addAttribute:(NSString *)name value:(id)value;
 - (void)removeAttribute:(NSString *)name;
 - (void)setAttributes:(NSDictionary *)attributes;
 ```

+ You can get an icon image using `-[IFxxxIcon imageWithSize:]`, or `+[IFxxxIcon imageWithType:color: xxx]`.

 ```objc
 UIImage *image = [IFFontAwesome imageWithType:IFOIArrowRight color:nil imageSize:CGSizeMake(30, 30)];
 ```

+ Use `+[IFxxxIcon fontWithSize:]` to get the icon font instance.

+ To stack multiple icons to one image, use `+[UIImage if_imageWithStackedIcons:(NSArray <IFIcon *>*)icons imageSize:(CGSize)imageSize]`.
These icons will be centered horizontally and vertically by default.
You can set the `drawingPositionAdjustment` property to adjust drawing offset for each icon.

 The first icon will be drawn on the bottom and the last icon will be drawn on the top.

 ```objc
 IFFontAwesome *container = [IFFontAwesome iconWithType:IFFASquareO fontSize:100.0 color:[UIColor colorWithWhite:0.88 alpha:1.0]];
 container.drawingPositionAdjustment = UIOffsetMake(0, 4);
 IFFontAwesome *forbidden = [IFFontAwesome iconWithType:IFFABan fontSize:70.0 color:[[UIColor redColor] colorWithAlphaComponent:0.6]];
 IFFontAwesome *usbIcon = [IFFontAwesome iconWithType:IFFAUsb fontSize:50];

 UIImage *stackedImage = [UIImage if_imageWithStackedIcons:@[container, usbIcon, forbidden] imageSize:CGSizeMake(100, 100)];
 ```

## Using custom Icon Fonts

+ To use your own icon fonts, just subclass `IFIcon` and implement `+ (NSURL *)fontFileURL` method.
+ If the font name is not the same as the filename of `fontFileURL`, you need to implement `+ (NSString *)fontName` method as well.
+ If you want to use **identifier** way, such as `+iconWithIdentifier:fontSize:` method, to create icons, you need to implement `+ (NSDictionary *)allIcons` method as well.
+ Icon types of your custom fonts are the icon's unicode hexadecimal value. e.g. icon code `\uf100`'s type is `0xf100`.
+ _FYI_: You can generate icon fonts using [Fontello](http://fontello.com), [Fontastic](http://fontastic.me), [IcoMoon app](https://icomoon.io/app) or other awesome services.
+ See "IconFontsKitExample/MyFontIcons" for demo.

 ```objc
 // MyFontIcons.h

 #import <IconFontsKit/IFIcon.h>

 typedef NS_ENUM(IFIconType, MyFontIconsType) {
     MFFacebookSquared   = 0xa100,
     MFChat              = 0xa101,
     MFEmoHappy          = 0xa102,
     MFThumbsUp          = 0xa103,
     MFThumbsUpAlt       = 0xa104,
     MFLinkExt           = 0xa105,
     MFVolumeUp          = 0xa106,
     MFCogAlt            = 0xa107,
     MFCode              = 0xa108,
 };

 @interface MyFontIcons : IFIcon
 @end
 ```

 ```objc
 // MyFontIcons.m

 #import "MyFontIcons.h"

 @implementation MyFontIcons

 + (NSURL *)fontFileURL {
     return [[[NSBundle mainBundle] resourceURL] URLByAppendingPathComponent:@"myfonticons.ttf"];
 }

 // Optional becase the font name is the same as the filename of font.
 //+ (NSString *)fontName {
 //    return @"myfonticons";
 //}

 + (NSDictionary *)allIcons {
     return @{
              @"facebook-squared":  @"\ua100",
              @"chat":              @"\ua101",
              @"emo-happy":         @"\ua102",
              @"thumbs-up":         @"\ua103",
              @"thumbs-up-alt":     @"\ua104",
              @"link-ext":          @"\ua105",
              @"volume-up":         @"\ua106",
              @"cog-alt":           @"\ua107",
              @"code":              @"\ua108",
              };
 }
 @end
 ```

## License

IconFontsKit is available under the MIT license. See the [LICENSE](LICENSE) file for more info.

**NOTICE:** each icon font has it's own license agreement.
