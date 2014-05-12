//
//  AppDelegate.h
//  PaymentApp
//
//  Created by iapp on 05/05/14.
//  Copyright (c) 2014 iapp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PaymentViewController.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic)UINavigationController *navCon;
@property (strong, nonatomic)PaymentViewController *Paymentview;
@end
