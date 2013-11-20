//
//  UIButton+UIButtonImageWithLable.h
//  RESwitchExample
//
//  Created by bunsman on 13-11-20.
//  Copyright (c) 2013年 Bunsman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (UIButtonImageWithLable)

- (void) setImage:(UIImage *)image withHorizontalTitle:(NSString *)title leftTitle:(BOOL)left forState:(UIControlState)stateType ;
- (void) setImage:(UIImage *)image withVerticalTitle:(NSString *)title topTitle:(BOOL)top  forState:(UIControlState)stateType;

@end
