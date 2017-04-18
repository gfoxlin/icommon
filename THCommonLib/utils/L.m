//
//  L.m
//  THCommonLib
//
//  Created by mishulin on 2017/4/10.
//  Copyright © 2017年 tele-hot. All rights reserved.
//

#import "L.h"

@implementation L


+ (L*)getInstance{
    static L * log = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        log = [[L alloc]init];
    });
    
    return log;
}

- (void)Debug:(NSString *) msg{
    NSLog(@"Debug --> %@", msg);
}

- (void)Info:(NSString *) msg{
    NSLog(@"Info --> %@", msg);
}

- (void)Warn:(NSString *) msg{
    NSLog(@"Warn --> %@", msg);
}

- (void)Error:(NSString *) err{
        NSLog(@"Error --> %@", err);
}

@end
