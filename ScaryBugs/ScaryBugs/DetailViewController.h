//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by Dean Clark on 12/5/12.
//  Copyright (c) 2012 Dean Clark. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
