//
//  ChatClientViewController.h
//  ChatClient
//
//  Created by cesarerocchi on 5/27/11.
//  Copyright 2011 studiomagnolia.com. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ChatClientViewController : UIViewController <NSStreamDelegate, UITableViewDelegate, UITableViewDataSource> {

	UIView			*joinView;
	UIView			*chatView;
	NSInputStream	*inputStream;
	NSOutputStream	*outputStream;
	UITextField		*inputNameField;	
	UITextField		*inputMessageField;
	UITableView		*tView;
	NSMutableArray	*messages;
	
}


@property (nonatomic, retain) IBOutlet UIView *joinView;
@property (nonatomic, retain) IBOutlet UIView *chatView;

@property (nonatomic, retain) NSInputStream *inputStream;
@property (nonatomic, retain) NSOutputStream *outputStream;

@property (nonatomic, retain) IBOutlet UITextField	*inputNameField;
@property (nonatomic, retain) IBOutlet UITextField	*inputMessageField;

@property (nonatomic, retain) IBOutlet UITableView	*tView;
@property (nonatomic, retain) NSMutableArray *messages;

- (IBAction) joinChat;
- (void) initNetworkCommunication;
- (IBAction) sendMessage;
- (void) messageReceived:(NSString *)message;

@end

