Pod::Spec.new do |s|
  s.name              = "IconFontsKit"
  s.version           = "1.0.1"
  s.license           = "MIT"
  s.summary           = "Icon fonts for iOS."
  s.homepage          = "https://github.com/ElfSundae/IconFontsKit"
  s.authors           = { "Elf Sundae" => "http://0x123.com" }
  s.source            = { :git => "https://github.com/ElfSundae/IconFontsKit.git", :tag => s.version, :submodules => true }
  s.social_media_url  = "https://twitter.com/ElfSundae"

  s.platform              = :ios
  s.ios.deployment_target = "6.0"
  s.requires_arc          = true
  s.frameworks            = "CoreText"
  s.source_files          = "IconFontsKit/IconFontsKit.h"

  s.subspec "Core" do |ss|
    ss.source_files         = "IconFontsKit/IFIcon.{h,m}"
  end

  s.subspec "FontAwesome" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFFontAwesome.{h,m}"
    ss.resource             = "IconFontsKit/FontAwesome.otf"
  end

  s.subspec "Octicons" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFOcticons.{h,m}"
    ss.resource             = "IconFontsKit/octicons.ttf"
  end

  s.subspec "FoundationIcons" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFFoundationIcons.{h,m}"
    ss.resource             = "IconFontsKit/foundation-icons.ttf"
  end

  s.subspec "Ionicons" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFIonicons.{h,m}"
    ss.resource             = "IconFontsKit/ionicons.ttf"
  end

  s.subspec "MaterialDesignIcons" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFMaterialDesignIcons.{h,m}"
    ss.resource             = "IconFontsKit/materialdesignicons-webfont.ttf"
  end

  s.subspec "ElusiveIcons" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFElusiveIcons.{h,m}"
    ss.resource             = "IconFontsKit/elusiveicons-webfont.ttf"
  end

  s.subspec "MaterialIcons" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFMaterialIcons.{h,m}"
    ss.resource             = "IconFontsKit/MaterialIcons-Regular.ttf"
  end

end
