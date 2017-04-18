//
//  MyRSAEncrypt.h
//  THCommonLib
//      RSA 非对称加密算法。
//
//  Created by mishulin on 2017/3/16.
//  Copyright © 2017年 tele-hot. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RSAEncrypt : NSObject

/**
 RSA加密

 @param string 要加密的文本
 @param publicKey 公钥
 @return 加密后的密文数据
 */
+ (NSString *)encryptString:(NSString *)string publicKey:(NSString *)publicKey;

/**
 RSA加密

 @param data 要加密的data数据
 @param publicKey 公钥
 @return 返回加密后的密文
 */
+ (NSString *)encryptData:(NSData *)data publicKey:(NSString *)publicKey;
/*
 RSA解密
 cipherString: 要解密的密文文本
 privateKey：解密的私钥
 */
+(NSString *)decryptString:(NSString *)cipherString privateKey:(NSString *)privateKey ;
@end
