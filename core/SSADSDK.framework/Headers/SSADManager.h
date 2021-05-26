//
//  SSADManager.h
//  ADSDK
//
//  Created by 张帅 on 2018/6/15.
//  Copyright © 2018年 SimoTeam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SSManagerMacros.h"


@interface SSADManager : NSObject

/**
 初始化SDK
 
 @param sdkID 申请的SDKID
 */
+ (void)SS_ADSDKID:(NSString *_Nonnull)sdkID;

/**
 加载全屏开屏广告

 @param placementID 开屏广告位ID
 @param completeHandle 回调 详细见SSManagerMacros.h
 */
+ (void)loadLaunchADWithPlacementID:(NSString *_Nonnull)placementID completeHandle:(nullable ADCallBackHandle)completeHandle;

/**
 加载带logo的开屏广告
 
 @param placementID 开屏广告位ID
 @param bottomView  底部视图
 @param completeHandle 回调 详细见SSManagerMacros.h
 */
+ (void)loadLaunchADWithPlacementID:(NSString *_Nonnull)placementID bottomView:(UIView *_Nullable)bottomView completeHandle:(nullable ADCallBackHandle)completeHandle;

/**
 加载插屏广告

 @param placementID 插屏广告位ID
 @param completeHandle 回调 详细见SSManagerMacros.h
 */
+ (void)loadPlaqueADWithPlacementID:(NSString *_Nonnull)placementID completeHandle:(nullable ADCallBackHandle)completeHandle;

/**
 加载横幅广告

 @param placementID 横幅广告位ID
 @param renderView 横幅展示的容器View  可以传空，默认位置在屏幕最上方（c有导航条会在导航条下方）
 @param completeHandle 回调 详细见SSManagerMacros.h
 */
+ (void)loadBannerADWithPlacementID:(NSString *_Nonnull)placementID renderView:(nullable UIView  *)renderView completeHandle:(nullable ADCallBackHandle)completeHandle;

/**
 原生广告

 @param placementID 原生广告位ID
 @param renderView 显示原生广告的容器View 可以传空，
 @param completeHandle 回调 详细见SSManagerMacros.h
 */
+ (void)loadNativeADWithPlacementID:(NSString *_Nonnull)placementID renderView:(nullable UIView  *)renderView completeHandle:(nullable ADCallBackHandle)completeHandle;

/**
 视频广告

 @param placementID 原生广告位ID
 @param renderView 显示原生广告的容器View 可以传空，
 @param completeHandle 回调 详细见SSManagerMacros.h
 */
+ (void)loadVideoADWithPlacementID:(NSString *_Nonnull)placementID renderView:(nullable UIView  *)renderView completeHandle:(nullable ADCallBackHandle)completeHandle;

/**
 激励视频广告

 @param placementID 激励广告位ID
 @param completeHandle 回调 详细见SSManagerMacros.h
 */
+ (void)loadRewardVideoADWithPlacementID:(NSString *_Nonnull)placementID completeHandle:(nullable ADCallBackHandle)completeHandle;

#pragma mark --- 需要上报的时候一定要上报
+ (void)mustReport;

@end

