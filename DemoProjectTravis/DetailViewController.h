//
//  DetailViewController.h
//  DemoProjectTravis
//
//  Created by Ashish ojha on 10/10/14.
//  Copyright (c) 2014 com.v2solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

