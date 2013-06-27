//
//  EPFAppDelegate.h
//  EPF
//
//  Created by appdev on 6/24/13.
//  Copyright (c) 2013 'Iolani School. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ParseStarterProjectViewController;
@interface EPFAppDelegate : NSObject <UIApplicationDelegate>{}

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
//@property (nonatomic, strong) IBOutlet ParseStarterProjectViewController *viewController;


- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
