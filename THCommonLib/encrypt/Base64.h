//
//  Base64.h
//  THCommonLib
//
//  Created by mishulin on 2017/3/16.
//  Copyright © 2017年 tele-hot. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface Base64 : NSObject

/**
 数据Base64 加密
 
 @param data 待加密数据data对象
 @return 返回Base64密文数据
 */
+(NSString *)encode:(NSData *)data;

/**
 数据Base64 加密
 
 @param str 待加密字符串
 @return 返回Base64密文数据
 */
+(NSString *)encodeString:(NSString *)str;


/**
 数据Base64 解密

 @param dataString 待解密Base64密文字符串
 @return Base解密后的明文
 */
+(NSData *)decode:(NSString *)dataString;

/**
 数据Base64 解密
 
 @param dataString 待解密Base64密文字符串
 @return Base解密后的明文
 */
+(NSString *)decodeString:(NSString *)dataString;

@end
