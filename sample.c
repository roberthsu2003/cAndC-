//
//  main.m
//  sample9
//
//  Created by apple on 2020/4/18.
//  Copyright © 2020 pu. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface Coordinate:NSObject
{
    int x;
    int y;
}
@property int x, y;
@end

@implementation Coordinate
@synthesize x, y;

@end

@interface Circle: Coordinate
{
    int radius;
}
@property int radius;
-(void) setX:(int) a andY:(int) b;
-(void) setRadius:(int) r;
-(double) area;
@end

@implementation Circle
@synthesize radius;

-(void) setX:(int) a andY:(int) b{
    x = a;
    y = b;
}

/*
-(void) setRadius:(int) r{
    NSLog(@"自訂的setRadius");
    radius = r;
}
*/

-(double) area{
    return 3.1415962 * radius * radius;
}


@end

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Coordinate *obj = [[Coordinate alloc] init];
        obj.x = 10;
        obj.y = 20;
        
        Circle *circle = [[Circle alloc] init];
        [circle setX:66 andY:88];
        circle.radius = 10;
        
        NSLog(@"Coordinate is (%i, %i)", circle.x, circle.y);
        NSLog(@"radius=%i", circle.radius);
        NSLog(@"area=%.2f", [circle area]);
        
    }
    return 0;
}
