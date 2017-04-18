//
//  NSString+Ex.h
//  THCommonLib
//
//  Created by mishulin on 2017/4/10.
//  Copyright © 2017年 tele-hot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (Ex)

/**
 去除字符串空格

 @return 不带空格的字符串
 */
- (NSString *)trim;

/**
 对字符串进行BASE64 编码，并且返回结果
 
 @return Base64 密文
 */
- (NSString *)base64Encode;

/**
 对Base64位的字符串进行BASE64解码，并且返回结果

 @return 解密后的明文
 */
- (NSString *)base64Decode;

/**
 UrlEncode

 @return urlEndcode字符串
 */
- (NSString *)URLEncode;


/**
 采用制定编码的UrlEncode

 @param encoding 编码类型
 @return urlEncode字符串
 */
- (NSString *)URLEncodeUsingEncoding:(NSStringEncoding)encoding;


/**
 UrlDecode

 @return urlDecode的字符串
 */
- (NSString *)URLDecode;


/**
 采用制定编码的UrlDecode

 @param encoding 编码类型
 @return urlDecode解码字符串
 */
- (NSString *)URLDecodeUsingEncoding:(NSStringEncoding)encoding;


/**
 返回字符串所占用的尺寸

 @param font 字体
 @param maxSize 最大尺寸
 @return 按照最大尺寸计算当前文本占用的矩形大小
 */
- (CGSize)sizeWithFont:(UIFont *)font maxSize:(CGSize)maxSize;

/**
 是否有效的邮箱

 @return 是邮箱：true，否则：false
 */
- (BOOL)isEmail;

/**
 是否有效的手机号码

 @return 是手机号：true 否则：false
 */
- (BOOL)isPhone;

/**
 是否是url地址

 @return 是url地址：true 否则：false
 */
- (BOOL)isUrl;
@end
