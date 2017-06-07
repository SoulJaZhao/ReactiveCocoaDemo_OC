//
//  TwoViewController.h
//  ReactiveCocoa_OC
//
//  Created by SoulJa on 2017/6/7.
//  Copyright © 2017年 sdp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ReactiveObjC/ReactiveObjC.h>

@interface TwoViewController : UIViewController
@property (nonatomic, strong) RACSubject *delegateSignal;
@end
