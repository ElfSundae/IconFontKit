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


@property (nonatomic) CGFloat fontSize;

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
 */
+ (NSString *)fontName;

/**
 * Returns all icons available for this icon font.
 *
 * @return A dictionary of all icons. the keys are icon identifiers, like "fa-mobile", and the corresponding value for a key is the character code.
 */
+ (NSDictionary *)allIcons;

@end

FOUNDATION_EXTERN BOOL IFRegisterFontWithURL(NSURL *fontFileURL, NSError **error);
FOUNDATION_EXTERN NSString *IFIconCodeForType(IFIconType type);
FOUNDATION_EXTERN IFIconType IFIconTypeForCode(NSString *code);
