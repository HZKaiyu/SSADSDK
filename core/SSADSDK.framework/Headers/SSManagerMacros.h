//
//  SSManagerMacros.h
//  ADSDK
//
//  Created by 张帅 on 2018/8/20.
//  Copyright © 2018年 SimoTeam. All rights reserved.
//

#ifndef SSManagerMacros_h
#define SSManagerMacros_h

/// 广告回调类型
typedef NS_ENUM(NSInteger, ADCallBackHandleType) {
    // 初始化SDK回调
    ADCallBackHandleTypeInitialize = 100,
    // 广告请求回调
    ADCallBackHandleTypeRequest = 1000,
    // 广告展示回调
    ADCallBackHandleTypeShow = 2000,
    // 广告点击回调
    ADCallBackHandleTypeClick = 3000,
    // 关闭广告回调 （关闭按钮）
    ADCallBackHandleTypeClose = 4000
};

typedef NS_ENUM(NSInteger, ADRequestCode) {
    // 没有广告填充 广告data数据为空
    ADRequestCodeNoAdFill = 1101,
    // 素材异常 素材无法下载
    ADRequestCodeMaterialError = 1103,
    // 素材链接异常 素材链接为空
    ADRequestCodeMaterialUrlError = 1104,
    // 广告位id 和 控制协议下发的id 不匹配
    ADRequestCodeInvalidPlacementID = 1105,
};

/* 调用广告回调block
    type 回调类型
    code 0成功,非0时失败 其中type为ADCallBackHandleTypeRequest有特殊异常ADRequestCode
    msg  回调信息
 */
typedef void(^ADCallBackHandle)(ADCallBackHandleType type, NSInteger code, NSString * _Nullable msg);

#endif /* SSManagerMacros_h */
