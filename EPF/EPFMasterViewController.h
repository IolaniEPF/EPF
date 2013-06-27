//
//  EPFMasterViewController.h
//  EPF
//
//  Created by Blake Tsuzaki on 6/24/13.
//  Copyright (c) 2013 'Iolani School. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
@class EPFDetailViewController;

#import <CoreData/CoreData.h>

@interface EPFMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) EPFDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
