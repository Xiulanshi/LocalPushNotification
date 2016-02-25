//
//  AddToDoItemViewController.h
//  ToDoApp
//
//  Created by Xiulan Shi on 2/24/16.
//  Copyright © 2016 Xiulan Shi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddToDoItemViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *itemText;
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;

@end
