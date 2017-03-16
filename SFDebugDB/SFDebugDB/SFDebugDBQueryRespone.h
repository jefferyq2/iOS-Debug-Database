//
//  SFDebugDBQueryRespone.h
//  SFDebugDB
//
//  Created by Jakey on 2017/3/1.
//  Copyright © 2017年 www.skyfox.org. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFDebugDBRespone.h"
@interface SFDebugDBQueryRespone : SFDebugDBRespone
+ (NSString*)getTableListResponse:(NSString*)route databases:(NSDictionary*)databases;
+ (NSString*)getAllDataFromTheTableResponse:(NSString*)route;
+ (NSString*)executeQueryAndGetResponse:(NSString*)route;
+ (NSString*)updateTableDataAndGetResponse:(NSString*)route;
+ (NSString*)deleteTableDataAndGetResponse:(NSString*)route;
+ (NSData*)getDatabase:(NSString*)route databases:(NSDictionary*)databases;
+ (NSString*)getContenTypeWithRoute:(NSString*)route;
+ (NSString*)getDBNameWithRoute:(NSString*)route;
@end
