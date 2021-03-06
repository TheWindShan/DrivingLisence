//
//  PanduanCell.h
//  kaoshi
//
//  Created by 王颜华 on 15/11/9.
//  Copyright © 2015年 第一小组. All rights reserved.
//

#import <UIKit/UIKit.h>
@class TestResult;
@interface PanduanCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *questionLabel;
@property (weak, nonatomic) IBOutlet UIButton *item1Btn;
@property (weak, nonatomic) IBOutlet UIButton *item2Btn;
@property (weak, nonatomic) IBOutlet UILabel *item1Label;
@property (weak, nonatomic) IBOutlet UILabel *item2Label;
@property (weak, nonatomic) IBOutlet UIButton *lastOne;
@property (weak, nonatomic) IBOutlet UIButton *Save;
@property (weak, nonatomic) IBOutlet UIButton *nextOne;
@property (weak, nonatomic) IBOutlet UILabel *explainLabel;
@property (weak, nonatomic) IBOutlet UILabel *detailLabel;
@property (nonatomic,strong) TestResult *test;
@end
