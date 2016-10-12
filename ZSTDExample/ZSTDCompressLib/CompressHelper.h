//
//  CompressHelper.h
//  ZSTDExample
//
//  Created by libohao on 16/9/27.
//  Copyright © 2016年 libohao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CompressHelper : NSObject

+ (NSData*)compressData:(NSData*)data;
+ (NSData*)decompressData:(NSData*)sourceData;

@end
