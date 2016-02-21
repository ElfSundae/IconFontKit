## Summary

[![Pod Version](http://img.shields.io/cocoapods/v/IconFontsKit.svg)](http://cocoadocs.org/docsets/IconFontsKit)

**IconFontsKit** is inspired to [FontAwesomeKit](https://github.com/PrideChung/FontAwesomeKit).

[![Sample](https://raw.githubusercontent.com/ElfSundae/IconFontsKit/master/screenshots/sample.png)](https://raw.githubusercontent.com/ElfSundae/IconFontsKit/master/screenshots/sample.png)
[![Explorer](https://raw.githubusercontent.com/ElfSundae/IconFontsKit/master/screenshots/explorer.png)](https://raw.githubusercontent.com/ElfSundae/IconFontsKit/master/screenshots/explorer.png)

## Supported Icon Fonts

| Font | Version | Number of Icons | Font file size | License |
|---|---|---|---|---|
| [Font Awesome](http://fontawesome.io)| 4.5.0 | [605](http://fontawesome.io/icons) | 110 KB | [SIL OFL 1.1](http://fontawesome.io/license) |
| [GitHub Octicons](https://octicons.github.com)| 3.5.0 | [165](https://octicons.github.com) | 31 KB | [SIL OFL 1.1](https://github.com/github/octicons/blob/master/LICENSE.txt) |
| [Foundation Icon Fonts 3](http://zurb.com/playground/foundation-icon-fonts-3)| 3.0 | [283](http://zurb.com/playground/foundation-icon-fonts-3#allicons) | 57 KB | ? |
| [Ionicons](http://ionicons.com)| 2.0.1 | [733](http://ionicons.com) | 189 KB | [MIT](https://github.com/driftyco/ionicons/blob/master/LICENSE) |
| [Material Design Icons](https://materialdesignicons.com) | 1.4.57 | 1457 | 208 KB | [SIL OFL 1.1](https://github.com/Templarian/MaterialDesign/blob/master/license.txt) |

## Installation

`pod 'IconFontsKit'` to install all icon fonts.

***OR*** install certain of icon fonts like:

```ruby
pod 'IconFontsKit/FontAwesome'
pod 'IconFontsKit/Octicons'
pod 'IconFontsKit/FoundationIcons'
pod 'IconFontsKit/Ionicons'
pod 'IconFontsKit/MaterialDesignIcons'
```
## Usage

+ An icon can be created by three ways: **code** like `@"\uf179"`, **type** like `IFFAApple`, **identifier** like `@"fa-apple"`.

 The **code** and **type** way are ***recommended***.

 ```objc
 IFFontAwesome *faIcon = [IFFontAwesome iconWithCode:@"\uf17b" fontSize:20.0];
 IFIonicons *ionIcon = [IFFontAwesome iconWithType:IFIonWifi fontSize:20.0];
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
 UIImage *image = [IFFontAwesome imageWithType:IFOcticonArrowRight color:nil imageSize:CGSizeMake(30, 30)];
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

## License

IconFontsKit is available under the MIT license. See the [LICENSE](LICENSE) file for more info.

**NOTICE:** each icon font has it's own license agreement.
