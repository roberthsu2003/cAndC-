@interface MyClass : NSObject{
    int num1, num2;
}
-(void) setNum1:(int) n;
-(void) setNum2:(int) m;

-(int)num1;
-(int)num2;

@end

===============================
#import "MyClass.h"

@implementation MyClass
-(void) setNum1:(int) n{
    num1 = n;
}
-(void) setNum2:(int) m{
    num2 = m;
}

-(int)num1{
    return num1;
}

-(int)num2{
    return num2;
}

@end

=========================
#import <Foundation/Foundation.h>
#import "MyClass.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        MyClass *obj = [[MyClass alloc] init];
        [obj setNum1:100];
        [obj setNum2:200];
        
    }
    return 0;
}
