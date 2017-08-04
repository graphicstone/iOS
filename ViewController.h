//
//  ViewController.h
//  SimpleTable
//
//  Created by Anupam Chugh on 18/04/16.
//  Copyright © 2016 Journal Dev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDataSource,
UITableViewDelegate>
{
    
    IBOutlet UITableView *myTable;
    NSMutableArray *myArray;
}

@end
