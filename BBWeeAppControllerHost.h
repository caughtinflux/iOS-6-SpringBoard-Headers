/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol BBWeeAppControllerHost <NSObject>
-(BOOL)weeApp:(id)app updatePresentationMode:(int)mode duration:(float)duration delay:(float)delay;
-(int)weeAppPresentationMode:(id)mode;
-(BOOL)weeAppWantsNotificationCenterDismissal:(id)dismissal;
-(void)weeAppWantsSizeUpdate:(id)update;
@end
