//
//  GSCAlertVC.h
//  GoSkinCare
//
//  Created by Ares on 11/20/15.
//  Copyright © 2015 Ares. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol GSCAlertDelegate <NSObject>

- (void)alertOKClicked;
- (void)confirmOKClicked;
- (void)confirmCancelClicked;

@end

@interface GSCAlertVC : UIViewController

@property (strong, nonatomic) id<GSCAlertDelegate> delegate;

@property (strong, nonatomic) NSString* alertTitle;
@property (strong, nonatomic) NSString* alertMessage;

- (void)setAlertType:(GSCAlertType)alertType;

@end
