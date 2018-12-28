//
//  DishDashItemCell.h
//  NewOne
//
//  Created by Goutham Nani on 8/04/16.
//  Copyright © 2016 Goutham Nani. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DishDashItemCollectionCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet UIImageView *imgview_Dish;
@property (nonatomic, weak) IBOutlet UILabel *lbl_DishName;
- (void)fillDataWithContent:(NSDictionary *)content;
@end
