# IconFontKit

[![Pod Version](http://img.shields.io/cocoapods/v/IconFontKit.svg)](http://cocoadocs.org/docsets/IconFontKit)

IconFontKit provides a convenient toolkit to use icon fonts for iOS development.

<!-- MarkdownTOC -->

- [Installation](#installation)
- [Usage](#usage)
- [Using Custom Icon Fonts](#using-custom-icon-fonts)
- [Built-in Icon Packs](#built-in-icon-packs)
- [Credits](#credits)
- [License](#license)

<!-- /MarkdownTOC -->

[![Sample](https://raw.githubusercontent.com/ElfSundae/IconFontKit/master/screenshots/sample.png?3)](https://raw.githubusercontent.com/ElfSundae/IconFontKit/master/screenshots/sample.png)
[![Explorer](https://raw.githubusercontent.com/ElfSundae/IconFontKit/master/screenshots/explorer.png?3)](https://raw.githubusercontent.com/ElfSundae/IconFontKit/master/screenshots/explorer.png)
[![Selector](https://raw.githubusercontent.com/ElfSundae/IconFontKit/master/screenshots/selector.png?3)](https://raw.githubusercontent.com/ElfSundae/IconFontKit/master/screenshots/selector.png)

## Installation

- `pod 'IconFontKit/Core'` to install only the `IFIcon` abstract class.
- `pod 'IconFontKit'` to install [all icon packs](#built-in-icon-packs).
- `pod 'IconFontKit/{Font Identifier}'` to install certain of icon packs, e.g. `pod 'IconFontKit/FontAwesome'`.

## Usage

- An icon can be created by three ways: **code** like `@"\uf179"`, **type** like `IFFAApple`, **identifier** like `@"fa-apple"`.  
  The **code** and **type** way are ***recommended***.

    ```objc
    IFFontAwesome *faIcon = [IFFontAwesome iconWithCode:@"\uf17b" fontSize:20.0];
    IFIonicons *ionIcon = [IFFontAwesome iconWithType:IFIIWifi fontSize:20.0];
    IFOcticons *octIcon = [IFOcticons iconWithIdentifier:@"octicon-gift" fontSize:20.0];
    ```

- `IFIcon` are backend with `NSAttributedString`, and there are several methods for accessing attributes, like:

    ```objc
    - (NSDictionary *)attributes;
    - (void)addAttribute:(NSString *)name value:(id)value;
    - (void)removeAttribute:(NSString *)name;
    - (void)setAttributes:(NSDictionary *)attributes;
    ```

- You may create an icon image using `-[IFxxxIcon imageWithSize:]` or `+[IFxxxIcon imageWithType:color:...]` etc.

    ```objc
    UIImage *image = [IFFontAwesome imageWithType:IFOIArrowRight color:nil imageSize:CGSizeMake(30, 30)];
    ```

- Use `+[IFxxxIcon fontWithSize:]` to get an icon font instance of `UIFont` type.

- `[UIImage if_imageWithStackedIcons:imageSize:]` can stack multi-icons to one image.

    ```objc
    /**
     * Draws the IFIcons on an image.
     * These icons will be centered horizontally and vertically by default.
     * You can set the `drawingPositionAdjustment` property to adjust drawing offset for each icon.
     *
     * @param icons The icons to be drawn. The first icon will be drawn on the bottom and the last icon will be drawn on the top.
     * @param imageSize Height and width for the generated image.
     *
     * @return An image with the icons.
     */
    + (UIImage *)if_imageWithStackedIcons:(NSArray <IFIcon *>*)icons imageSize:(CGSize)imageSize;
    ```

    For example:

    ```objc
    IFFontAwesome *container = [IFFontAwesome iconWithType:IFFASquareO fontSize:100.0 color:[UIColor colorWithWhite:0.88 alpha:1.0]];
    container.drawingPositionAdjustment = UIOffsetMake(0, 4);
    IFFontAwesome *forbidden = [IFFontAwesome iconWithType:IFFABan fontSize:70.0 color:[[UIColor redColor] colorWithAlphaComponent:0.6]];
    IFFontAwesome *usbIcon = [IFFontAwesome iconWithType:IFFAUsb fontSize:50];
    
    UIImage *stackedImage = [UIImage if_imageWithStackedIcons:@[container, usbIcon, forbidden] imageSize:CGSizeMake(100, 100)];
    ```

## Using Custom Icon Fonts

- To use your own icon fonts, just subclass `IFIcon` and implement `+ (NSURL *)fontFileURL` method.
- If the font name is not the same as the filename of `fontFileURL`, you need to implement `+ (NSString *)fontName` method as well.
- If you want to use **identifier** way to create icons, you need to implement `+ (NSDictionary *)allIcons` method as well.
- Icon types of your custom fonts are the icon's unicode hexadecimal value. e.g. icon code `\uf100`'s type is `0xf100`.
- _FYI_: You can generate icon fonts using [IcoMoon app](https://icomoon.io/app), [Fontello](http://fontello.com), [Fontastic](http://fontastic.me) or other awesome services.
- See "IconFontKitExample/MyFontIcons" for demo.

    ```objc
    // MyFontIcons.h
   
    #import <IconFontKit/IFIcon.h>
   
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

## Built-in Icon Packs

| Font Identifier | Version | Icons Number | Font Size | License | Description |
|---|---|---|---|---|---|
| [FontAwesome](http://fontawesome.io)| 4.7.0 | [675](http://fontawesome.io/icons) | 135 KB | [SIL OFL 1.1](http://fontawesome.io/license) | Font Awesome |
| [Octicons](https://octicons.github.com)| 4.3.0 | [172](https://octicons.github.com) | 45 KB | [SIL OFL 1.1](https://github.com/github/octicons/blob/master/LICENSE.txt) | GitHub's icons |
| [FoundationIcons](http://zurb.com/playground/foundation-icon-fonts-3)| 3.0 | [283](http://zurb.com/playground/foundation-icon-fonts-3#allicons) | 57 KB | ? | Foundation Icon Fonts 3 |
| [Ionicons](http://ionicons.com)| 2.0.1 | [733](http://ionicons.com) | 189 KB | [MIT](https://github.com/driftyco/ionicons/blob/master/LICENSE) | The premium icon font for Ionic Framework. |
| [MaterialDesignIcons](https://materialdesignicons.com) | 1.6.50 | [1650](https://materialdesignicons.com) | 236 KB | [SIL OFL 1.1](https://github.com/Templarian/MaterialDesign/blob/master/license.txt) | Material Design Icons |
| [ElusiveIcons](http://elusiveicons.com) | 2.0.0 | [304](http://elusiveicons.com/icons) | 80 KB | [SIL OFL 1.1](http://elusiveicons.com/license) | Elusive Icons |
| [MaterialIcons](https://google.github.io/material-design-icons/) | 2.2.3 | [932](https://design.google.com/icons/) | 128 KB | [CC-BY 4.0](https://github.com/google/material-design-icons/blob/master/LICENSE) | Made by Google for Material design. |
| [ZocialButtons](http://zocial.smcllns.com) | 1.2.0 | [102](http://zocial.smcllns.com/sample.html) | 26 KB | [MIT](https://github.com/smcllns/css-social-buttons#license) | Social buttons |
| [Typicons](http://www.typicons.com) | 2.0.7 | [336](http://www.typicons.com) | 100 KB | [SIL OFL 1.1](https://github.com/stephenhutchings/typicons.font/blob/master/src/font/LICENCE.md) ||
| [OpenIconic](https://useiconic.com/open/) | 1.1.1 | [223](https://useiconic.com/open/) | 28 KB | [SIL OFL 1.1](https://github.com/iconic/open-iconic/blob/master/FONT-LICENSE) | The open source sibling of [Iconic](https://useiconic.com). |
| [MetrizeIcons](http://www.alessioatzeni.com/metrize-icons) | 1.0 | 300 | 63 KB | [Free to use](http://www.alessioatzeni.com/metrize-icons) | Metro-Style Icons |
| [Meteocons](http://www.alessioatzeni.com/meteocons) | 1.0 | 47 | 18 KB | [Free to use](http://www.alessioatzeni.com/meteocons) | A set of weather icons |
| [MFGLabsIconset](http://mfglabs.github.io/mfglabs-iconset) | 1.0 | [186](http://mfglabs.github.io/mfglabs-iconset/) | 56 KB | [SIL OFL 1.1](https://github.com/MfgLabs/mfglabs-iconset/blob/master/licenses.txt) | MFG Labs iconset |
| [LineariconsFree](https://linearicons.com/free) | 1.0.0 | [170](https://linearicons.com/free) | 56 KB | [CC BY-SA 4.0](https://creativecommons.org/licenses/by-sa/4.0/) | Linearicons Free Version |
| [IcoMoonFree](https://icomoon.io/#preview-free) | 1.0.0 | [491](https://icomoon.io/#preview-free) | 95 KB | [CC BY 4.0 or GPL](https://github.com/Keyamoon/IcoMoon-Free/blob/master/License.txt) | IcoMoon Free Pack |
| [HawconsFilled](http://hawcons.com) | 1.0 | [517](http://hawcons.com/preview/) | 107 KB | [Free to use](http://hawcons.com/faq/) | Hawcons filled style, includes icons of Documents, Sports, Weather, Emoji, Gestures, Filetypes, etc. |
| [HawconsStroke](http://hawcons.com) | 1.0 | [518](http://hawcons.com/preview/) | 138 KB | [Free to use](http://hawcons.com/faq/) | Hawcons stroke style, includes icons of Documents, Sports, Weather, Emoji, Gestures, Filetypes, etc. |
| [Dashicons](https://developer.wordpress.org/resource/dashicons/) | 3.8 | [234](https://developer.wordpress.org/resource/dashicons/) | 42 KB | [GPLv2](https://github.com/WordPress/dashicons) | Dashicons is the official icon font of the WordPress admin. |
| [Linea](http://www.linea.io) | 1.0 | [716](http://www.linea.io) | 125 KB | [CCBY](http://creativecommons.org/licenses/by/4.0/) | A free outline iconset designed by Dario Ferrando. |
| [Entypo](http://www.entypo.com) | 1.0 | [411](http://www.entypo.com) | 76 KB | [CC BY-SA 4.0](http://www.entypo.com/faq.php) | Entypo+ is the third version of a free suite of premium quality pictograms. |
| [ThemifyIcons](http://themify.me/themify-icons) | 1.0 | [352](http://themify.me/themify-icons) | 79 KB | [Free to use](http://themify.me/themify-icons) | Handcrafted icons that draw inspiration from Apple iOS 7. |
| [StreamlineFree](http://streamlineicons.com/free-icons.html) | v2 | [100](http://www.streamlineicons.com/free-icons.html) | 38 KB | [License](http://streamlineicons.com/license.html) | Streamline Free Pack, free iOS 8 vector icons |
| [Stroke7Icons](http://themes-pixeden.com/font-demos/7-stroke/index.html) | 1.2 | [202](http://themes-pixeden.com/font-demos/7-stroke/index.html) | 58 KB | Free to use | A series of iOS 7 inspired thin stroke icons from [Pixeden](http://www.pixeden.com) |
| [Devicons](https://github.com/vorillaz/devicons) | 1.8.0 | [171](http://vorillaz.github.io/devicons/#/cheat) | 147 KB | MIT | An iconic font for developers. |
| [LigatureSymbols](http://kudakurage.com/ligature_symbols/) | 2.11 | [239](http://kudakurage.com/ligature_symbols/) | 84 KB | SIL OFL 1.1 | Ligature Symbols by Kazuyuki Motoyama |
| [Dripicons](http://demo.amitjakhu.com/dripicons/) | 1.0 | [95](http://demo.amitjakhu.com/dripicons/) | 21 KB | Free to use | A completely free, vector line-icon font by [Amit Jakhu](http://amitjakhu.com). |
| [OpenWebIcons](http://pfefferle.github.io/openwebicons) | 1.4.0 | [97](http://pfefferle.github.io/openwebicons/icons/) | 40 KB | [SIL OFL 1.1](https://github.com/pfefferle/openwebicons/blob/master/License.txt) | OpenWeb Icons |
| [Genericons](http://genericons.com) | 3.4.1 | [147](http://genericons.com) | 22 KB | GPLv2 | Designed to be clean and simple keeping with a generic aesthetic. |
| [MapIcons](http://map-icons.com) | 3.0.0 | [175](http://map-icons.com/#icons) | 48 KB | [SIL OFL 1.1](https://github.com/scottdejonge/map-icons#license) | An icon font for use with Google Maps. |
| [WeatherIcons](http://erikflowers.github.io/weather-icons) | 2.0.10 | [219](http://erikflowers.github.io/weather-icons) | 100 KB | [SIL OFL 1.1](https://github.com/erikflowers/weather-icons#licensing) | weather, maritime, and meteorological based icons |
| [EvilIcons](http://evil-icons.io) | 1.8.0  | [70](http://evil-icons.io) | 15 KB | [MIT](https://github.com/outpunk/evil-icons/blob/master/LICENSE.txt) | Simple and clean SVG icon pack with the code to support Rails, Sprockets, Node.js, Gulp, Grunt and CDN. |

## Credits

IconFontKit is inspired to [FontAwesomeKit](https://github.com/PrideChung/FontAwesomeKit).

## License

IconFontKit is available under the MIT license. See the [LICENSE](LICENSE) file for more info.

**NOTICE:** each icon font has it's own license agreement.
