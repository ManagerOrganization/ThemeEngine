//
//  TEDocumentViewController.h
//  ThemeEngine
//
//  Created by Alexander Zielenski on 6/16/15.
//  Copyright © 2015 Alex Zielenski. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "TEElementsController.h"
#import "TERenditionsController.h"
#import "TEInspectorController.h"

@interface TEDocumentViewController : NSSplitViewController
@property IBOutlet TEElementsController *elementsController;
@property IBOutlet TERenditionsController *renditionsController;
@property IBOutlet TEInspectorController *inspectorController;

- (IBAction)sidebarToggle:(NSSegmentedControl *)sender;
@end