//
//  DTSObject.h
//  DTStorage
//
//  Created by Diogo Tridapalli on 5/11/14.
//  Copyright (c) 2014 Diogo Tridapalli. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DTSObject : NSObject

@property (nonatomic, readonly) NSNumber *objectId;

+ (NSDictionary *)propertiesTypes;

+ (NSString *)tableName;

+ (NSArray *)arrayWithObjectIds;
+ (NSArray *)arrayWithObjectIdsDesc;
+ (NSArray *)arrayWithIdsWhereProperty:(NSString *)property
                              hasValue:(id)value;

+ (instancetype)newObjectWithId:(NSNumber *)objectId;

- (void)save;
- (void)delete;

@end

extern NSString * const DTSObjectIdKey;