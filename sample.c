//
//  ViewController.m
//  sample4
//
//  Created by apple on 2020/4/17.
//  Copyright © 2020 pu. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UILabel *message;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.message.text = @"Hello! PU";
}


@end
