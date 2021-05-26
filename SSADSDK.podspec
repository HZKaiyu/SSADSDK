Pod::Spec.new do |spec|
  spec.name         = "SSADSDK"
  spec.version      = "1.1.1"
  spec.summary      = " HZKaiyu广告sdk"
  spec.homepage     = "https://github.com/HZKaiyu/SSADSDK"
  spec.license	= { :type => "MIT", :file => "LICENSE" }
  spec.author       = { "Kaiyu" => "zhanggewangluocn@163.com" }
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "https://github.com/HZKaiyu/SSADSDK.git", :tag => "#{spec.version}" }
  spec.vendored_frameworks = 'core/SSADSDK.framework'
  spec.resources = "core/SSADImages.bundle"
  spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.static_framework = true
  spec.requires_arc = true
  spec.frameworks = "SystemConfiguration", "CoreTelephony", "AdSupport", "CoreLocation", "CoreMedia", "UIKit", "Foundation", "CFNetwork", "AVFoundation", "WebKit"
  spec.dependency 'GDTMobSDK'
  
end
