#import "IFIcon.h"

/**
 * FontAwesome icon types.
 */
typedef NS_ENUM(IFIconType, IFFontAwesomeType) {

    /// Identifier: "fa-glass"
    IFFAGlass                               = 0xf000,

    /// Identifier: "fa-music"
    IFFAMusic                               = 0xf001,

    /// Identifier: "fa-search"
    IFFASearch                              = 0xf002,

    /// Identifier: "fa-envelope-o"
    IFFAEnvelopeO                           = 0xf003,

    /// Identifier: "fa-heart"
    IFFAHeart                               = 0xf004,

    /// Identifier: "fa-star"
    IFFAStar                                = 0xf005,

    /// Identifier: "fa-star-o"
    IFFAStarO                               = 0xf006,

    /// Identifier: "fa-user"
    IFFAUser                                = 0xf007,

    /// Identifier: "fa-film"
    IFFAFilm                                = 0xf008,

    /// Identifier: "fa-th-large"
    IFFAThLarge                             = 0xf009,

    /// Identifier: "fa-th"
    IFFATh                                  = 0xf00a,

    /// Identifier: "fa-th-list"
    IFFAThList                              = 0xf00b,

    /// Identifier: "fa-check"
    IFFACheck                               = 0xf00c,

    /// Identifier: "fa-remove"
    IFFARemove                              = 0xf00d,

    /// Identifier: "fa-close"
    IFFAClose                               = 0xf00d,

    /// Identifier: "fa-times"
    IFFATimes                               = 0xf00d,

    /// Identifier: "fa-search-plus"
    IFFASearchPlus                          = 0xf00e,

    /// Identifier: "fa-search-minus"
    IFFASearchMinus                         = 0xf010,

    /// Identifier: "fa-power-off"
    IFFAPowerOff                            = 0xf011,

    /// Identifier: "fa-signal"
    IFFASignal                              = 0xf012,

    /// Identifier: "fa-gear"
    IFFAGear                                = 0xf013,

    /// Identifier: "fa-cog"
    IFFACog                                 = 0xf013,

    /// Identifier: "fa-trash-o"
    IFFATrashO                              = 0xf014,

    /// Identifier: "fa-home"
    IFFAHome                                = 0xf015,

    /// Identifier: "fa-file-o"
    IFFAFileO                               = 0xf016,

    /// Identifier: "fa-clock-o"
    IFFAClockO                              = 0xf017,

    /// Identifier: "fa-road"
    IFFARoad                                = 0xf018,

    /// Identifier: "fa-download"
    IFFADownload                            = 0xf019,

    /// Identifier: "fa-arrow-circle-o-down"
    IFFAArrowCircleODown                    = 0xf01a,

    /// Identifier: "fa-arrow-circle-o-up"
    IFFAArrowCircleOUp                      = 0xf01b,

    /// Identifier: "fa-inbox"
    IFFAInbox                               = 0xf01c,

    /// Identifier: "fa-play-circle-o"
    IFFAPlayCircleO                         = 0xf01d,

    /// Identifier: "fa-rotate-right"
    IFFARotateRight                         = 0xf01e,

    /// Identifier: "fa-repeat"
    IFFARepeat                              = 0xf01e,

    /// Identifier: "fa-refresh"
    IFFARefresh                             = 0xf021,

    /// Identifier: "fa-list-alt"
    IFFAListAlt                             = 0xf022,

    /// Identifier: "fa-lock"
    IFFALock                                = 0xf023,

    /// Identifier: "fa-flag"
    IFFAFlag                                = 0xf024,

    /// Identifier: "fa-headphones"
    IFFAHeadphones                          = 0xf025,

    /// Identifier: "fa-volume-off"
    IFFAVolumeOff                           = 0xf026,

    /// Identifier: "fa-volume-down"
    IFFAVolumeDown                          = 0xf027,

    /// Identifier: "fa-volume-up"
    IFFAVolumeUp                            = 0xf028,

    /// Identifier: "fa-qrcode"
    IFFAQrcode                              = 0xf029,

    /// Identifier: "fa-barcode"
    IFFABarcode                             = 0xf02a,

    /// Identifier: "fa-tag"
    IFFATag                                 = 0xf02b,

    /// Identifier: "fa-tags"
    IFFATags                                = 0xf02c,

    /// Identifier: "fa-book"
    IFFABook                                = 0xf02d,

    /// Identifier: "fa-bookmark"
    IFFABookmark                            = 0xf02e,

    /// Identifier: "fa-print"
    IFFAPrint                               = 0xf02f,

    /// Identifier: "fa-camera"
    IFFACamera                              = 0xf030,

    /// Identifier: "fa-font"
    IFFAFont                                = 0xf031,

    /// Identifier: "fa-bold"
    IFFABold                                = 0xf032,

    /// Identifier: "fa-italic"
    IFFAItalic                              = 0xf033,

    /// Identifier: "fa-text-height"
    IFFATextHeight                          = 0xf034,

    /// Identifier: "fa-text-width"
    IFFATextWidth                           = 0xf035,

    /// Identifier: "fa-align-left"
    IFFAAlignLeft                           = 0xf036,

    /// Identifier: "fa-align-center"
    IFFAAlignCenter                         = 0xf037,

    /// Identifier: "fa-align-right"
    IFFAAlignRight                          = 0xf038,

    /// Identifier: "fa-align-justify"
    IFFAAlignJustify                        = 0xf039,

    /// Identifier: "fa-list"
    IFFAList                                = 0xf03a,

    /// Identifier: "fa-dedent"
    IFFADedent                              = 0xf03b,

    /// Identifier: "fa-outdent"
    IFFAOutdent                             = 0xf03b,

    /// Identifier: "fa-indent"
    IFFAIndent                              = 0xf03c,

    /// Identifier: "fa-video-camera"
    IFFAVideoCamera                         = 0xf03d,

    /// Identifier: "fa-photo"
    IFFAPhoto                               = 0xf03e,

    /// Identifier: "fa-image"
    IFFAImage                               = 0xf03e,

    /// Identifier: "fa-picture-o"
    IFFAPictureO                            = 0xf03e,

    /// Identifier: "fa-pencil"
    IFFAPencil                              = 0xf040,

    /// Identifier: "fa-map-marker"
    IFFAMapMarker                           = 0xf041,

    /// Identifier: "fa-adjust"
    IFFAAdjust                              = 0xf042,

    /// Identifier: "fa-tint"
    IFFATint                                = 0xf043,

    /// Identifier: "fa-edit"
    IFFAEdit                                = 0xf044,

    /// Identifier: "fa-pencil-square-o"
    IFFAPencilSquareO                       = 0xf044,

    /// Identifier: "fa-share-square-o"
    IFFAShareSquareO                        = 0xf045,

    /// Identifier: "fa-check-square-o"
    IFFACheckSquareO                        = 0xf046,

    /// Identifier: "fa-arrows"
    IFFAArrows                              = 0xf047,

    /// Identifier: "fa-step-backward"
    IFFAStepBackward                        = 0xf048,

    /// Identifier: "fa-fast-backward"
    IFFAFastBackward                        = 0xf049,

    /// Identifier: "fa-backward"
    IFFABackward                            = 0xf04a,

    /// Identifier: "fa-play"
    IFFAPlay                                = 0xf04b,

    /// Identifier: "fa-pause"
    IFFAPause                               = 0xf04c,

    /// Identifier: "fa-stop"
    IFFAStop                                = 0xf04d,

    /// Identifier: "fa-forward"
    IFFAForward                             = 0xf04e,

    /// Identifier: "fa-fast-forward"
    IFFAFastForward                         = 0xf050,

    /// Identifier: "fa-step-forward"
    IFFAStepForward                         = 0xf051,

    /// Identifier: "fa-eject"
    IFFAEject                               = 0xf052,

    /// Identifier: "fa-chevron-left"
    IFFAChevronLeft                         = 0xf053,

    /// Identifier: "fa-chevron-right"
    IFFAChevronRight                        = 0xf054,

    /// Identifier: "fa-plus-circle"
    IFFAPlusCircle                          = 0xf055,

    /// Identifier: "fa-minus-circle"
    IFFAMinusCircle                         = 0xf056,

    /// Identifier: "fa-times-circle"
    IFFATimesCircle                         = 0xf057,

    /// Identifier: "fa-check-circle"
    IFFACheckCircle                         = 0xf058,

    /// Identifier: "fa-question-circle"
    IFFAQuestionCircle                      = 0xf059,

    /// Identifier: "fa-info-circle"
    IFFAInfoCircle                          = 0xf05a,

    /// Identifier: "fa-crosshairs"
    IFFACrosshairs                          = 0xf05b,

    /// Identifier: "fa-times-circle-o"
    IFFATimesCircleO                        = 0xf05c,

    /// Identifier: "fa-check-circle-o"
    IFFACheckCircleO                        = 0xf05d,

    /// Identifier: "fa-ban"
    IFFABan                                 = 0xf05e,

    /// Identifier: "fa-arrow-left"
    IFFAArrowLeft                           = 0xf060,

    /// Identifier: "fa-arrow-right"
    IFFAArrowRight                          = 0xf061,

    /// Identifier: "fa-arrow-up"
    IFFAArrowUp                             = 0xf062,

    /// Identifier: "fa-arrow-down"
    IFFAArrowDown                           = 0xf063,

    /// Identifier: "fa-mail-forward"
    IFFAMailForward                         = 0xf064,

    /// Identifier: "fa-share"
    IFFAShare                               = 0xf064,

    /// Identifier: "fa-expand"
    IFFAExpand                              = 0xf065,

    /// Identifier: "fa-compress"
    IFFACompress                            = 0xf066,

    /// Identifier: "fa-plus"
    IFFAPlus                                = 0xf067,

    /// Identifier: "fa-minus"
    IFFAMinus                               = 0xf068,

    /// Identifier: "fa-asterisk"
    IFFAAsterisk                            = 0xf069,

    /// Identifier: "fa-exclamation-circle"
    IFFAExclamationCircle                   = 0xf06a,

    /// Identifier: "fa-gift"
    IFFAGift                                = 0xf06b,

    /// Identifier: "fa-leaf"
    IFFALeaf                                = 0xf06c,

    /// Identifier: "fa-fire"
    IFFAFire                                = 0xf06d,

    /// Identifier: "fa-eye"
    IFFAEye                                 = 0xf06e,

    /// Identifier: "fa-eye-slash"
    IFFAEyeSlash                            = 0xf070,

    /// Identifier: "fa-warning"
    IFFAWarning                             = 0xf071,

    /// Identifier: "fa-exclamation-triangle"
    IFFAExclamationTriangle                 = 0xf071,

    /// Identifier: "fa-plane"
    IFFAPlane                               = 0xf072,

    /// Identifier: "fa-calendar"
    IFFACalendar                            = 0xf073,

    /// Identifier: "fa-random"
    IFFARandom                              = 0xf074,

    /// Identifier: "fa-comment"
    IFFAComment                             = 0xf075,

    /// Identifier: "fa-magnet"
    IFFAMagnet                              = 0xf076,

    /// Identifier: "fa-chevron-up"
    IFFAChevronUp                           = 0xf077,

    /// Identifier: "fa-chevron-down"
    IFFAChevronDown                         = 0xf078,

    /// Identifier: "fa-retweet"
    IFFARetweet                             = 0xf079,

    /// Identifier: "fa-shopping-cart"
    IFFAShoppingCart                        = 0xf07a,

    /// Identifier: "fa-folder"
    IFFAFolder                              = 0xf07b,

    /// Identifier: "fa-folder-open"
    IFFAFolderOpen                          = 0xf07c,

    /// Identifier: "fa-arrows-v"
    IFFAArrowsV                             = 0xf07d,

    /// Identifier: "fa-arrows-h"
    IFFAArrowsH                             = 0xf07e,

    /// Identifier: "fa-bar-chart-o"
    IFFABarChartO                           = 0xf080,

    /// Identifier: "fa-bar-chart"
    IFFABarChart                            = 0xf080,

    /// Identifier: "fa-twitter-square"
    IFFATwitterSquare                       = 0xf081,

    /// Identifier: "fa-facebook-square"
    IFFAFacebookSquare                      = 0xf082,

    /// Identifier: "fa-camera-retro"
    IFFACameraRetro                         = 0xf083,

    /// Identifier: "fa-key"
    IFFAKey                                 = 0xf084,

    /// Identifier: "fa-gears"
    IFFAGears                               = 0xf085,

    /// Identifier: "fa-cogs"
    IFFACogs                                = 0xf085,

    /// Identifier: "fa-comments"
    IFFAComments                            = 0xf086,

    /// Identifier: "fa-thumbs-o-up"
    IFFAThumbsOUp                           = 0xf087,

    /// Identifier: "fa-thumbs-o-down"
    IFFAThumbsODown                         = 0xf088,

    /// Identifier: "fa-star-half"
    IFFAStarHalf                            = 0xf089,

    /// Identifier: "fa-heart-o"
    IFFAHeartO                              = 0xf08a,

    /// Identifier: "fa-sign-out"
    IFFASignOut                             = 0xf08b,

    /// Identifier: "fa-linkedin-square"
    IFFALinkedinSquare                      = 0xf08c,

    /// Identifier: "fa-thumb-tack"
    IFFAThumbTack                           = 0xf08d,

    /// Identifier: "fa-external-link"
    IFFAExternalLink                        = 0xf08e,

    /// Identifier: "fa-sign-in"
    IFFASignIn                              = 0xf090,

    /// Identifier: "fa-trophy"
    IFFATrophy                              = 0xf091,

    /// Identifier: "fa-github-square"
    IFFAGithubSquare                        = 0xf092,

    /// Identifier: "fa-upload"
    IFFAUpload                              = 0xf093,

    /// Identifier: "fa-lemon-o"
    IFFALemonO                              = 0xf094,

    /// Identifier: "fa-phone"
    IFFAPhone                               = 0xf095,

    /// Identifier: "fa-square-o"
    IFFASquareO                             = 0xf096,

    /// Identifier: "fa-bookmark-o"
    IFFABookmarkO                           = 0xf097,

    /// Identifier: "fa-phone-square"
    IFFAPhoneSquare                         = 0xf098,

    /// Identifier: "fa-twitter"
    IFFATwitter                             = 0xf099,

    /// Identifier: "fa-facebook-f"
    IFFAFacebookF                           = 0xf09a,

    /// Identifier: "fa-facebook"
    IFFAFacebook                            = 0xf09a,

    /// Identifier: "fa-github"
    IFFAGithub                              = 0xf09b,

    /// Identifier: "fa-unlock"
    IFFAUnlock                              = 0xf09c,

    /// Identifier: "fa-credit-card"
    IFFACreditCard                          = 0xf09d,

    /// Identifier: "fa-feed"
    IFFAFeed                                = 0xf09e,

    /// Identifier: "fa-rss"
    IFFARss                                 = 0xf09e,

    /// Identifier: "fa-hdd-o"
    IFFAHddO                                = 0xf0a0,

    /// Identifier: "fa-bullhorn"
    IFFABullhorn                            = 0xf0a1,

    /// Identifier: "fa-bell"
    IFFABell                                = 0xf0f3,

    /// Identifier: "fa-certificate"
    IFFACertificate                         = 0xf0a3,

    /// Identifier: "fa-hand-o-right"
    IFFAHandORight                          = 0xf0a4,

    /// Identifier: "fa-hand-o-left"
    IFFAHandOLeft                           = 0xf0a5,

    /// Identifier: "fa-hand-o-up"
    IFFAHandOUp                             = 0xf0a6,

    /// Identifier: "fa-hand-o-down"
    IFFAHandODown                           = 0xf0a7,

    /// Identifier: "fa-arrow-circle-left"
    IFFAArrowCircleLeft                     = 0xf0a8,

    /// Identifier: "fa-arrow-circle-right"
    IFFAArrowCircleRight                    = 0xf0a9,

    /// Identifier: "fa-arrow-circle-up"
    IFFAArrowCircleUp                       = 0xf0aa,

    /// Identifier: "fa-arrow-circle-down"
    IFFAArrowCircleDown                     = 0xf0ab,

    /// Identifier: "fa-globe"
    IFFAGlobe                               = 0xf0ac,

    /// Identifier: "fa-wrench"
    IFFAWrench                              = 0xf0ad,

    /// Identifier: "fa-tasks"
    IFFATasks                               = 0xf0ae,

    /// Identifier: "fa-filter"
    IFFAFilter                              = 0xf0b0,

    /// Identifier: "fa-briefcase"
    IFFABriefcase                           = 0xf0b1,

    /// Identifier: "fa-arrows-alt"
    IFFAArrowsAlt                           = 0xf0b2,

    /// Identifier: "fa-group"
    IFFAGroup                               = 0xf0c0,

    /// Identifier: "fa-users"
    IFFAUsers                               = 0xf0c0,

    /// Identifier: "fa-chain"
    IFFAChain                               = 0xf0c1,

    /// Identifier: "fa-link"
    IFFALink                                = 0xf0c1,

    /// Identifier: "fa-cloud"
    IFFACloud                               = 0xf0c2,

    /// Identifier: "fa-flask"
    IFFAFlask                               = 0xf0c3,

    /// Identifier: "fa-cut"
    IFFACut                                 = 0xf0c4,

    /// Identifier: "fa-scissors"
    IFFAScissors                            = 0xf0c4,

    /// Identifier: "fa-copy"
    IFFACopy                                = 0xf0c5,

    /// Identifier: "fa-files-o"
    IFFAFilesO                              = 0xf0c5,

    /// Identifier: "fa-paperclip"
    IFFAPaperclip                           = 0xf0c6,

    /// Identifier: "fa-save"
    IFFASave                                = 0xf0c7,

    /// Identifier: "fa-floppy-o"
    IFFAFloppyO                             = 0xf0c7,

    /// Identifier: "fa-square"
    IFFASquare                              = 0xf0c8,

    /// Identifier: "fa-navicon"
    IFFANavicon                             = 0xf0c9,

    /// Identifier: "fa-reorder"
    IFFAReorder                             = 0xf0c9,

    /// Identifier: "fa-bars"
    IFFABars                                = 0xf0c9,

    /// Identifier: "fa-list-ul"
    IFFAListUl                              = 0xf0ca,

    /// Identifier: "fa-list-ol"
    IFFAListOl                              = 0xf0cb,

    /// Identifier: "fa-strikethrough"
    IFFAStrikethrough                       = 0xf0cc,

    /// Identifier: "fa-underline"
    IFFAUnderline                           = 0xf0cd,

    /// Identifier: "fa-table"
    IFFATable                               = 0xf0ce,

    /// Identifier: "fa-magic"
    IFFAMagic                               = 0xf0d0,

    /// Identifier: "fa-truck"
    IFFATruck                               = 0xf0d1,

    /// Identifier: "fa-pinterest"
    IFFAPinterest                           = 0xf0d2,

    /// Identifier: "fa-pinterest-square"
    IFFAPinterestSquare                     = 0xf0d3,

    /// Identifier: "fa-google-plus-square"
    IFFAGooglePlusSquare                    = 0xf0d4,

    /// Identifier: "fa-google-plus"
    IFFAGooglePlus                          = 0xf0d5,

    /// Identifier: "fa-money"
    IFFAMoney                               = 0xf0d6,

    /// Identifier: "fa-caret-down"
    IFFACaretDown                           = 0xf0d7,

    /// Identifier: "fa-caret-up"
    IFFACaretUp                             = 0xf0d8,

    /// Identifier: "fa-caret-left"
    IFFACaretLeft                           = 0xf0d9,

    /// Identifier: "fa-caret-right"
    IFFACaretRight                          = 0xf0da,

    /// Identifier: "fa-columns"
    IFFAColumns                             = 0xf0db,

    /// Identifier: "fa-unsorted"
    IFFAUnsorted                            = 0xf0dc,

    /// Identifier: "fa-sort"
    IFFASort                                = 0xf0dc,

    /// Identifier: "fa-sort-down"
    IFFASortDown                            = 0xf0dd,

    /// Identifier: "fa-sort-desc"
    IFFASortDesc                            = 0xf0dd,

    /// Identifier: "fa-sort-up"
    IFFASortUp                              = 0xf0de,

    /// Identifier: "fa-sort-asc"
    IFFASortAsc                             = 0xf0de,

    /// Identifier: "fa-envelope"
    IFFAEnvelope                            = 0xf0e0,

    /// Identifier: "fa-linkedin"
    IFFALinkedin                            = 0xf0e1,

    /// Identifier: "fa-rotate-left"
    IFFARotateLeft                          = 0xf0e2,

    /// Identifier: "fa-undo"
    IFFAUndo                                = 0xf0e2,

    /// Identifier: "fa-legal"
    IFFALegal                               = 0xf0e3,

    /// Identifier: "fa-gavel"
    IFFAGavel                               = 0xf0e3,

    /// Identifier: "fa-dashboard"
    IFFADashboard                           = 0xf0e4,

    /// Identifier: "fa-tachometer"
    IFFATachometer                          = 0xf0e4,

    /// Identifier: "fa-comment-o"
    IFFACommentO                            = 0xf0e5,

    /// Identifier: "fa-comments-o"
    IFFACommentsO                           = 0xf0e6,

    /// Identifier: "fa-flash"
    IFFAFlash                               = 0xf0e7,

    /// Identifier: "fa-bolt"
    IFFABolt                                = 0xf0e7,

    /// Identifier: "fa-sitemap"
    IFFASitemap                             = 0xf0e8,

    /// Identifier: "fa-umbrella"
    IFFAUmbrella                            = 0xf0e9,

    /// Identifier: "fa-paste"
    IFFAPaste                               = 0xf0ea,

    /// Identifier: "fa-clipboard"
    IFFAClipboard                           = 0xf0ea,

    /// Identifier: "fa-lightbulb-o"
    IFFALightbulbO                          = 0xf0eb,

    /// Identifier: "fa-exchange"
    IFFAExchange                            = 0xf0ec,

    /// Identifier: "fa-cloud-download"
    IFFACloudDownload                       = 0xf0ed,

    /// Identifier: "fa-cloud-upload"
    IFFACloudUpload                         = 0xf0ee,

    /// Identifier: "fa-user-md"
    IFFAUserMd                              = 0xf0f0,

    /// Identifier: "fa-stethoscope"
    IFFAStethoscope                         = 0xf0f1,

    /// Identifier: "fa-suitcase"
    IFFASuitcase                            = 0xf0f2,

    /// Identifier: "fa-bell-o"
    IFFABellO                               = 0xf0a2,

    /// Identifier: "fa-coffee"
    IFFACoffee                              = 0xf0f4,

    /// Identifier: "fa-cutlery"
    IFFACutlery                             = 0xf0f5,

    /// Identifier: "fa-file-text-o"
    IFFAFileTextO                           = 0xf0f6,

    /// Identifier: "fa-building-o"
    IFFABuildingO                           = 0xf0f7,

    /// Identifier: "fa-hospital-o"
    IFFAHospitalO                           = 0xf0f8,

    /// Identifier: "fa-ambulance"
    IFFAAmbulance                           = 0xf0f9,

    /// Identifier: "fa-medkit"
    IFFAMedkit                              = 0xf0fa,

    /// Identifier: "fa-fighter-jet"
    IFFAFighterJet                          = 0xf0fb,

    /// Identifier: "fa-beer"
    IFFABeer                                = 0xf0fc,

    /// Identifier: "fa-h-square"
    IFFAHSquare                             = 0xf0fd,

    /// Identifier: "fa-plus-square"
    IFFAPlusSquare                          = 0xf0fe,

    /// Identifier: "fa-angle-double-left"
    IFFAAngleDoubleLeft                     = 0xf100,

    /// Identifier: "fa-angle-double-right"
    IFFAAngleDoubleRight                    = 0xf101,

    /// Identifier: "fa-angle-double-up"
    IFFAAngleDoubleUp                       = 0xf102,

    /// Identifier: "fa-angle-double-down"
    IFFAAngleDoubleDown                     = 0xf103,

    /// Identifier: "fa-angle-left"
    IFFAAngleLeft                           = 0xf104,

    /// Identifier: "fa-angle-right"
    IFFAAngleRight                          = 0xf105,

    /// Identifier: "fa-angle-up"
    IFFAAngleUp                             = 0xf106,

    /// Identifier: "fa-angle-down"
    IFFAAngleDown                           = 0xf107,

    /// Identifier: "fa-desktop"
    IFFADesktop                             = 0xf108,

    /// Identifier: "fa-laptop"
    IFFALaptop                              = 0xf109,

    /// Identifier: "fa-tablet"
    IFFATablet                              = 0xf10a,

    /// Identifier: "fa-mobile-phone"
    IFFAMobilePhone                         = 0xf10b,

    /// Identifier: "fa-mobile"
    IFFAMobile                              = 0xf10b,

    /// Identifier: "fa-circle-o"
    IFFACircleO                             = 0xf10c,

    /// Identifier: "fa-quote-left"
    IFFAQuoteLeft                           = 0xf10d,

    /// Identifier: "fa-quote-right"
    IFFAQuoteRight                          = 0xf10e,

    /// Identifier: "fa-spinner"
    IFFASpinner                             = 0xf110,

    /// Identifier: "fa-circle"
    IFFACircle                              = 0xf111,

    /// Identifier: "fa-mail-reply"
    IFFAMailReply                           = 0xf112,

    /// Identifier: "fa-reply"
    IFFAReply                               = 0xf112,

    /// Identifier: "fa-github-alt"
    IFFAGithubAlt                           = 0xf113,

    /// Identifier: "fa-folder-o"
    IFFAFolderO                             = 0xf114,

    /// Identifier: "fa-folder-open-o"
    IFFAFolderOpenO                         = 0xf115,

    /// Identifier: "fa-smile-o"
    IFFASmileO                              = 0xf118,

    /// Identifier: "fa-frown-o"
    IFFAFrownO                              = 0xf119,

    /// Identifier: "fa-meh-o"
    IFFAMehO                                = 0xf11a,

    /// Identifier: "fa-gamepad"
    IFFAGamepad                             = 0xf11b,

    /// Identifier: "fa-keyboard-o"
    IFFAKeyboardO                           = 0xf11c,

    /// Identifier: "fa-flag-o"
    IFFAFlagO                               = 0xf11d,

    /// Identifier: "fa-flag-checkered"
    IFFAFlagCheckered                       = 0xf11e,

    /// Identifier: "fa-terminal"
    IFFATerminal                            = 0xf120,

    /// Identifier: "fa-code"
    IFFACode                                = 0xf121,

    /// Identifier: "fa-mail-reply-all"
    IFFAMailReplyAll                        = 0xf122,

    /// Identifier: "fa-reply-all"
    IFFAReplyAll                            = 0xf122,

    /// Identifier: "fa-star-half-empty"
    IFFAStarHalfEmpty                       = 0xf123,

    /// Identifier: "fa-star-half-full"
    IFFAStarHalfFull                        = 0xf123,

    /// Identifier: "fa-star-half-o"
    IFFAStarHalfO                           = 0xf123,

    /// Identifier: "fa-location-arrow"
    IFFALocationArrow                       = 0xf124,

    /// Identifier: "fa-crop"
    IFFACrop                                = 0xf125,

    /// Identifier: "fa-code-fork"
    IFFACodeFork                            = 0xf126,

    /// Identifier: "fa-unlink"
    IFFAUnlink                              = 0xf127,

    /// Identifier: "fa-chain-broken"
    IFFAChainBroken                         = 0xf127,

    /// Identifier: "fa-question"
    IFFAQuestion                            = 0xf128,

    /// Identifier: "fa-info"
    IFFAInfo                                = 0xf129,

    /// Identifier: "fa-exclamation"
    IFFAExclamation                         = 0xf12a,

    /// Identifier: "fa-superscript"
    IFFASuperscript                         = 0xf12b,

    /// Identifier: "fa-subscript"
    IFFASubscript                           = 0xf12c,

    /// Identifier: "fa-eraser"
    IFFAEraser                              = 0xf12d,

    /// Identifier: "fa-puzzle-piece"
    IFFAPuzzlePiece                         = 0xf12e,

    /// Identifier: "fa-microphone"
    IFFAMicrophone                          = 0xf130,

    /// Identifier: "fa-microphone-slash"
    IFFAMicrophoneSlash                     = 0xf131,

    /// Identifier: "fa-shield"
    IFFAShield                              = 0xf132,

    /// Identifier: "fa-calendar-o"
    IFFACalendarO                           = 0xf133,

    /// Identifier: "fa-fire-extinguisher"
    IFFAFireExtinguisher                    = 0xf134,

    /// Identifier: "fa-rocket"
    IFFARocket                              = 0xf135,

    /// Identifier: "fa-maxcdn"
    IFFAMaxcdn                              = 0xf136,

    /// Identifier: "fa-chevron-circle-left"
    IFFAChevronCircleLeft                   = 0xf137,

    /// Identifier: "fa-chevron-circle-right"
    IFFAChevronCircleRight                  = 0xf138,

    /// Identifier: "fa-chevron-circle-up"
    IFFAChevronCircleUp                     = 0xf139,

    /// Identifier: "fa-chevron-circle-down"
    IFFAChevronCircleDown                   = 0xf13a,

    /// Identifier: "fa-html5"
    IFFAHtml5                               = 0xf13b,

    /// Identifier: "fa-css3"
    IFFACss3                                = 0xf13c,

    /// Identifier: "fa-anchor"
    IFFAAnchor                              = 0xf13d,

    /// Identifier: "fa-unlock-alt"
    IFFAUnlockAlt                           = 0xf13e,

    /// Identifier: "fa-bullseye"
    IFFABullseye                            = 0xf140,

    /// Identifier: "fa-ellipsis-h"
    IFFAEllipsisH                           = 0xf141,

    /// Identifier: "fa-ellipsis-v"
    IFFAEllipsisV                           = 0xf142,

    /// Identifier: "fa-rss-square"
    IFFARssSquare                           = 0xf143,

    /// Identifier: "fa-play-circle"
    IFFAPlayCircle                          = 0xf144,

    /// Identifier: "fa-ticket"
    IFFATicket                              = 0xf145,

    /// Identifier: "fa-minus-square"
    IFFAMinusSquare                         = 0xf146,

    /// Identifier: "fa-minus-square-o"
    IFFAMinusSquareO                        = 0xf147,

    /// Identifier: "fa-level-up"
    IFFALevelUp                             = 0xf148,

    /// Identifier: "fa-level-down"
    IFFALevelDown                           = 0xf149,

    /// Identifier: "fa-check-square"
    IFFACheckSquare                         = 0xf14a,

    /// Identifier: "fa-pencil-square"
    IFFAPencilSquare                        = 0xf14b,

    /// Identifier: "fa-external-link-square"
    IFFAExternalLinkSquare                  = 0xf14c,

    /// Identifier: "fa-share-square"
    IFFAShareSquare                         = 0xf14d,

    /// Identifier: "fa-compass"
    IFFACompass                             = 0xf14e,

    /// Identifier: "fa-toggle-down"
    IFFAToggleDown                          = 0xf150,

    /// Identifier: "fa-caret-square-o-down"
    IFFACaretSquareODown                    = 0xf150,

    /// Identifier: "fa-toggle-up"
    IFFAToggleUp                            = 0xf151,

    /// Identifier: "fa-caret-square-o-up"
    IFFACaretSquareOUp                      = 0xf151,

    /// Identifier: "fa-toggle-right"
    IFFAToggleRight                         = 0xf152,

    /// Identifier: "fa-caret-square-o-right"
    IFFACaretSquareORight                   = 0xf152,

    /// Identifier: "fa-euro"
    IFFAEuro                                = 0xf153,

    /// Identifier: "fa-eur"
    IFFAEur                                 = 0xf153,

    /// Identifier: "fa-gbp"
    IFFAGbp                                 = 0xf154,

    /// Identifier: "fa-dollar"
    IFFADollar                              = 0xf155,

    /// Identifier: "fa-usd"
    IFFAUsd                                 = 0xf155,

    /// Identifier: "fa-rupee"
    IFFARupee                               = 0xf156,

    /// Identifier: "fa-inr"
    IFFAInr                                 = 0xf156,

    /// Identifier: "fa-cny"
    IFFACny                                 = 0xf157,

    /// Identifier: "fa-rmb"
    IFFARmb                                 = 0xf157,

    /// Identifier: "fa-yen"
    IFFAYen                                 = 0xf157,

    /// Identifier: "fa-jpy"
    IFFAJpy                                 = 0xf157,

    /// Identifier: "fa-ruble"
    IFFARuble                               = 0xf158,

    /// Identifier: "fa-rouble"
    IFFARouble                              = 0xf158,

    /// Identifier: "fa-rub"
    IFFARub                                 = 0xf158,

    /// Identifier: "fa-won"
    IFFAWon                                 = 0xf159,

    /// Identifier: "fa-krw"
    IFFAKrw                                 = 0xf159,

    /// Identifier: "fa-bitcoin"
    IFFABitcoin                             = 0xf15a,

    /// Identifier: "fa-btc"
    IFFABtc                                 = 0xf15a,

    /// Identifier: "fa-file"
    IFFAFile                                = 0xf15b,

    /// Identifier: "fa-file-text"
    IFFAFileText                            = 0xf15c,

    /// Identifier: "fa-sort-alpha-asc"
    IFFASortAlphaAsc                        = 0xf15d,

    /// Identifier: "fa-sort-alpha-desc"
    IFFASortAlphaDesc                       = 0xf15e,

    /// Identifier: "fa-sort-amount-asc"
    IFFASortAmountAsc                       = 0xf160,

    /// Identifier: "fa-sort-amount-desc"
    IFFASortAmountDesc                      = 0xf161,

    /// Identifier: "fa-sort-numeric-asc"
    IFFASortNumericAsc                      = 0xf162,

    /// Identifier: "fa-sort-numeric-desc"
    IFFASortNumericDesc                     = 0xf163,

    /// Identifier: "fa-thumbs-up"
    IFFAThumbsUp                            = 0xf164,

    /// Identifier: "fa-thumbs-down"
    IFFAThumbsDown                          = 0xf165,

    /// Identifier: "fa-youtube-square"
    IFFAYoutubeSquare                       = 0xf166,

    /// Identifier: "fa-youtube"
    IFFAYoutube                             = 0xf167,

    /// Identifier: "fa-xing"
    IFFAXing                                = 0xf168,

    /// Identifier: "fa-xing-square"
    IFFAXingSquare                          = 0xf169,

    /// Identifier: "fa-youtube-play"
    IFFAYoutubePlay                         = 0xf16a,

    /// Identifier: "fa-dropbox"
    IFFADropbox                             = 0xf16b,

    /// Identifier: "fa-stack-overflow"
    IFFAStackOverflow                       = 0xf16c,

    /// Identifier: "fa-instagram"
    IFFAInstagram                           = 0xf16d,

    /// Identifier: "fa-flickr"
    IFFAFlickr                              = 0xf16e,

    /// Identifier: "fa-adn"
    IFFAAdn                                 = 0xf170,

    /// Identifier: "fa-bitbucket"
    IFFABitbucket                           = 0xf171,

    /// Identifier: "fa-bitbucket-square"
    IFFABitbucketSquare                     = 0xf172,

    /// Identifier: "fa-tumblr"
    IFFATumblr                              = 0xf173,

    /// Identifier: "fa-tumblr-square"
    IFFATumblrSquare                        = 0xf174,

    /// Identifier: "fa-long-arrow-down"
    IFFALongArrowDown                       = 0xf175,

    /// Identifier: "fa-long-arrow-up"
    IFFALongArrowUp                         = 0xf176,

    /// Identifier: "fa-long-arrow-left"
    IFFALongArrowLeft                       = 0xf177,

    /// Identifier: "fa-long-arrow-right"
    IFFALongArrowRight                      = 0xf178,

    /// Identifier: "fa-apple"
    IFFAApple                               = 0xf179,

    /// Identifier: "fa-windows"
    IFFAWindows                             = 0xf17a,

    /// Identifier: "fa-android"
    IFFAAndroid                             = 0xf17b,

    /// Identifier: "fa-linux"
    IFFALinux                               = 0xf17c,

    /// Identifier: "fa-dribbble"
    IFFADribbble                            = 0xf17d,

    /// Identifier: "fa-skype"
    IFFASkype                               = 0xf17e,

    /// Identifier: "fa-foursquare"
    IFFAFoursquare                          = 0xf180,

    /// Identifier: "fa-trello"
    IFFATrello                              = 0xf181,

    /// Identifier: "fa-female"
    IFFAFemale                              = 0xf182,

    /// Identifier: "fa-male"
    IFFAMale                                = 0xf183,

    /// Identifier: "fa-gittip"
    IFFAGittip                              = 0xf184,

    /// Identifier: "fa-gratipay"
    IFFAGratipay                            = 0xf184,

    /// Identifier: "fa-sun-o"
    IFFASunO                                = 0xf185,

    /// Identifier: "fa-moon-o"
    IFFAMoonO                               = 0xf186,

    /// Identifier: "fa-archive"
    IFFAArchive                             = 0xf187,

    /// Identifier: "fa-bug"
    IFFABug                                 = 0xf188,

    /// Identifier: "fa-vk"
    IFFAVk                                  = 0xf189,

    /// Identifier: "fa-weibo"
    IFFAWeibo                               = 0xf18a,

    /// Identifier: "fa-renren"
    IFFARenren                              = 0xf18b,

    /// Identifier: "fa-pagelines"
    IFFAPagelines                           = 0xf18c,

    /// Identifier: "fa-stack-exchange"
    IFFAStackExchange                       = 0xf18d,

    /// Identifier: "fa-arrow-circle-o-right"
    IFFAArrowCircleORight                   = 0xf18e,

    /// Identifier: "fa-arrow-circle-o-left"
    IFFAArrowCircleOLeft                    = 0xf190,

    /// Identifier: "fa-toggle-left"
    IFFAToggleLeft                          = 0xf191,

    /// Identifier: "fa-caret-square-o-left"
    IFFACaretSquareOLeft                    = 0xf191,

    /// Identifier: "fa-dot-circle-o"
    IFFADotCircleO                          = 0xf192,

    /// Identifier: "fa-wheelchair"
    IFFAWheelchair                          = 0xf193,

    /// Identifier: "fa-vimeo-square"
    IFFAVimeoSquare                         = 0xf194,

    /// Identifier: "fa-turkish-lira"
    IFFATurkishLira                         = 0xf195,

    /// Identifier: "fa-try"
    IFFATry                                 = 0xf195,

    /// Identifier: "fa-plus-square-o"
    IFFAPlusSquareO                         = 0xf196,

    /// Identifier: "fa-space-shuttle"
    IFFASpaceShuttle                        = 0xf197,

    /// Identifier: "fa-slack"
    IFFASlack                               = 0xf198,

    /// Identifier: "fa-envelope-square"
    IFFAEnvelopeSquare                      = 0xf199,

    /// Identifier: "fa-wordpress"
    IFFAWordpress                           = 0xf19a,

    /// Identifier: "fa-openid"
    IFFAOpenid                              = 0xf19b,

    /// Identifier: "fa-institution"
    IFFAInstitution                         = 0xf19c,

    /// Identifier: "fa-bank"
    IFFABank                                = 0xf19c,

    /// Identifier: "fa-university"
    IFFAUniversity                          = 0xf19c,

    /// Identifier: "fa-mortar-board"
    IFFAMortarBoard                         = 0xf19d,

    /// Identifier: "fa-graduation-cap"
    IFFAGraduationCap                       = 0xf19d,

    /// Identifier: "fa-yahoo"
    IFFAYahoo                               = 0xf19e,

    /// Identifier: "fa-google"
    IFFAGoogle                              = 0xf1a0,

    /// Identifier: "fa-reddit"
    IFFAReddit                              = 0xf1a1,

    /// Identifier: "fa-reddit-square"
    IFFARedditSquare                        = 0xf1a2,

    /// Identifier: "fa-stumbleupon-circle"
    IFFAStumbleuponCircle                   = 0xf1a3,

    /// Identifier: "fa-stumbleupon"
    IFFAStumbleupon                         = 0xf1a4,

    /// Identifier: "fa-delicious"
    IFFADelicious                           = 0xf1a5,

    /// Identifier: "fa-digg"
    IFFADigg                                = 0xf1a6,

    /// Identifier: "fa-pied-piper-pp"
    IFFAPiedPiperPp                         = 0xf1a7,

    /// Identifier: "fa-pied-piper-alt"
    IFFAPiedPiperAlt                        = 0xf1a8,

    /// Identifier: "fa-drupal"
    IFFADrupal                              = 0xf1a9,

    /// Identifier: "fa-joomla"
    IFFAJoomla                              = 0xf1aa,

    /// Identifier: "fa-language"
    IFFALanguage                            = 0xf1ab,

    /// Identifier: "fa-fax"
    IFFAFax                                 = 0xf1ac,

    /// Identifier: "fa-building"
    IFFABuilding                            = 0xf1ad,

    /// Identifier: "fa-child"
    IFFAChild                               = 0xf1ae,

    /// Identifier: "fa-paw"
    IFFAPaw                                 = 0xf1b0,

    /// Identifier: "fa-spoon"
    IFFASpoon                               = 0xf1b1,

    /// Identifier: "fa-cube"
    IFFACube                                = 0xf1b2,

    /// Identifier: "fa-cubes"
    IFFACubes                               = 0xf1b3,

    /// Identifier: "fa-behance"
    IFFABehance                             = 0xf1b4,

    /// Identifier: "fa-behance-square"
    IFFABehanceSquare                       = 0xf1b5,

    /// Identifier: "fa-steam"
    IFFASteam                               = 0xf1b6,

    /// Identifier: "fa-steam-square"
    IFFASteamSquare                         = 0xf1b7,

    /// Identifier: "fa-recycle"
    IFFARecycle                             = 0xf1b8,

    /// Identifier: "fa-automobile"
    IFFAAutomobile                          = 0xf1b9,

    /// Identifier: "fa-car"
    IFFACar                                 = 0xf1b9,

    /// Identifier: "fa-cab"
    IFFACab                                 = 0xf1ba,

    /// Identifier: "fa-taxi"
    IFFATaxi                                = 0xf1ba,

    /// Identifier: "fa-tree"
    IFFATree                                = 0xf1bb,

    /// Identifier: "fa-spotify"
    IFFASpotify                             = 0xf1bc,

    /// Identifier: "fa-deviantart"
    IFFADeviantart                          = 0xf1bd,

    /// Identifier: "fa-soundcloud"
    IFFASoundcloud                          = 0xf1be,

    /// Identifier: "fa-database"
    IFFADatabase                            = 0xf1c0,

    /// Identifier: "fa-file-pdf-o"
    IFFAFilePdfO                            = 0xf1c1,

    /// Identifier: "fa-file-word-o"
    IFFAFileWordO                           = 0xf1c2,

    /// Identifier: "fa-file-excel-o"
    IFFAFileExcelO                          = 0xf1c3,

    /// Identifier: "fa-file-powerpoint-o"
    IFFAFilePowerpointO                     = 0xf1c4,

    /// Identifier: "fa-file-photo-o"
    IFFAFilePhotoO                          = 0xf1c5,

    /// Identifier: "fa-file-picture-o"
    IFFAFilePictureO                        = 0xf1c5,

    /// Identifier: "fa-file-image-o"
    IFFAFileImageO                          = 0xf1c5,

    /// Identifier: "fa-file-zip-o"
    IFFAFileZipO                            = 0xf1c6,

    /// Identifier: "fa-file-archive-o"
    IFFAFileArchiveO                        = 0xf1c6,

    /// Identifier: "fa-file-sound-o"
    IFFAFileSoundO                          = 0xf1c7,

    /// Identifier: "fa-file-audio-o"
    IFFAFileAudioO                          = 0xf1c7,

    /// Identifier: "fa-file-movie-o"
    IFFAFileMovieO                          = 0xf1c8,

    /// Identifier: "fa-file-video-o"
    IFFAFileVideoO                          = 0xf1c8,

    /// Identifier: "fa-file-code-o"
    IFFAFileCodeO                           = 0xf1c9,

    /// Identifier: "fa-vine"
    IFFAVine                                = 0xf1ca,

    /// Identifier: "fa-codepen"
    IFFACodepen                             = 0xf1cb,

    /// Identifier: "fa-jsfiddle"
    IFFAJsfiddle                            = 0xf1cc,

    /// Identifier: "fa-life-bouy"
    IFFALifeBouy                            = 0xf1cd,

    /// Identifier: "fa-life-buoy"
    IFFALifeBuoy                            = 0xf1cd,

    /// Identifier: "fa-life-saver"
    IFFALifeSaver                           = 0xf1cd,

    /// Identifier: "fa-support"
    IFFASupport                             = 0xf1cd,

    /// Identifier: "fa-life-ring"
    IFFALifeRing                            = 0xf1cd,

    /// Identifier: "fa-circle-o-notch"
    IFFACircleONotch                        = 0xf1ce,

    /// Identifier: "fa-ra"
    IFFARa                                  = 0xf1d0,

    /// Identifier: "fa-resistance"
    IFFAResistance                          = 0xf1d0,

    /// Identifier: "fa-rebel"
    IFFARebel                               = 0xf1d0,

    /// Identifier: "fa-ge"
    IFFAGe                                  = 0xf1d1,

    /// Identifier: "fa-empire"
    IFFAEmpire                              = 0xf1d1,

    /// Identifier: "fa-git-square"
    IFFAGitSquare                           = 0xf1d2,

    /// Identifier: "fa-git"
    IFFAGit                                 = 0xf1d3,

    /// Identifier: "fa-y-combinator-square"
    IFFAYCombinatorSquare                   = 0xf1d4,

    /// Identifier: "fa-yc-square"
    IFFAYcSquare                            = 0xf1d4,

    /// Identifier: "fa-hacker-news"
    IFFAHackerNews                          = 0xf1d4,

    /// Identifier: "fa-tencent-weibo"
    IFFATencentWeibo                        = 0xf1d5,

    /// Identifier: "fa-qq"
    IFFAQq                                  = 0xf1d6,

    /// Identifier: "fa-wechat"
    IFFAWechat                              = 0xf1d7,

    /// Identifier: "fa-weixin"
    IFFAWeixin                              = 0xf1d7,

    /// Identifier: "fa-send"
    IFFASend                                = 0xf1d8,

    /// Identifier: "fa-paper-plane"
    IFFAPaperPlane                          = 0xf1d8,

    /// Identifier: "fa-send-o"
    IFFASendO                               = 0xf1d9,

    /// Identifier: "fa-paper-plane-o"
    IFFAPaperPlaneO                         = 0xf1d9,

    /// Identifier: "fa-history"
    IFFAHistory                             = 0xf1da,

    /// Identifier: "fa-circle-thin"
    IFFACircleThin                          = 0xf1db,

    /// Identifier: "fa-header"
    IFFAHeader                              = 0xf1dc,

    /// Identifier: "fa-paragraph"
    IFFAParagraph                           = 0xf1dd,

    /// Identifier: "fa-sliders"
    IFFASliders                             = 0xf1de,

    /// Identifier: "fa-share-alt"
    IFFAShareAlt                            = 0xf1e0,

    /// Identifier: "fa-share-alt-square"
    IFFAShareAltSquare                      = 0xf1e1,

    /// Identifier: "fa-bomb"
    IFFABomb                                = 0xf1e2,

    /// Identifier: "fa-soccer-ball-o"
    IFFASoccerBallO                         = 0xf1e3,

    /// Identifier: "fa-futbol-o"
    IFFAFutbolO                             = 0xf1e3,

    /// Identifier: "fa-tty"
    IFFATty                                 = 0xf1e4,

    /// Identifier: "fa-binoculars"
    IFFABinoculars                          = 0xf1e5,

    /// Identifier: "fa-plug"
    IFFAPlug                                = 0xf1e6,

    /// Identifier: "fa-slideshare"
    IFFASlideshare                          = 0xf1e7,

    /// Identifier: "fa-twitch"
    IFFATwitch                              = 0xf1e8,

    /// Identifier: "fa-yelp"
    IFFAYelp                                = 0xf1e9,

    /// Identifier: "fa-newspaper-o"
    IFFANewspaperO                          = 0xf1ea,

    /// Identifier: "fa-wifi"
    IFFAWifi                                = 0xf1eb,

    /// Identifier: "fa-calculator"
    IFFACalculator                          = 0xf1ec,

    /// Identifier: "fa-paypal"
    IFFAPaypal                              = 0xf1ed,

    /// Identifier: "fa-google-wallet"
    IFFAGoogleWallet                        = 0xf1ee,

    /// Identifier: "fa-cc-visa"
    IFFACcVisa                              = 0xf1f0,

    /// Identifier: "fa-cc-mastercard"
    IFFACcMastercard                        = 0xf1f1,

    /// Identifier: "fa-cc-discover"
    IFFACcDiscover                          = 0xf1f2,

    /// Identifier: "fa-cc-amex"
    IFFACcAmex                              = 0xf1f3,

    /// Identifier: "fa-cc-paypal"
    IFFACcPaypal                            = 0xf1f4,

    /// Identifier: "fa-cc-stripe"
    IFFACcStripe                            = 0xf1f5,

    /// Identifier: "fa-bell-slash"
    IFFABellSlash                           = 0xf1f6,

    /// Identifier: "fa-bell-slash-o"
    IFFABellSlashO                          = 0xf1f7,

    /// Identifier: "fa-trash"
    IFFATrash                               = 0xf1f8,

    /// Identifier: "fa-copyright"
    IFFACopyright                           = 0xf1f9,

    /// Identifier: "fa-at"
    IFFAAt                                  = 0xf1fa,

    /// Identifier: "fa-eyedropper"
    IFFAEyedropper                          = 0xf1fb,

    /// Identifier: "fa-paint-brush"
    IFFAPaintBrush                          = 0xf1fc,

    /// Identifier: "fa-birthday-cake"
    IFFABirthdayCake                        = 0xf1fd,

    /// Identifier: "fa-area-chart"
    IFFAAreaChart                           = 0xf1fe,

    /// Identifier: "fa-pie-chart"
    IFFAPieChart                            = 0xf200,

    /// Identifier: "fa-line-chart"
    IFFALineChart                           = 0xf201,

    /// Identifier: "fa-lastfm"
    IFFALastfm                              = 0xf202,

    /// Identifier: "fa-lastfm-square"
    IFFALastfmSquare                        = 0xf203,

    /// Identifier: "fa-toggle-off"
    IFFAToggleOff                           = 0xf204,

    /// Identifier: "fa-toggle-on"
    IFFAToggleOn                            = 0xf205,

    /// Identifier: "fa-bicycle"
    IFFABicycle                             = 0xf206,

    /// Identifier: "fa-bus"
    IFFABus                                 = 0xf207,

    /// Identifier: "fa-ioxhost"
    IFFAIoxhost                             = 0xf208,

    /// Identifier: "fa-angellist"
    IFFAAngellist                           = 0xf209,

    /// Identifier: "fa-cc"
    IFFACc                                  = 0xf20a,

    /// Identifier: "fa-shekel"
    IFFAShekel                              = 0xf20b,

    /// Identifier: "fa-sheqel"
    IFFASheqel                              = 0xf20b,

    /// Identifier: "fa-ils"
    IFFAIls                                 = 0xf20b,

    /// Identifier: "fa-meanpath"
    IFFAMeanpath                            = 0xf20c,

    /// Identifier: "fa-buysellads"
    IFFABuysellads                          = 0xf20d,

    /// Identifier: "fa-connectdevelop"
    IFFAConnectdevelop                      = 0xf20e,

    /// Identifier: "fa-dashcube"
    IFFADashcube                            = 0xf210,

    /// Identifier: "fa-forumbee"
    IFFAForumbee                            = 0xf211,

    /// Identifier: "fa-leanpub"
    IFFALeanpub                             = 0xf212,

    /// Identifier: "fa-sellsy"
    IFFASellsy                              = 0xf213,

    /// Identifier: "fa-shirtsinbulk"
    IFFAShirtsinbulk                        = 0xf214,

    /// Identifier: "fa-simplybuilt"
    IFFASimplybuilt                         = 0xf215,

    /// Identifier: "fa-skyatlas"
    IFFASkyatlas                            = 0xf216,

    /// Identifier: "fa-cart-plus"
    IFFACartPlus                            = 0xf217,

    /// Identifier: "fa-cart-arrow-down"
    IFFACartArrowDown                       = 0xf218,

    /// Identifier: "fa-diamond"
    IFFADiamond                             = 0xf219,

    /// Identifier: "fa-ship"
    IFFAShip                                = 0xf21a,

    /// Identifier: "fa-user-secret"
    IFFAUserSecret                          = 0xf21b,

    /// Identifier: "fa-motorcycle"
    IFFAMotorcycle                          = 0xf21c,

    /// Identifier: "fa-street-view"
    IFFAStreetView                          = 0xf21d,

    /// Identifier: "fa-heartbeat"
    IFFAHeartbeat                           = 0xf21e,

    /// Identifier: "fa-venus"
    IFFAVenus                               = 0xf221,

    /// Identifier: "fa-mars"
    IFFAMars                                = 0xf222,

    /// Identifier: "fa-mercury"
    IFFAMercury                             = 0xf223,

    /// Identifier: "fa-intersex"
    IFFAIntersex                            = 0xf224,

    /// Identifier: "fa-transgender"
    IFFATransgender                         = 0xf224,

    /// Identifier: "fa-transgender-alt"
    IFFATransgenderAlt                      = 0xf225,

    /// Identifier: "fa-venus-double"
    IFFAVenusDouble                         = 0xf226,

    /// Identifier: "fa-mars-double"
    IFFAMarsDouble                          = 0xf227,

    /// Identifier: "fa-venus-mars"
    IFFAVenusMars                           = 0xf228,

    /// Identifier: "fa-mars-stroke"
    IFFAMarsStroke                          = 0xf229,

    /// Identifier: "fa-mars-stroke-v"
    IFFAMarsStrokeV                         = 0xf22a,

    /// Identifier: "fa-mars-stroke-h"
    IFFAMarsStrokeH                         = 0xf22b,

    /// Identifier: "fa-neuter"
    IFFANeuter                              = 0xf22c,

    /// Identifier: "fa-genderless"
    IFFAGenderless                          = 0xf22d,

    /// Identifier: "fa-facebook-official"
    IFFAFacebookOfficial                    = 0xf230,

    /// Identifier: "fa-pinterest-p"
    IFFAPinterestP                          = 0xf231,

    /// Identifier: "fa-whatsapp"
    IFFAWhatsapp                            = 0xf232,

    /// Identifier: "fa-server"
    IFFAServer                              = 0xf233,

    /// Identifier: "fa-user-plus"
    IFFAUserPlus                            = 0xf234,

    /// Identifier: "fa-user-times"
    IFFAUserTimes                           = 0xf235,

    /// Identifier: "fa-hotel"
    IFFAHotel                               = 0xf236,

    /// Identifier: "fa-bed"
    IFFABed                                 = 0xf236,

    /// Identifier: "fa-viacoin"
    IFFAViacoin                             = 0xf237,

    /// Identifier: "fa-train"
    IFFATrain                               = 0xf238,

    /// Identifier: "fa-subway"
    IFFASubway                              = 0xf239,

    /// Identifier: "fa-medium"
    IFFAMedium                              = 0xf23a,

    /// Identifier: "fa-yc"
    IFFAYc                                  = 0xf23b,

    /// Identifier: "fa-y-combinator"
    IFFAYCombinator                         = 0xf23b,

    /// Identifier: "fa-optin-monster"
    IFFAOptinMonster                        = 0xf23c,

    /// Identifier: "fa-opencart"
    IFFAOpencart                            = 0xf23d,

    /// Identifier: "fa-expeditedssl"
    IFFAExpeditedssl                        = 0xf23e,

    /// Identifier: "fa-battery-4"
    IFFABattery4                            = 0xf240,

    /// Identifier: "fa-battery"
    IFFABattery                             = 0xf240,

    /// Identifier: "fa-battery-full"
    IFFABatteryFull                         = 0xf240,

    /// Identifier: "fa-battery-3"
    IFFABattery3                            = 0xf241,

    /// Identifier: "fa-battery-three-quarters"
    IFFABatteryThreeQuarters                = 0xf241,

    /// Identifier: "fa-battery-2"
    IFFABattery2                            = 0xf242,

    /// Identifier: "fa-battery-half"
    IFFABatteryHalf                         = 0xf242,

    /// Identifier: "fa-battery-1"
    IFFABattery1                            = 0xf243,

    /// Identifier: "fa-battery-quarter"
    IFFABatteryQuarter                      = 0xf243,

    /// Identifier: "fa-battery-0"
    IFFABattery0                            = 0xf244,

    /// Identifier: "fa-battery-empty"
    IFFABatteryEmpty                        = 0xf244,

    /// Identifier: "fa-mouse-pointer"
    IFFAMousePointer                        = 0xf245,

    /// Identifier: "fa-i-cursor"
    IFFAICursor                             = 0xf246,

    /// Identifier: "fa-object-group"
    IFFAObjectGroup                         = 0xf247,

    /// Identifier: "fa-object-ungroup"
    IFFAObjectUngroup                       = 0xf248,

    /// Identifier: "fa-sticky-note"
    IFFAStickyNote                          = 0xf249,

    /// Identifier: "fa-sticky-note-o"
    IFFAStickyNoteO                         = 0xf24a,

    /// Identifier: "fa-cc-jcb"
    IFFACcJcb                               = 0xf24b,

    /// Identifier: "fa-cc-diners-club"
    IFFACcDinersClub                        = 0xf24c,

    /// Identifier: "fa-clone"
    IFFAClone                               = 0xf24d,

    /// Identifier: "fa-balance-scale"
    IFFABalanceScale                        = 0xf24e,

    /// Identifier: "fa-hourglass-o"
    IFFAHourglassO                          = 0xf250,

    /// Identifier: "fa-hourglass-1"
    IFFAHourglass1                          = 0xf251,

    /// Identifier: "fa-hourglass-start"
    IFFAHourglassStart                      = 0xf251,

    /// Identifier: "fa-hourglass-2"
    IFFAHourglass2                          = 0xf252,

    /// Identifier: "fa-hourglass-half"
    IFFAHourglassHalf                       = 0xf252,

    /// Identifier: "fa-hourglass-3"
    IFFAHourglass3                          = 0xf253,

    /// Identifier: "fa-hourglass-end"
    IFFAHourglassEnd                        = 0xf253,

    /// Identifier: "fa-hourglass"
    IFFAHourglass                           = 0xf254,

    /// Identifier: "fa-hand-grab-o"
    IFFAHandGrabO                           = 0xf255,

    /// Identifier: "fa-hand-rock-o"
    IFFAHandRockO                           = 0xf255,

    /// Identifier: "fa-hand-stop-o"
    IFFAHandStopO                           = 0xf256,

    /// Identifier: "fa-hand-paper-o"
    IFFAHandPaperO                          = 0xf256,

    /// Identifier: "fa-hand-scissors-o"
    IFFAHandScissorsO                       = 0xf257,

    /// Identifier: "fa-hand-lizard-o"
    IFFAHandLizardO                         = 0xf258,

    /// Identifier: "fa-hand-spock-o"
    IFFAHandSpockO                          = 0xf259,

    /// Identifier: "fa-hand-pointer-o"
    IFFAHandPointerO                        = 0xf25a,

    /// Identifier: "fa-hand-peace-o"
    IFFAHandPeaceO                          = 0xf25b,

    /// Identifier: "fa-trademark"
    IFFATrademark                           = 0xf25c,

    /// Identifier: "fa-registered"
    IFFARegistered                          = 0xf25d,

    /// Identifier: "fa-creative-commons"
    IFFACreativeCommons                     = 0xf25e,

    /// Identifier: "fa-gg"
    IFFAGg                                  = 0xf260,

    /// Identifier: "fa-gg-circle"
    IFFAGgCircle                            = 0xf261,

    /// Identifier: "fa-tripadvisor"
    IFFATripadvisor                         = 0xf262,

    /// Identifier: "fa-odnoklassniki"
    IFFAOdnoklassniki                       = 0xf263,

    /// Identifier: "fa-odnoklassniki-square"
    IFFAOdnoklassnikiSquare                 = 0xf264,

    /// Identifier: "fa-get-pocket"
    IFFAGetPocket                           = 0xf265,

    /// Identifier: "fa-wikipedia-w"
    IFFAWikipediaW                          = 0xf266,

    /// Identifier: "fa-safari"
    IFFASafari                              = 0xf267,

    /// Identifier: "fa-chrome"
    IFFAChrome                              = 0xf268,

    /// Identifier: "fa-firefox"
    IFFAFirefox                             = 0xf269,

    /// Identifier: "fa-opera"
    IFFAOpera                               = 0xf26a,

    /// Identifier: "fa-internet-explorer"
    IFFAInternetExplorer                    = 0xf26b,

    /// Identifier: "fa-tv"
    IFFATv                                  = 0xf26c,

    /// Identifier: "fa-television"
    IFFATelevision                          = 0xf26c,

    /// Identifier: "fa-contao"
    IFFAContao                              = 0xf26d,

    /// Identifier: "fa-500px"
    IFFA500px                               = 0xf26e,

    /// Identifier: "fa-amazon"
    IFFAAmazon                              = 0xf270,

    /// Identifier: "fa-calendar-plus-o"
    IFFACalendarPlusO                       = 0xf271,

    /// Identifier: "fa-calendar-minus-o"
    IFFACalendarMinusO                      = 0xf272,

    /// Identifier: "fa-calendar-times-o"
    IFFACalendarTimesO                      = 0xf273,

    /// Identifier: "fa-calendar-check-o"
    IFFACalendarCheckO                      = 0xf274,

    /// Identifier: "fa-industry"
    IFFAIndustry                            = 0xf275,

    /// Identifier: "fa-map-pin"
    IFFAMapPin                              = 0xf276,

    /// Identifier: "fa-map-signs"
    IFFAMapSigns                            = 0xf277,

    /// Identifier: "fa-map-o"
    IFFAMapO                                = 0xf278,

    /// Identifier: "fa-map"
    IFFAMap                                 = 0xf279,

    /// Identifier: "fa-commenting"
    IFFACommenting                          = 0xf27a,

    /// Identifier: "fa-commenting-o"
    IFFACommentingO                         = 0xf27b,

    /// Identifier: "fa-houzz"
    IFFAHouzz                               = 0xf27c,

    /// Identifier: "fa-vimeo"
    IFFAVimeo                               = 0xf27d,

    /// Identifier: "fa-black-tie"
    IFFABlackTie                            = 0xf27e,

    /// Identifier: "fa-fonticons"
    IFFAFonticons                           = 0xf280,

    /// Identifier: "fa-reddit-alien"
    IFFARedditAlien                         = 0xf281,

    /// Identifier: "fa-edge"
    IFFAEdge                                = 0xf282,

    /// Identifier: "fa-credit-card-alt"
    IFFACreditCardAlt                       = 0xf283,

    /// Identifier: "fa-codiepie"
    IFFACodiepie                            = 0xf284,

    /// Identifier: "fa-modx"
    IFFAModx                                = 0xf285,

    /// Identifier: "fa-fort-awesome"
    IFFAFortAwesome                         = 0xf286,

    /// Identifier: "fa-usb"
    IFFAUsb                                 = 0xf287,

    /// Identifier: "fa-product-hunt"
    IFFAProductHunt                         = 0xf288,

    /// Identifier: "fa-mixcloud"
    IFFAMixcloud                            = 0xf289,

    /// Identifier: "fa-scribd"
    IFFAScribd                              = 0xf28a,

    /// Identifier: "fa-pause-circle"
    IFFAPauseCircle                         = 0xf28b,

    /// Identifier: "fa-pause-circle-o"
    IFFAPauseCircleO                        = 0xf28c,

    /// Identifier: "fa-stop-circle"
    IFFAStopCircle                          = 0xf28d,

    /// Identifier: "fa-stop-circle-o"
    IFFAStopCircleO                         = 0xf28e,

    /// Identifier: "fa-shopping-bag"
    IFFAShoppingBag                         = 0xf290,

    /// Identifier: "fa-shopping-basket"
    IFFAShoppingBasket                      = 0xf291,

    /// Identifier: "fa-hashtag"
    IFFAHashtag                             = 0xf292,

    /// Identifier: "fa-bluetooth"
    IFFABluetooth                           = 0xf293,

    /// Identifier: "fa-bluetooth-b"
    IFFABluetoothB                          = 0xf294,

    /// Identifier: "fa-percent"
    IFFAPercent                             = 0xf295,

    /// Identifier: "fa-gitlab"
    IFFAGitlab                              = 0xf296,

    /// Identifier: "fa-wpbeginner"
    IFFAWpbeginner                          = 0xf297,

    /// Identifier: "fa-wpforms"
    IFFAWpforms                             = 0xf298,

    /// Identifier: "fa-envira"
    IFFAEnvira                              = 0xf299,

    /// Identifier: "fa-universal-access"
    IFFAUniversalAccess                     = 0xf29a,

    /// Identifier: "fa-wheelchair-alt"
    IFFAWheelchairAlt                       = 0xf29b,

    /// Identifier: "fa-question-circle-o"
    IFFAQuestionCircleO                     = 0xf29c,

    /// Identifier: "fa-blind"
    IFFABlind                               = 0xf29d,

    /// Identifier: "fa-audio-description"
    IFFAAudioDescription                    = 0xf29e,

    /// Identifier: "fa-volume-control-phone"
    IFFAVolumeControlPhone                  = 0xf2a0,

    /// Identifier: "fa-braille"
    IFFABraille                             = 0xf2a1,

    /// Identifier: "fa-assistive-listening-systems"
    IFFAAssistiveListeningSystems           = 0xf2a2,

    /// Identifier: "fa-asl-interpreting"
    IFFAAslInterpreting                     = 0xf2a3,

    /// Identifier: "fa-american-sign-language-interpreting"
    IFFAAmericanSignLanguageInterpreting    = 0xf2a3,

    /// Identifier: "fa-deafness"
    IFFADeafness                            = 0xf2a4,

    /// Identifier: "fa-hard-of-hearing"
    IFFAHardOfHearing                       = 0xf2a4,

    /// Identifier: "fa-deaf"
    IFFADeaf                                = 0xf2a4,

    /// Identifier: "fa-glide"
    IFFAGlide                               = 0xf2a5,

    /// Identifier: "fa-glide-g"
    IFFAGlideG                              = 0xf2a6,

    /// Identifier: "fa-signing"
    IFFASigning                             = 0xf2a7,

    /// Identifier: "fa-sign-language"
    IFFASignLanguage                        = 0xf2a7,

    /// Identifier: "fa-low-vision"
    IFFALowVision                           = 0xf2a8,

    /// Identifier: "fa-viadeo"
    IFFAViadeo                              = 0xf2a9,

    /// Identifier: "fa-viadeo-square"
    IFFAViadeoSquare                        = 0xf2aa,

    /// Identifier: "fa-snapchat"
    IFFASnapchat                            = 0xf2ab,

    /// Identifier: "fa-snapchat-ghost"
    IFFASnapchatGhost                       = 0xf2ac,

    /// Identifier: "fa-snapchat-square"
    IFFASnapchatSquare                      = 0xf2ad,

    /// Identifier: "fa-pied-piper"
    IFFAPiedPiper                           = 0xf2ae,

    /// Identifier: "fa-first-order"
    IFFAFirstOrder                          = 0xf2b0,

    /// Identifier: "fa-yoast"
    IFFAYoast                               = 0xf2b1,

    /// Identifier: "fa-themeisle"
    IFFAThemeisle                           = 0xf2b2,

    /// Identifier: "fa-google-plus-circle"
    IFFAGooglePlusCircle                    = 0xf2b3,

    /// Identifier: "fa-google-plus-official"
    IFFAGooglePlusOfficial                  = 0xf2b3,

    /// Identifier: "fa-fa"
    IFFAFa                                  = 0xf2b4,

    /// Identifier: "fa-font-awesome"
    IFFAFontAwesome                         = 0xf2b4,

    /// Identifier: "fa-handshake-o"
    IFFAHandshakeO                          = 0xf2b5,

    /// Identifier: "fa-envelope-open"
    IFFAEnvelopeOpen                        = 0xf2b6,

    /// Identifier: "fa-envelope-open-o"
    IFFAEnvelopeOpenO                       = 0xf2b7,

    /// Identifier: "fa-linode"
    IFFALinode                              = 0xf2b8,

    /// Identifier: "fa-address-book"
    IFFAAddressBook                         = 0xf2b9,

    /// Identifier: "fa-address-book-o"
    IFFAAddressBookO                        = 0xf2ba,

    /// Identifier: "fa-vcard"
    IFFAVcard                               = 0xf2bb,

    /// Identifier: "fa-address-card"
    IFFAAddressCard                         = 0xf2bb,

    /// Identifier: "fa-vcard-o"
    IFFAVcardO                              = 0xf2bc,

    /// Identifier: "fa-address-card-o"
    IFFAAddressCardO                        = 0xf2bc,

    /// Identifier: "fa-user-circle"
    IFFAUserCircle                          = 0xf2bd,

    /// Identifier: "fa-user-circle-o"
    IFFAUserCircleO                         = 0xf2be,

    /// Identifier: "fa-user-o"
    IFFAUserO                               = 0xf2c0,

    /// Identifier: "fa-id-badge"
    IFFAIdBadge                             = 0xf2c1,

    /// Identifier: "fa-drivers-license"
    IFFADriversLicense                      = 0xf2c2,

    /// Identifier: "fa-id-card"
    IFFAIdCard                              = 0xf2c2,

    /// Identifier: "fa-drivers-license-o"
    IFFADriversLicenseO                     = 0xf2c3,

    /// Identifier: "fa-id-card-o"
    IFFAIdCardO                             = 0xf2c3,

    /// Identifier: "fa-quora"
    IFFAQuora                               = 0xf2c4,

    /// Identifier: "fa-free-code-camp"
    IFFAFreeCodeCamp                        = 0xf2c5,

    /// Identifier: "fa-telegram"
    IFFATelegram                            = 0xf2c6,

    /// Identifier: "fa-thermometer-4"
    IFFAThermometer4                        = 0xf2c7,

    /// Identifier: "fa-thermometer"
    IFFAThermometer                         = 0xf2c7,

    /// Identifier: "fa-thermometer-full"
    IFFAThermometerFull                     = 0xf2c7,

    /// Identifier: "fa-thermometer-3"
    IFFAThermometer3                        = 0xf2c8,

    /// Identifier: "fa-thermometer-three-quarters"
    IFFAThermometerThreeQuarters            = 0xf2c8,

    /// Identifier: "fa-thermometer-2"
    IFFAThermometer2                        = 0xf2c9,

    /// Identifier: "fa-thermometer-half"
    IFFAThermometerHalf                     = 0xf2c9,

    /// Identifier: "fa-thermometer-1"
    IFFAThermometer1                        = 0xf2ca,

    /// Identifier: "fa-thermometer-quarter"
    IFFAThermometerQuarter                  = 0xf2ca,

    /// Identifier: "fa-thermometer-0"
    IFFAThermometer0                        = 0xf2cb,

    /// Identifier: "fa-thermometer-empty"
    IFFAThermometerEmpty                    = 0xf2cb,

    /// Identifier: "fa-shower"
    IFFAShower                              = 0xf2cc,

    /// Identifier: "fa-bathtub"
    IFFABathtub                             = 0xf2cd,

    /// Identifier: "fa-s15"
    IFFAS15                                 = 0xf2cd,

    /// Identifier: "fa-bath"
    IFFABath                                = 0xf2cd,

    /// Identifier: "fa-podcast"
    IFFAPodcast                             = 0xf2ce,

    /// Identifier: "fa-window-maximize"
    IFFAWindowMaximize                      = 0xf2d0,

    /// Identifier: "fa-window-minimize"
    IFFAWindowMinimize                      = 0xf2d1,

    /// Identifier: "fa-window-restore"
    IFFAWindowRestore                       = 0xf2d2,

    /// Identifier: "fa-times-rectangle"
    IFFATimesRectangle                      = 0xf2d3,

    /// Identifier: "fa-window-close"
    IFFAWindowClose                         = 0xf2d3,

    /// Identifier: "fa-times-rectangle-o"
    IFFATimesRectangleO                     = 0xf2d4,

    /// Identifier: "fa-window-close-o"
    IFFAWindowCloseO                        = 0xf2d4,

    /// Identifier: "fa-bandcamp"
    IFFABandcamp                            = 0xf2d5,

    /// Identifier: "fa-grav"
    IFFAGrav                                = 0xf2d6,

    /// Identifier: "fa-etsy"
    IFFAEtsy                                = 0xf2d7,

    /// Identifier: "fa-imdb"
    IFFAImdb                                = 0xf2d8,

    /// Identifier: "fa-ravelry"
    IFFARavelry                             = 0xf2d9,

    /// Identifier: "fa-eercast"
    IFFAEercast                             = 0xf2da,

    /// Identifier: "fa-microchip"
    IFFAMicrochip                           = 0xf2db,

    /// Identifier: "fa-snowflake-o"
    IFFASnowflakeO                          = 0xf2dc,

    /// Identifier: "fa-superpowers"
    IFFASuperpowers                         = 0xf2dd,

    /// Identifier: "fa-wpexplorer"
    IFFAWpexplorer                          = 0xf2de,

    /// Identifier: "fa-meetup"
    IFFAMeetup                              = 0xf2e0,

};

/**
 * Font Awesome v4.6.3 http://fontawesome.io/icons
 */
@interface IFFontAwesome : IFIcon
@end
