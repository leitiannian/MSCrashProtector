//
//  NSArray+MSSafe.h
//  
//
//  Created by J on 2014/2/26.
//  Copyright © 2014年 J. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (MSSafe)

- (id)objectAtIndexSafe:(NSUInteger)index;
- (id)objectAtIndex:(NSUInteger)index kindOfClass:(Class)aClass;
- (id)objectAtIndex:(NSUInteger)index memberOfClass:(Class)aClass;
- (id)objectAtIndex:(NSUInteger)index defaultValue:(id)value;
- (NSString *)stringAtIndex:(NSUInteger)index defaultValue:(NSString *)value;
- (NSNumber *)numberAtIndex:(NSUInteger)index defaultValue:(NSNumber *)value;
- (NSDictionary *)dictionaryAtIndex:(NSUInteger)index defaultValue:(NSDictionary *)value;
- (NSArray *)arrayAtIndex:(NSUInteger)index defaultValue:(NSArray *)value;
- (NSData *)dataAtIndex:(NSUInteger)index defaultValue:(NSData *)value;
- (NSDate *)dateAtIndex:(NSUInteger)index defaultValue:(NSDate *)value;
- (float)floatAtIndex:(NSUInteger)index defaultValue:(float)value;
- (double)doubleAtIndex:(NSUInteger)index defaultValue:(double)value;
- (NSInteger)integerAtIndex:(NSUInteger)index defaultValue:(NSInteger)value;
- (NSUInteger)unintegerAtIndex:(NSUInteger)index defaultValue:(NSUInteger)value;
- (BOOL)boolAtIndex:(NSUInteger)index defaultValue:(BOOL)value;

@end


@interface NSMutableArray (MSSafe)

- (void)removeObjectAtIndexInBoundary:(NSUInteger)index;
- (void)insertObject:(id)anObject atIndexInBoundary:(NSUInteger)index;
- (void)replaceObjectAtInBoundaryIndex:(NSUInteger)index withObject:(id)anObject;

// 排除nil 和 NSNull
- (void)addObjectSafe:(id)anObject;

@end

