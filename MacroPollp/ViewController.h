//
//  ViewController.h
//  MacroPollp
//
//  Created by Mushipa on 2015/1/2.
//  Copyright (c) 2015年 Mushipa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (IBAction)postItButtonPressed:(id)sender;

@property (weak, nonatomic) IBOutlet UITextView *tweetTextView;

@end

