//
//  YHJUtil.h
//  根据图片URL获取图片尺寸
//
//  Created by 阳光 on 16/12/4.
//  Copyright © 2016年 阳光. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface YHJUtil : NSObject

#pragma mark -
// 根据图片url获取图片尺寸
+(CGSize)getImageSizeWithURL:(id)imageURL;

//  获取PNG图片的大小
+(CGSize)getPNGImageSizeWithRequest:(NSMutableURLRequest *)request;

//  获取gif图片的大小
+(CGSize)getGIFImageSizeWithRequest:(NSMutableURLRequest *)request;

//  获取jpg图片的大小
+(CGSize)getJPGImageSizeWithRequest:(NSMutableURLRequest*)request;



@end
