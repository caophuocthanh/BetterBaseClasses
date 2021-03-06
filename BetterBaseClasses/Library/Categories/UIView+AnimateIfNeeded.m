//
//  UIView+AnimateIfNeeded.m
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

#import "UIView+AnimateIfNeeded.h"

@implementation UIView (AnimateIfNeeded)

+ (void)animateIfNeededWithDuration:(NSTimeInterval)duration
                         animations:(void (^)(void))animations
                         completion:(void (^ __nullable)(BOOL finished))completion {
  
  [self animateIfNeededWithDuration:duration delay:0 options:0 
                         animations:animations completion:completion];
}

+ (void)animateIfNeededWithDuration:(NSTimeInterval)duration
                              delay:(NSTimeInterval)delay
                            options:(UIViewAnimationOptions)options
                         animations:(void (^)(void))animations
                         completion:(void (^ __nullable)(BOOL finished))completion {
  
  if (duration <= 0) {
    animations();
    if (completion) { completion(YES); }
    return;
  }
  
  [UIView animateWithDuration:duration delay:delay options:options
                   animations:animations completion:completion];
}

@end
