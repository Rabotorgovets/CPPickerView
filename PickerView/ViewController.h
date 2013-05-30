//
//  ViewController.h
//  PickerView
//
//  Created by Fraerman Arkady on 24.11.11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPPickerView.h"

@interface ViewController : UIViewController <CPPickerViewDataSource, CPPickerViewDelegate>

@property (nonatomic, strong) CPPickerView *defaultPickerView;
@property (nonatomic, strong) CPPickerView *daysPickerView;

@property (nonatomic, strong) NSArray *daysData;

@property (strong, nonatomic) IBOutlet UILabel *numberLabel;
@property (strong, nonatomic) IBOutlet UILabel *dayLabel;

@end
