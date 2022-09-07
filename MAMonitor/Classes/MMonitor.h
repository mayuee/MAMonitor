//
//  MMonitor.h
//  RunloopMonitorDemo
//
//  Created by mazb on 2022/9/8.
//  Copyright © 2022 MZB. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMonitor : NSObject

+ (instancetype) sharedInstance;
- (void) startMonitor;
- (void) endMonitor;
- (void) printLogTrace;

@end

NS_ASSUME_NONNULL_END
