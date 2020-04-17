@interface Car : NSObject{
    int num1, num2;
}

-(void) setData;
-(int) sum;
-(void) output;

@end


===============================
#import "Car.h"

@implementation Car
-(void) setData{
    num1 = 100;
    num2 = 200;
}
-(int) sum{
    return num1 + num2;
}
-(void) output{
    NSLog(@"num1=%d, num2=%d",num1, num2)
}

@end

=========================

#import <Foundation/Foundation.h>
#import "Car.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Car *car = [[Car alloc] init];
        NSLog(@"Car is %@",car);
        [car setData];
        NSLog(@"sum=%i",[car sum]);
        
        [car output];
        
    }
    return 0;
}
