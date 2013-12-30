//
//  SignupViewController.h
//  Ribbit
//
//  Created by Emilia Kirschenbaum on 12/30/13.
//  Copyright (c) 2013 BedTimeTaco. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignupViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
@property (weak, nonatomic) IBOutlet UITextField *emailField;

- (IBAction)signup:(id)sender;

@end
