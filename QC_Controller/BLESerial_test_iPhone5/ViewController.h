//
//  ViewController.h
//  BLESerial_test_iPhone5
//
//  Created by 石井 孝佳 on 2013/11/12.
//  Copyright (c) 2013年 浅草ギ研. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{

    UITextField* _textField;
    UIButton* _connectButton;
    UIButton* _disconnectButton;

}

- (void)connect;
- (void)disconnect;
- (void)emergencyStop;

- (void)otherThread;
- (void)loopBackground;

@end
