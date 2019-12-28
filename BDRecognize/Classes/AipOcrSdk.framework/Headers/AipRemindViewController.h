//
//  AipRemindViewController.h
//  AipOcrSdk
//
//  Created by admin on 2019/12/27.
//  Copyright © 2019 baidu. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
//1.0.0.0
@interface AipRemindViewController : UIViewController

@property (nonatomic, copy) void (^handler)(UIImage *img);
@property (weak, nonatomic) IBOutlet UIButton *albumButton;

+(UIViewController *)ViewControllerWithHandler:(void (^)(UIImage *image))handler;

@end

NS_ASSUME_NONNULL_END
