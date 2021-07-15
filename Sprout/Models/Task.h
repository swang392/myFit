//
//  Task.h
//  Sprout
//
//  Created by Sarah Wang on 7/13/21.
//

#import <Parse/Parse.h>
#import <Foundation/Foundation.h>
#import "Goal.h"

NS_ASSUME_NONNULL_BEGIN

@interface Task : PFObject<PFSubclassing>

typedef enum taskStatus {complete, incomplete} taskStatus;
@property (nonatomic) NSTimeInterval *duration;
//@property (nonatomic) NSDate *createdAt;
//@property (nonatomic) NSDate *expiresAt;
//@property (nonatomic) taskStatus *tastkStatus;
@property (nonatomic) BOOL completed;
@property (nonatomic) NSString *type;
@property (nonatomic) NSString *taskName;
//@property (nonatomic) Goal *goal;
 
+ (void)createTaskWithName:(NSString *)taskName withDuration:(NSTimeInterval * _Nullable)duration
                  withType:(NSString * _Nullable)type withStatus:(BOOL *)completed withCompletion:(PFBooleanResultBlock _Nullable)completion;

- (instancetype)initTaskWithName:(NSString *)taskName
                        withType:(NSString * _Nullable)type withStatus:(BOOL * _Nullable)completed;
//- (instancetype)initTaskWithName:(NSString *)taskName withDuration:(NSTimeInterval * _Nullable)duration
  //                withType:(NSString * _Nullable)type withStatus:(BOOL * _Nullable)completed;

@end

NS_ASSUME_NONNULL_END
