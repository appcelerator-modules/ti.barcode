/**
 * Ti.Barcode Module
 * Copyright (c) 2010-2018 by Appcelerator, Inc. All Rights Reserved.
 * Please see the LICENSE included with this distribution for details.
 */

#import <UIKit/UIKit.h>

@protocol TiOverlayViewDelegate
- (void)cancelled;
@end

@interface TiOverlayView : UIView {
  @private
  BOOL _showRectangle;
  UIView *_overlay;
}

@property (nonatomic, assign) id<TiOverlayViewDelegate> delegate;
@property (nonatomic, assign) CGRect cropRect;
@property (nonatomic, copy) NSString *displayMessage;

- (id)initWithFrame:(CGRect)frame
      showRectangle:(BOOL)showRectangle
        withOverlay:(UIView *)overlay;

- (void)updateViewsWithFrame:(CGRect)newFrame;
@end
