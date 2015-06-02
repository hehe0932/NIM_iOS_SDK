//
//  NIMMessageObjectProtocol.h
//  NIMLib
//
//  Created by Netease.
//  Copyright (c) 2015年 Netease. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NIMGlobalDefs.h"
@class NIMMessage;
/**
 *  消息体协议
 */
@protocol NIMMessageObject <NSObject>

/**
 *  消息体所在的消息对象
 */
@property (nonatomic, weak) NIMMessage * message;


@end
