//
//  ScaryBugData.h
//  ScaryBugs
//
//  Created by Dean Clark on 12/5/12.
//  Copyright (c) 2012 Dean Clark. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ScaryBugData : NSObject

@property (strong) NSString *title;
@property (assign) float rating;

- (id)initWithTitle:(NSString*)title rating:(float)rating;

@end
