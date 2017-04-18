//
//  DESEncrypt.h
//  THCommonLib
//  3DES - 对称加密算法
//
//  Created by mishulin on 2017/3/16.
//  Copyright © 2017年 tele-hot. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DESEncrypt : NSObject

/**
 对称加密算法
 
 @param plainText 待加密字符串
 @param key 加密密码key - 要求密码长度大于32位
 @return 加密后的密文数据
 */
+(NSString *) encryptUseDES:(NSString *)plainText key:(NSString *)key;

/**
 对称加密解密算法
 
 @param cipherText 待解密密文字符串
 @param key 加密／解密密码key - 要求密码长队大于32位
 @return 解密后的密文数据
 */
+(NSString *) decryptUseDES:(NSString *)cipherText key:(NSString *)key;

@end
