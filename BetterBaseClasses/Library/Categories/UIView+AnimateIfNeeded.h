//
//  UIView+AnimateIfNeeded.h
//  BetterBaseClasses
//
//  Created by Joshua Greene on 8/28/16.
//  Copyright © 2016 Joshua Greene. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  `UIView+AnimateIfNeeded` provides convenience methods to perform animations if needed (`duration` greater than zero).
 */
@interface UIView (AnimateIfNeeded)

/**
 *  Use this method to perform animations ONLY if the `duration` is greater than zero. Otherwise,
 *  the animations and completion block are called immediately, without animating.
 *
 *  @param duration   The animation duration
 *  @param animations The animations to be performed
 *  @param completion The completion to be performed after the animations
 */
+ (void)animateIfNeededWithDuration:(NSTimeInterval)duration
                         animations:(void (^)(void))animations
                         completion:(void (^ __nullable)(BOOL finished))completion;

/**
 *  Use this method to perform animations ONLY if the `duration` is greater than zero. Otherwise,
 *  the animations and completion block are called immediately, without animating.
 *
 *  @param duration   The animation duration
 *  @param delay      The delay before the animation should be performed
 *  @param options    The animation options
 *  @param animations The animations to be performed
 *  @param completion The completion to be performed after the animations
 */
+ (void)animateIfNeededWithDuration:(NSTimeInterval)duration
                              delay:(NSTimeInterval)delay
                            options:(UIViewAnimationOptions)options
                         animations:(void (^)(void))animations
                         completion:(void (^ __nullable)(BOOL finished))completion;

@end

NS_ASSUME_NONNULL_END
