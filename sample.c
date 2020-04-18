//
//  main.m
//  sample7
//
//  Created by apple on 2020/4/18.
//  Copyright © 2020 pu. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface MyClass:NSObject{
    int num1, num2;
    int total;
}
@property int num1, num2;
-(MyClass *) initWith:(int) n andM:(int) m;
-(void) setNum1:(int) n andNum2:(int)m;
-(int) total;
@end


@implementation MyClass
@synthesize num1, num2;


-(MyClass *) initWith:(int) n andM:(int) m{
    self = [super init];
    if(self){
        [self setNum1:n andNum2:m];
    }
    return self;
}

-(void) setNum1:(int) n andNum2:(int)m{
    self.num1 = n;
    self.num2 = m;
}

-(int) total{
    return self.num1 + self.num2;
}
@end


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        MyClass *obj = [[MyClass alloc] initWith:100 andM:200];
        int total = [obj total];
    }
    return 0;
}
