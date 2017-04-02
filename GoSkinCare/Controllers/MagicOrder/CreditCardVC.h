//
//  CreditCardVC.h
//  GoSkinCare
//
//  Created by Ares on 4/14/16.
//  Copyright © 2016 Ares. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CreditCardCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIView* wrapper;
@property (weak, nonatomic) IBOutlet UIButton* optionButton;
@property (weak, nonatomic) IBOutlet UILabel* cardNumberLabel;

@end

@interface CreditCardVC : UIViewController

@property (nonatomic) BOOL showModally;

@end
