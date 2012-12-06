//
//  MasterViewController.h
//  ScaryBugs
//
//  Created by Dean Clark on 12/5/12.
//  Copyright (c) 2012 Dean Clark. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController
@property (strong) NSMutableArray *bugs;

@property (strong, nonatomic) DetailViewController *detailViewController;


@end
