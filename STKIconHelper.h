#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@class SBIcon, SBIconListView;

@interface STKIconHelper : NSObject

+ (NSDictionary *)iconPositionsRelativeToIcon:(SBIcon *)icon inListView:(SBIconListView *)listView;

@end
