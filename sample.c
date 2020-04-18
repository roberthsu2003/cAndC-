//
//  main.m
//  sample6
//
//  Created by apple on 2020/4/18.
//  Copyright © 2020 pu. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface MyClass:NSObject
{
    int num1, num2;
    int total;
}
@property int num1, num2;

-(int)total;
@end



@implementation MyClass
@synthesize num1, num2;

-(int)total{
    return num1 + num2;
}
@end

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        MyClass *obj = [[MyClass alloc] init];
        [obj setNum1:100];
        [obj setNum2:200];
        
        int total = [obj total];
        NSLog(@"num1=%d, num2=%d", obj.num1, obj.num2);
        NSLog(@"total =%d", total);
    }
    return 0;
}
