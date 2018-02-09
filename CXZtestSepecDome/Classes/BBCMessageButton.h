//
//  BBCMessageButton.h
//  BeautifulBreastClub
//
//  Created by cheng on 2017/11/10.
//  Copyright © 2017年 Reese. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^blockName)(UIButton *button);
@interface BBCMessageButton : UIButton

/**
 *  最大拖动范围,默认为100
 */
@property (nonatomic,assign) NSInteger maxDistance;
/**
 *  点击事件block
 */
@property (nonatomic,assign) blockName clickName;

@end
