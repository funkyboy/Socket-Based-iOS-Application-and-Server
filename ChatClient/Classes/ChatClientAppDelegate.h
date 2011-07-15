//
//  ChatClientAppDelegate.h
//  ChatClient
//
//  Created by cesarerocchi on 5/27/11.
//  Copyright 2011 studiomagnolia.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ChatClientViewController;

@interface ChatClientAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    ChatClientViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet ChatClientViewController *viewController;

@end

