
@interface Car : NSObject{
    int num1, num2;
}

-(void) setData;
-(int) sum;
-(void) output;

@end


===============================
#import "Car.h"

@implementation Car
-(void) setData{
    
}
-(int) sum{
    
}
-(void) output{
    
}
@end
=========================

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
       Car *car = [[Car alloc] init];
        NSLog(@"Car is %@",car);
    }
    return 0;
}
