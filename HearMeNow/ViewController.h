//
//  ViewController.h
//  HearMeNow
//
//  Created by User on 14-10-29.
//  Copyright (c) 2014年 Yan RuiLin. All rights reserved.
//

#import <UIKit/UIKit.h>

//导入av头文件
#import <AVFoundation/AVFoundation.h>

//添加协议<AVAudioPlayerDelegate, AVAudioRecorderDelegate>到viewcontroller
@interface ViewController : UIViewController<AVAudioPlayerDelegate, AVAudioRecorderDelegate>

@property (weak, nonatomic) IBOutlet UIButton *recordButton;
@property (weak, nonatomic) IBOutlet UIButton *playButton;
- (IBAction)recordPressed:(id)sender;
- (IBAction)playPressed:(id)sender;
@end
