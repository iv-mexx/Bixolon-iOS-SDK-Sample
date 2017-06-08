//
//  ViewController.m
//  BixolonExample
//
//  Created by Markus Chmelar on 08/06/2017.
//  Copyright © 2017 Innovaptor OG. All rights reserved.
//

#import "ViewController.h"
#import "BixolonPrinter.h"

@interface ViewController ()
@property(nonatomic, strong)BixolonPrinter *printer;
@end

@implementation ViewController

- (void)viewDidLoad {
  [super viewDidLoad];
  self.printer = [[BixolonPrinter alloc] init];
}

- (IBAction)print:(id)sender {
  [self.printer printTest];
}

@end
