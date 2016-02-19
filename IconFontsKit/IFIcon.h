//
//  IFIcon.h
//  IconFontsKit
//
//  Created by Elf Sundae on 16/2/17.
//  Copyright © 2016年 www.0x123.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef unichar IFIconType;

/*!
 * Abstract superclass for IconFontsKit, It should not be used directly. 
 * You can subclass `IFIcon` to provide new icon font support.
 */
@interface IFIcon : NSObject

///=============================================
/// @name Initialization
///=============================================

/**
 * Creates an IFIcon instance for the given `type` and `fontSize`.
 *
 * @param type IFIconType
 * @param fontSize The desired size (in points) of the icon font that will be used for the icon. This value must be greater than 0.0.
 */
+ (instancetype)iconWithType:(IFIconType)type fontSize:(CGFloat)fontSize;

/**
 * Creates an IFIcon instance for the given `code` and `fontSize`.
 * 
 * @param code A string represents a character code, like @"\uf000".
 * @param fontSize The desired size (in points) of the icon font that will be used for the icon. This value must be greater than 0.0.
 */
+ (instancetype)iconWithCode:(NSString *)code fontSize:(CGFloat)fontSize;

/**
 * Creates an IFIcon instance for the given `identifier` and `fontSize`.
 *
 * FontAwesome icons identifiers should be like "fa-{icon}"
 *
 * @param identifier A string that represents the icon, e.g. @"fa-mobile".
 * @param fontSize The desired size (in points) of the icon font that will be used for the icon. This value must be greater than 0.0.
 *
 * @return Returns an IFIcon instance if the `identifier` is existed in `allIcons`, returns nil otherwise.
 */
+ (instancetype)iconWithIdentifier:(NSString *)identifier fontSize:(CGFloat)fontSize;

/**
 * Creates an IFIcon instance for the given `code` and `fontSize`.
 *
 * @param code A string represents a character code, like @"\uf000".
 * @param fontSize The desired size (in points) of the icon font that will be used for the icon. This value must be greater than 0.0.
 */
- (instancetype)initWithCode:(NSString *)code fontSize:(CGFloat)fontSize;

///=============================================
/// @name Attributes Accessor
///=============================================

/**
 * The font size for the icon.
 */
@property (nonatomic) CGFloat fontSize;

/**
 * The foreground color for the icon.
 * If you do not specify this property, the icon will be rendered in black.
 */
@property (nonatomic) UIColor *color;

- (NSString *)code;
- (IFIconType)type;
- (NSString *)identifier;
- (NSAttributedString *)attributedString;
- (UIFont *)font;

- (NSDictionary *)attributes;
- (id)attribute:(NSString *)attributeName;
- (void)setAttributes:(NSDictionary *)attributes;
- (void)addAttribute:(NSString *)name value:(id)value;
- (void)addAttributes:(NSDictionary *)attributes;
- (void)removeAttribute:(NSString *)name;

///=============================================
/// @name Image Drawing
///=============================================

/**
 * The drawing offset of the icon in the image. If you do not specify this property, the icon is centered horizontally and vertically inside the image.
 */
@property (nonatomic) UIOffset drawingPositionAdjustment;

/**
 * The background color of the image while drawing. If you do not specify this property, no background color is drawn.
 */
@property (nonatomic, strong) UIColor *drawingBackgroundColor;

/**
 * Indicates whether the font size should be reduced in order to fit the image's bounding rectangle while drawing.
 * Default is YES.
 */
@property (nonatomic) BOOL adjustsFontSizeWhileDrawing;

/**
 * Draws the icon on an image. 
 * The icon will be centered horizontally and vertically by default. 
 * You can set the `drawingPositionAdjustment` property to adjust drawing offset.
 */
- (UIImage *)imageWithSize:(CGSize)imageSize;

///=============================================
/// @name Helper
///=============================================

/**
 * Returns a UIFont instance for this icon font.
 */
+ (UIFont *)fontWithSize:(CGFloat)fontSize;

@end

@interface IFIcon (Subclassing)

/**
 * Returns the file URL for this icon font. It used for registering font.
 */
+ (NSURL *)fontFileURL;

/**
 * Returns the font name for this icon font.
 *
 * If you did not subclass this method or returns `nil` in this method, the `fontName` will be the filename of the `fontFileURL`.
 */
+ (NSString *)fontName;

/**
 * Returns all icons available for this icon font.
 *
 * @return A dictionary of all icons. the keys are icon identifiers, like "fa-mobile", and the corresponding value for a key is the character code.
 */
+ (NSDictionary *)allIcons;

@end

@interface UIImage (IFIconAdditions)

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

@end

FOUNDATION_EXTERN BOOL IFRegisterFontWithURL(NSURL *fontFileURL, NSError **error);
FOUNDATION_EXTERN NSString *IFIconCodeForType(IFIconType type);
FOUNDATION_EXTERN IFIconType IFIconTypeForCode(NSString *code);
