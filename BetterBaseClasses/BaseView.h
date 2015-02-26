//
//  BaseView.h
//  BetterBaseClasses
//
//  Created by Joshua Greene on 2/25/15.
//  Copyright (c) 2015 Joshua Greene. All rights reserved.
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

#import "UIView+BetterBaseClasses.h"

/**
 *  @brief  `BaseView` is an abstract, base class meant to be subclassed instead of `UIView`.
 *
 *  @dicussion  This class is designed to be used with the `UIView+BetterBaseClasses` category, which adds convenience class instantiation methods.
 */
@interface BaseView : UIView

/**
 *  @brief  This method is called by all designated initializers.
 *
 *  @discussion Subclasses may override this method to do common setup regardless of the `init` method used to create this controller. Subclasses should make sure to call `[super commonInit]` to allow parent classes to do their setup.
 *
 *  @note If your subclass adds a new designated initializer, you should call this method within it.
 */
- (void)commonInit __attribute((objc_requires_super));

@end
