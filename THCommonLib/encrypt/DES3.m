//
//  DESEncrypt.m
//  THCommonLib
//
//  Created by mishulin on 2017/3/16.
//  Copyright © 2017年 tele-hot. All rights reserved.
//

#import <CommonCrypto/CommonCryptor.h>
#import "DES3.h"
#import "Base64.h"

@implementation DESEncrypt : NSObject

/**
 * 加密向量8位数字长度，写死的
 **/
const NSString *iv = @"01234567";

#pragma mark- 加密算法
+(NSString *) encryptUseDES:(NSString *)plainText key:(NSString *)key
{
    NSString *ciphertext = nil;
    NSData *textData = [plainText dataUsingEncoding:NSUTF8StringEncoding];
    NSUInteger dataLength = [textData length];
    unsigned char buffer[1024];
    memset(buffer, 0, sizeof(char));
    size_t numBytesEncrypted = 0;
    CCCryptorStatus cryptStatus = CCCrypt(kCCEncrypt,
                                          kCCAlgorithm3DES,
                                          kCCOptionPKCS7Padding,
                                          [key UTF8String],
                                          kCCKeySize3DES,
                                          [iv UTF8String],
                                          [textData bytes],
                                          dataLength,
                                          buffer,
                                          1024,
                                          &numBytesEncrypted);
    if (cryptStatus == kCCSuccess) {
        NSData *data = [NSData dataWithBytes:buffer length:(NSUInteger)numBytesEncrypted];
        ciphertext = [Base64 encode:data];
    }
    
    return ciphertext;
}

#pragma mark- 解密算法
+(NSString *)decryptUseDES:(NSString *)cipherText key:(NSString *)key
{
    NSString *plaintext = nil;
    NSData *cipherdata = [Base64 decode:cipherText];
    unsigned char buffer[1024];
    memset(buffer, 0, sizeof(char));
    size_t numBytesDecrypted = 0;
    // kCCOptionPKCS7Padding|kCCOptionECBMode 最主要在这步
    CCCryptorStatus cryptStatus = CCCrypt(kCCDecrypt,
                                          kCCAlgorithm3DES,
                                          kCCOptionPKCS7Padding,
                                          [key UTF8String],
                                          kCCKeySize3DES,
                                          [iv UTF8String],
                                          [cipherdata bytes],
                                          [cipherdata length],
                                          buffer,
                                          1024,
                                          &numBytesDecrypted);
    if(cryptStatus == kCCSuccess) {
        NSData *plaindata = [NSData dataWithBytes:buffer length:(NSUInteger)numBytesDecrypted];
        plaintext = [[NSString alloc]initWithData:plaindata encoding:NSUTF8StringEncoding];
    }
    return plaintext;
}
@end
