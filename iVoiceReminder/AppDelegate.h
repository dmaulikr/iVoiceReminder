//
//  AppDelegate.h
//  iVoiceReminder
//
//  Created by iStig on 13-4-17.
//  Copyright (c) 2013年 iStig. All rights reserved.
//

#import <UIKit/UIKit.h>

@class iVoiceController;

@interface AppDelegate : UIResponder <UIApplicationDelegate,UIAlertViewDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) iVoiceController *iVoiceController;
@property (retain, nonatomic) NSMutableArray *arrayList;
@property(nonatomic,retain) NSDate *dateForCompare;

- (void)resetClock:(NSDate*)date;
-(void)refreshNotification;
@end
