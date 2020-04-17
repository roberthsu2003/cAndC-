//
//  MyClass.h
//  sample5
//
//  Created by apple on 2020/4/17.
//  Copyright © 2020 pu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MyClass : NSObject
{
    int num1, num2;
    int total;
}
@property int num1, num2;
@end

NS_ASSUME_NONNULL_END


======================================

#import "MyClass.h"

@implementation MyClass
@synthesize num1, num2;

@end


=======================

#import <Foundation/Foundation.h>
#import "MyClass.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        MyClass *obj = [[MyClass alloc] init];
        int total;
        [obj setNum1:100];
        [obj setNum2:200];
        
        NSLog(@"num1=%d, num2=%d", [obj num1], [obj num2])
    }
    return 0;
}
