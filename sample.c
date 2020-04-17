#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Student : NSObject
-(void) setChinese:(double) a setEnglish:(double) b setMath:(double) c;
-(void) average;
-(void)convertGrade:(double) g;
@end

NS_ASSUME_NONNULL_END

======================================

#import "Student.h"
@interface Student(){
        int chinese;
        int english;
        int math;
}

@end


@implementation Student
-(void) setChinese:(double) a setEnglish:(double) b setMath:(double) c{
    chinese = a;
    english = b;
    math = c;
    NSLog(@"Chinese=%.2d, English=%.2d, mathecatic=%.2d", chinese, english, math);
}

-(void) average{
    double aver;
    aver = (chinese + english + math) / 3.0;
    NSLog(@"average = %.2f", aver);
    [self convertGrade:aver];
}

-(void)convertGrade:(double) g{
    if(g >= 85){
        NSLog(@"您的分數是A");
    }else if (g >= 75){
        NSLog(@"您的分數是B");
    }else if (g >= 65){
        NSLog(@"您的分數是C");
    }else{
        NSLog(@"您的分數是D");
        
    }
    
}
@end


=======================

#import <Foundation/Foundation.h>
#import "Student.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Student *stu1 = [[Student alloc] init];
        Student *stu2 = [[Student alloc] init];
        NSLog(@"Student John:");
        [stu1 setChinese:78 setEnglish:65 setMath:92];
        [stu2 setChinese:95 setEnglish:85 setMath:90];
        [stu1 average];
        [stu2 average];
    }
    return 0;
}
