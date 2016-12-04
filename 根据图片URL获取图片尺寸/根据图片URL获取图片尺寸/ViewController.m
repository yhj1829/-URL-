//
//  ViewController.m
//  根据图片URL获取图片尺寸
//
//  Created by 阳光 on 16/12/4.
//  Copyright © 2016年 阳光. All rights reserved.
//

#import "ViewController.h"
#import "YHJUtil.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
   
    NSString *url=@"http://img.bbs.ivf-bb.com/147805153412052716911.png";
    
    CGSize size=[YHJUtil getImageSizeWithURL:url];
    CGFloat w=CGSizeFromString(NSStringFromCGSize(size)).width;
    CGFloat h=CGSizeFromString(NSStringFromCGSize(size)).height;
    
    NSLog(@"w--%.1f\nh---%.1f",w,h);
    
}


@end
