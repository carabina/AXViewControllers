//
//  AXTableViewController.h
//  AXViewControllers
//
//  Created by devedbox on 2016/9/13.
//  Copyright © 2016年 devedbox. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#import "AXViewControllerDelegate.h"
#import "AXViewControllersContants.h"

#ifndef kAXPageCountLimited
#define kAXPageCountLimited (_page * page.pageCount >= page.totalCount)
#endif

#ifndef kAXPageCountLimitedWithAPage
#define kAXPageCountLimitedWithAPage(aPage) (aPage * page.pageCount >= page.totalCount)
#endif

#ifndef kAXPageCountReset
#define kAXPageCountReset _page = 1;\
[self.tableView.mj_footer resetNoMoreData];
#endif
NS_ASSUME_NONNULL_BEGIN
NS_CLASS_AVAILABLE_IOS(8_0) @interface AXTableViewController : UITableViewController <AXViewControllerDelegate>
{
@protected
    UIBarButtonItem * _leftBarButtonItem;
    UIBarButtonItem * _backBarButtonItem;
    UIBarButtonItem * _rightBarButtonItem;
    /// Grace time for hud view.
    NSTimeInterval    _graceTime;
    /// Is visible of the veiw controller.
    BOOL              _visible;
}
/// Left bar button item.
@property (strong, nonatomic) IBOutlet UIBarButtonItem *leftBarButtonItem;
/// Back bar button item.
@property (strong, nonatomic) IBOutlet UIBarButtonItem *backBarButtonItem;
/// Right bar button item.
@property (strong, nonatomic) IBOutlet UIBarButtonItem *rightBarButtonItem;
/// Searching activity view.
@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;
@end
NS_ASSUME_NONNULL_END
