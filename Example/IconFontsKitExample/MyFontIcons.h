#import <IconFontsKit/IFIcon.h>

/// MyFontIcons icon types.
typedef NS_ENUM(IFIconType, MyFontIconsType) {
    /// Identifier: "icon-camera"
    MFCamera                              = 0xf100,
    /// Identifier: "icon-thumbs-up"
    MFThumbsUp                            = 0xf101,
    /// Identifier: "icon-thumbs-up-alt"
    MFThumbsUpAlt                         = 0xf102,
    /// Identifier: "icon-smiley"
    MFSmiley                              = 0xf103,
    /// Identifier: "icon-verified"
    MFVerified                            = 0xf104,
    /// Identifier: "icon-logo-gist"
    MFLogoGist                            = 0xf105,
    /// Identifier: "icon-logo-github"
    MFLogoGithub                          = 0xf106,
};

/*!
 * Demonstrator for using custom icon fonts. https://github.com/ElfSundae/IconFontsKit
 */
@interface MyFontIcons : IFIcon
@end
