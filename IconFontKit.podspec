Pod::Spec.new do |s|
  s.name              = "IconFontKit"
  s.version           = "2.1.2"
  s.license           = "MIT"
  s.summary           = "Icon fonts toolkit for iOS."
  s.homepage          = "https://github.com/ElfSundae/IconFontKit"
  s.authors           = { "Elf Sundae" => "http://0x123.com" }
  s.source            = { :git => "https://github.com/ElfSundae/IconFontKit.git", :tag => s.version, :submodules => true }
  s.social_media_url  = "https://twitter.com/ElfSundae"

  s.platform              = :ios
  s.ios.deployment_target = "6.0"
  s.requires_arc          = true
  s.frameworks            = "CoreText"
  s.source_files          = "IconFontKit/IconFontKit.h"

  s.subspec "Core" do |ss|
    ss.source_files         = "IconFontKit/IFIcon.{h,m}"
  end

  s.subspec "FontAwesome" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFFontAwesome.{h,m}"
    ss.resource             = "IconFontKit/FontAwesome.otf"
  end

  s.subspec "Octicons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFOcticons.{h,m}"
    ss.resource             = "IconFontKit/octicons.ttf"
  end

  s.subspec "FoundationIcons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFFoundationIcons.{h,m}"
    ss.resource             = "IconFontKit/foundation-icons.ttf"
  end

  s.subspec "Ionicons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFIonicons.{h,m}"
    ss.resource             = "IconFontKit/ionicons.ttf"
  end

  s.subspec "MaterialDesignIcons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFMaterialDesignIcons.{h,m}"
    ss.resource             = "IconFontKit/materialdesignicons-webfont.ttf"
  end

  s.subspec "ElusiveIcons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFElusiveIcons.{h,m}"
    ss.resource             = "IconFontKit/elusiveicons-webfont.ttf"
  end

  s.subspec "MaterialIcons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFMaterialIcons.{h,m}"
    ss.resource             = "IconFontKit/MaterialIcons-Regular.ttf"
  end

  s.subspec "ZocialButtons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFZocialButtons.{h,m}"
    ss.resource             = "IconFontKit/zocial.ttf"
  end

  s.subspec "Typicons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFTypicons.{h,m}"
    ss.resource             = "IconFontKit/typicons.ttf"
  end

  s.subspec "OpenIconic" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFOpenIconic.{h,m}"
    ss.resource             = "IconFontKit/open-iconic.ttf"
  end

  s.subspec "MetrizeIcons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFMetrizeIcons.{h,m}"
    ss.resource             = "IconFontKit/Metrize-Icons.ttf"
  end

  s.subspec "Meteocons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFMeteocons.{h,m}"
    ss.resource             = "IconFontKit/meteocons.ttf"
  end

  s.subspec "MFGLabsIconset" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFMFGLabsIconset.{h,m}"
    ss.resource             = "IconFontKit/mfglabsiconset-webfont.ttf"
  end

  s.subspec "LineariconsFree" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFLineariconsFree.{h,m}"
    ss.resource             = "IconFontKit/Linearicons-Free.ttf"
  end

  s.subspec "IcoMoonFree" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFIcoMoonFree.{h,m}"
    ss.resource             = "IconFontKit/IcoMoon-Free.ttf"
  end

  s.subspec "HawconsFilled" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFHawconsFilled.{h,m}"
    ss.resource             = "IconFontKit/Hawcons-Filled.ttf"
  end

  s.subspec "HawconsStroke" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFHawconsStroke.{h,m}"
    ss.resource             = "IconFontKit/Hawcons-Stroke.ttf"
  end

  s.subspec "Dashicons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFDashicons.{h,m}"
    ss.resource             = "IconFontKit/dashicons.ttf"
  end

  s.subspec "Linea" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFLinea.{h,m}"
    ss.resource             = "IconFontKit/Linea.ttf"
  end

  s.subspec "Entypo" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFEntypo.{h,m}"
    ss.resource             = "IconFontKit/Entypo.ttf"
  end

  s.subspec "ThemifyIcons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFThemifyIcons.{h,m}"
    ss.resource             = "IconFontKit/themify.ttf"
  end

  s.subspec "StreamlineFree" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFStreamlineFree.{h,m}"
    ss.resource             = "IconFontKit/StreamlineFree.ttf"
  end

  s.subspec "Stroke7Icons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFStroke7Icons.{h,m}"
    ss.resource             = "IconFontKit/Pe-icon-7-stroke.ttf"
  end

  s.subspec "Devicons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFDevicons.{h,m}"
    ss.resource             = "IconFontKit/devicons.ttf"
  end

  s.subspec "LigatureSymbols" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFLigatureSymbols.{h,m}"
    ss.resource             = "IconFontKit/LigatureSymbols.ttf"
  end

  s.subspec "Dripicons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFDripicons.{h,m}"
    ss.resource             = "IconFontKit/dripicons.ttf"
  end

  s.subspec "OpenWebIcons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFOpenWebIcons.{h,m}"
    ss.resource             = "IconFontKit/openwebicons.ttf"
  end

  s.subspec "Genericons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFGenericons.{h,m}"
    ss.resource             = "IconFontKit/Genericons.ttf"
  end

  s.subspec "MapIcons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFMapIcons.{h,m}"
    ss.resource             = "IconFontKit/map-icons.ttf"
  end

  s.subspec "WeatherIcons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFWeatherIcons.{h,m}"
    ss.resource             = "IconFontKit/weathericons-regular-webfont.ttf"
  end

  s.subspec "EvilIcons" do |ss|
    ss.dependency           "IconFontKit/Core"
    ss.source_files         = "IconFontKit/IFEvilIcons.{h,m}"
    ss.resource             = "IconFontKit/EvilIcons.ttf"
  end
end
