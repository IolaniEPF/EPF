//
//  EPFDetailViewController.h
//  EPF
//
//  Created by appdev on 6/24/13.
//  Copyright (c) 2013 'Iolani School. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EPFDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
