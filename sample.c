//
//  main.m
//  sample8
//
//  Created by apple on 2020/4/18.
//  Copyright © 2020 pu. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface Parent:NSObject
{
    int num1;
}
@property int num1;
-(void) setData;
@end

@implementation Parent
@synthesize  num1;
-(void) setData{
    num1 = 666;
}
@end

@interface Child:Parent{
    int num2;
}
@property int num2;
-(void)setData:(int) n withNum2:(int) m;
-(void)print;
@end

@implementation Child
@synthesize num2;

-(void)print{
    NSLog(@"num1=%i, num2=%i", num1, num2);
}

-(void)setData:(int) n withNum2:(int) m{
    num1 = n;
    num2 = m;
}

@end

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Child *child = [[Child alloc] init];
        [child setData:100 withNum2:200];
        NSLog(@"num1=%i", child.num1);
        NSLog(@"num2=%i", child.num2);
        [child print];
       
        
    }
    return 0;
}
