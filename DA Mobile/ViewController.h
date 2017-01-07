//
//  ViewController.h
//  DA Mobile
//
//  Created by Yongyang Nie on 11/2/16.
//  Copyright © 2016 Yongyang Nie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (weak, nonatomic) IBOutlet UIView *menuView;
@property (weak, nonatomic) IBOutlet UIView *weatherView;
@property (weak, nonatomic) IBOutlet UICollectionView *postsView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *weatherWidth;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *menuWidth;

@end

