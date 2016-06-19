#import "IFIcon.h"

/**
 * EvilIcons icon types.
 */
typedef NS_ENUM(IFIconType, IFEvilIconsType) {

    /// Identifier: "ei-archive"
    IFEvilArchive                             = 0xe900,

    /// Identifier: "ei-arrow-down"
    IFEvilArrowDown                           = 0xe901,

    /// Identifier: "ei-arrow-left"
    IFEvilArrowLeft                           = 0xe902,

    /// Identifier: "ei-arrow-right"
    IFEvilArrowRight                          = 0xe903,

    /// Identifier: "ei-arrow-up"
    IFEvilArrowUp                             = 0xe904,

    /// Identifier: "ei-bell"
    IFEvilBell                                = 0xe905,

    /// Identifier: "ei-calendar"
    IFEvilCalendar                            = 0xe906,

    /// Identifier: "ei-camera"
    IFEvilCamera                              = 0xe907,

    /// Identifier: "ei-cart"
    IFEvilCart                                = 0xe908,

    /// Identifier: "ei-chart"
    IFEvilChart                               = 0xe909,

    /// Identifier: "ei-check"
    IFEvilCheck                               = 0xe90a,

    /// Identifier: "ei-chevron-down"
    IFEvilChevronDown                         = 0xe90b,

    /// Identifier: "ei-chevron-left"
    IFEvilChevronLeft                         = 0xe90c,

    /// Identifier: "ei-chevron-right"
    IFEvilChevronRight                        = 0xe90d,

    /// Identifier: "ei-chevron-up"
    IFEvilChevronUp                           = 0xe90e,

    /// Identifier: "ei-clock"
    IFEvilClock                               = 0xe90f,

    /// Identifier: "ei-close-o"
    IFEvilCloseO                              = 0xe910,

    /// Identifier: "ei-close"
    IFEvilClose                               = 0xe911,

    /// Identifier: "ei-comment"
    IFEvilComment                             = 0xe912,

    /// Identifier: "ei-credit-card"
    IFEvilCreditCard                          = 0xe913,

    /// Identifier: "ei-envelope"
    IFEvilEnvelope                            = 0xe914,

    /// Identifier: "ei-exclamation"
    IFEvilExclamation                         = 0xe915,

    /// Identifier: "ei-external-link"
    IFEvilExternalLink                        = 0xe916,

    /// Identifier: "ei-eye"
    IFEvilEye                                 = 0xe917,

    /// Identifier: "ei-gear"
    IFEvilGear                                = 0xe918,

    /// Identifier: "ei-heart"
    IFEvilHeart                               = 0xe919,

    /// Identifier: "ei-image"
    IFEvilImage                               = 0xe91a,

    /// Identifier: "ei-like"
    IFEvilLike                                = 0xe91b,

    /// Identifier: "ei-link"
    IFEvilLink                                = 0xe91c,

    /// Identifier: "ei-location"
    IFEvilLocation                            = 0xe91d,

    /// Identifier: "ei-lock"
    IFEvilLock                                = 0xe91e,

    /// Identifier: "ei-minus"
    IFEvilMinus                               = 0xe91f,

    /// Identifier: "ei-navicon"
    IFEvilNavicon                             = 0xe920,

    /// Identifier: "ei-paperclip"
    IFEvilPaperclip                           = 0xe921,

    /// Identifier: "ei-pencil"
    IFEvilPencil                              = 0xe922,

    /// Identifier: "ei-play"
    IFEvilPlay                                = 0xe923,

    /// Identifier: "ei-plus"
    IFEvilPlus                                = 0xe924,

    /// Identifier: "ei-pointer"
    IFEvilPointer                             = 0xe925,

    /// Identifier: "ei-question"
    IFEvilQuestion                            = 0xe926,

    /// Identifier: "ei-redo"
    IFEvilRedo                                = 0xe927,

    /// Identifier: "ei-refresh"
    IFEvilRefresh                             = 0xe928,

    /// Identifier: "ei-retweet"
    IFEvilRetweet                             = 0xe929,

    /// Identifier: "ei-sc-facebook"
    IFEvilScFacebook                          = 0xe92a,

    /// Identifier: "ei-sc-github"
    IFEvilScGithub                            = 0xe92b,

    /// Identifier: "ei-sc-google-plus"
    IFEvilScGooglePlus                        = 0xe92c,

    /// Identifier: "ei-sc-instagram"
    IFEvilScInstagram                         = 0xe92d,

    /// Identifier: "ei-sc-linkedin"
    IFEvilScLinkedin                          = 0xe92e,

    /// Identifier: "ei-sc-odnoklassniki"
    IFEvilScOdnoklassniki                     = 0xe92f,

    /// Identifier: "ei-sc-pinterest"
    IFEvilScPinterest                         = 0xe930,

    /// Identifier: "ei-sc-skype"
    IFEvilScSkype                             = 0xe931,

    /// Identifier: "ei-sc-soundcloud"
    IFEvilScSoundcloud                        = 0xe932,

    /// Identifier: "ei-sc-telegram"
    IFEvilScTelegram                          = 0xe933,

    /// Identifier: "ei-sc-tumblr"
    IFEvilScTumblr                            = 0xe934,

    /// Identifier: "ei-sc-twitter"
    IFEvilScTwitter                           = 0xe935,

    /// Identifier: "ei-sc-vimeo"
    IFEvilScVimeo                             = 0xe936,

    /// Identifier: "ei-sc-vk"
    IFEvilScVk                                = 0xe937,

    /// Identifier: "ei-sc-youtube"
    IFEvilScYoutube                           = 0xe938,

    /// Identifier: "ei-search"
    IFEvilSearch                              = 0xe939,

    /// Identifier: "ei-share-apple"
    IFEvilShareApple                          = 0xe93a,

    /// Identifier: "ei-share-google"
    IFEvilShareGoogle                         = 0xe93b,

    /// Identifier: "ei-spinner-2"
    IFEvilSpinner2                            = 0xe93c,

    /// Identifier: "ei-spinner-3"
    IFEvilSpinner3                            = 0xe948,

    /// Identifier: "ei-spinner"
    IFEvilSpinner                             = 0xe949,

    /// Identifier: "ei-star"
    IFEvilStar                                = 0xe955,

    /// Identifier: "ei-tag"
    IFEvilTag                                 = 0xe956,

    /// Identifier: "ei-trash"
    IFEvilTrash                               = 0xe957,

    /// Identifier: "ei-trophy"
    IFEvilTrophy                              = 0xe958,

    /// Identifier: "ei-undo"
    IFEvilUndo                                = 0xe959,

    /// Identifier: "ei-unlock"
    IFEvilUnlock                              = 0xe95a,

    /// Identifier: "ei-user"
    IFEvilUser                                = 0xe95b,

};

/**
 * Evil Icons, v1.8.0, http://evil-icons.io
 */
@interface IFEvilIcons : IFIcon
@end
