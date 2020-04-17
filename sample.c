
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
        // insert code here...
        NSLog(@"data type bytes");
        NSLog(@"int:%lu",sizeof(int));
        NSLog(@"double:%lu",sizeof(double));
        NSLog(@"char:%i",sizeof(char));
    }
    return 0;
}
