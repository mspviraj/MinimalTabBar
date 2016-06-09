//
//  MinimalBar.h
//  MinimalTabBar
//
//  Created by james.dunay on 11/19/14.
//  Copyright (c) 2014 James.Dunay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JDViewController.h"

@protocol MinimalBarDelegate <NSObject>

- (void)didSwitchToIndex:(NSUInteger)pageIndex;
- (void)changeToPageIndex:(NSUInteger)pageIndex;
- (void)manualOffsetScrollview:(CGFloat)offset;
- (void)displayAllScreensWithStartingDisplayOn:(CGFloat)startingPosition;
- (void)sendScrollViewToPoint:(CGPoint)point;
- (void)displayViewAtIndex:(NSInteger)index;

@end

@interface JDMinimalTabBar : UIView <UIGestureRecognizerDelegate>

@property (nonatomic) CGFloat displayOverviewYCoord;
@property (nonatomic) CGSize defaultFrameSize;
@property (nonatomic) BOOL showTitles;
@property (nonatomic) BOOL hidesTitlesWhenSelected;

@property (nonatomic) id <MinimalBarDelegate> mMinimalBarDelegate;
@property (nonatomic, strong) UIColor* defaultTintColor;
@property (nonatomic, strong) UIColor* selectedTintColor;

@property (nonatomic, strong) NSMutableDictionary *optionalControllerButtons;

@property (nonatomic, strong) UIView *optionalLeftControllerAccessory;
@property (nonatomic, strong) UIView *optionalRightControllerAccessory;

- (void)unfocusButtons;
- (void)focusButtons;

- (void)hideOptionalButtons;

- (void)scrollOverviewButtonsWithPercentage:(CGFloat)offsetPercentage;
- (void)returnMenuToSelected:(NSUInteger)index;
- (void)createButtonItems:(NSArray *)viewControllers;

- (void)installOptionalLeftButton:(UIImageView *)leftItem forControllerIndex:(NSInteger)controllerIndex;
- (void)installOptionalRightButton:(UIImageView *)rightItem forControllerIndex:(NSInteger)controllerIndex;

- (void)showSpinnerAtIndex:(NSInteger)index;
- (void)hideSpinnerAtIndex:(NSInteger)index;

@end