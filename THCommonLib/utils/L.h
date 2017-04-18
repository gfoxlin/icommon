//
//  L.h
//  THCommonLib
//
//  Created by mishulin on 2017/4/10.
//  Copyright © 2017年 tele-hot. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface L : NSObject

+ (L*)getInstance;

- (void)Debug:(NSString *) msg;

- (void)Info:(NSString *) msg;

- (void)Warn:(NSString *) msg;

- (void)Error:(NSString *) err;

@end
