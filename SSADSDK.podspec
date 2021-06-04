Pod::Spec.new do |spec|
  spec.name         = "SSADSDK"
  spec.version      = "1.1.8"
  spec.summary      = "HZKaiyu广告sdk"
  spec.homepage     = 'https://github.com/HZKaiyu/SSADSDK'
  spec.license	= { :type => "MIT", :file => "LICENSE" }
  spec.author       = { "Kaiyu" => "zhanggewangluocn@163.com" }
  spec.platform     = :ios, '9.0'
  spec.source       = { :git => "https://github.com/HZKaiyu/SSADSDK.git", :tag => "#{spec.version}" }
  # spec.source       = { :git => "https://github.com/HZKaiyu/SSADSDK.git" }
  spec.vendored_frameworks = 'core/SSADSDK.framework'
  spec.resources = 'core/SSADImages.bundle'
  spec.public_header_files = 'core/SSADSDK.framework/Headers/*h'
  spec.source_files = 'core/SSADSDK.framework/Headers/*'
  spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.static_framework = true
  spec.requires_arc = true
  spec.frameworks = 'SystemConfiguration', 'CoreTelephony', 'AdSupport', 'CoreLocation', 'CoreMedia', 'UIKit', 'Foundation', 'CFNetwork', 'AVFoundation'
  spec.weak_framework = 'WebKit'
  spec.xcconfig = { 'HEADER_SEARCH_PATHS' => '$(SDKROOT)/usr/include/libxml2' }
  spec.dependency 'GDTMobSDK'
  
end
