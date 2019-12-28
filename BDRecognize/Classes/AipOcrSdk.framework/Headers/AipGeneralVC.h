//
//  AipGeneralVC.h
//  OCRLib
//
//  Created by Yan,Xiangda on 2017/2/16.
//  Copyright © 2017年 Baidu. All rights reserved.
//

#import <UIKit/UIKit.h>

#define screenWidth [UIScreen mainScreen].bounds.size.width
#define screenHeight [UIScreen mainScreen].bounds.size.height

inline static CGFloat H(CGFloat h){
    return (screenHeight*(h))/667.0;
}

inline static CGFloat W(CGFloat w){
    return (screenWidth*(w))/375.0;
}

@interface AipGeneralVC : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *captureButton;
@property (weak, nonatomic) IBOutlet UIButton *closeButton;
@property (weak, nonatomic) IBOutlet UIButton *lightButton;
@property (weak, nonatomic) IBOutlet UIButton *checkCloseBtn;
@property (weak, nonatomic) IBOutlet UIButton *checkChooseBtn;
@property (weak, nonatomic) IBOutlet UIButton *transformButton;
@property (weak, nonatomic) IBOutlet UIView *checkView;
@property (weak, nonatomic) IBOutlet UIView *toolsView;


@property (nonatomic, copy) void (^handler)(UIImage *);
@property (weak, nonatomic) IBOutlet UIButton *albumButton;

+(UIViewController *)ViewControllerWithHandler:(void (^)(UIImage *image))handler;
- (IBAction)captureIDCard:(id)sender;

@end
