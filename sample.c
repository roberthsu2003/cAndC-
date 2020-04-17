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
