//
//  EPFMasterViewController.h
//  EPF
//
//  Created by appdev on 6/24/13.
//  Copyright (c) 2013 'Iolani School. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EPFDetailViewController;

#import <CoreData/CoreData.h>

@interface EPFMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) EPFDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
