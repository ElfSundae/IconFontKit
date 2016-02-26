Pod::Spec.new do |s|
  s.name              = "IconFontsKit"
  s.version           = "1.1.2"
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

  s.subspec "ZocialButtons" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFZocialButtons.{h,m}"
    ss.resource             = "IconFontsKit/zocial.ttf"
  end

  s.subspec "Typicons" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFTypicons.{h,m}"
    ss.resource             = "IconFontsKit/typicons.ttf"
  end

  s.subspec "OpenIconic" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFOpenIconic.{h,m}"
    ss.resource             = "IconFontsKit/open-iconic.ttf"
  end

  s.subspec "MetrizeIcons" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFMetrizeIcons.{h,m}"
    ss.resource             = "IconFontsKit/Metrize-Icons.ttf"
  end

  s.subspec "Meteocons" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFMeteocons.{h,m}"
    ss.resource             = "IconFontsKit/meteocons.ttf"
  end

  s.subspec "MFGLabsIconset" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFMFGLabsIconset.{h,m}"
    ss.resource             = "IconFontsKit/mfglabsiconset-webfont.ttf"
  end

  s.subspec "LineariconsFree" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFLineariconsFree.{h,m}"
    ss.resource             = "IconFontsKit/Linearicons-Free.ttf"
  end

  s.subspec "IcoMoonFree" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFIcoMoonFree.{h,m}"
    ss.resource             = "IconFontsKit/IcoMoon-Free.ttf"
  end

  s.subspec "HawconsFilled" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFHawconsFilled.{h,m}"
    ss.resource             = "IconFontsKit/Hawcons-Filled.ttf"
  end

  s.subspec "HawconsStroke" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFHawconsStroke.{h,m}"
    ss.resource             = "IconFontsKit/Hawcons-Stroke.ttf"
  end

  s.subspec "Dashicons" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFDashicons.{h,m}"
    ss.resource             = "IconFontsKit/dashicons.ttf"
  end

  s.subspec "Linea" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFLinea.{h,m}"
    ss.resource             = "IconFontsKit/Linea.ttf"
  end

  s.subspec "Entypo" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFEntypo.{h,m}"
    ss.resource             = "IconFontsKit/Entypo.ttf"
  end

  s.subspec "ThemifyIcons" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFThemifyIcons.{h,m}"
    ss.resource             = "IconFontsKit/themify.ttf"
  end

  s.subspec "StreamlineFree" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFStreamlineFree.{h,m}"
    ss.resource             = "IconFontsKit/StreamlineFree.ttf"
  end

  s.subspec "Stroke7Icons" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFStroke7Icons.{h,m}"
    ss.resource             = "IconFontsKit/Pe-icon-7-stroke.ttf"
  end

  s.subspec "Devicons" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFDevicons.{h,m}"
    ss.resource             = "IconFontsKit/devicons.ttf"
  end

  s.subspec "LigatureSymbols" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFLigatureSymbols.{h,m}"
    ss.resource             = "IconFontsKit/LigatureSymbols.ttf"
  end

  s.subspec "Dripicons" do |ss|
    ss.dependency           "IconFontsKit/Core"
    ss.source_files         = "IconFontsKit/IFDripicons.{h,m}"
    ss.resource             = "IconFontsKit/dripicons.ttf"
  end

end
