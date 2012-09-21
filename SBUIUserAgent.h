/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"


@protocol SBUIUserAgent <NSObject>
-(void)setMinimumBacklightLevel:(float)level animated:(BOOL)animated;
-(void)notifyOnNextUserEvent;
-(BOOL)isSBUILoggingEnabled;
-(void)removeActiveInterfaceOrientationObserver:(id)observer;
-(void)addActiveInterfaceOrientationObserver:(id)observer;
-(void)activateModalBulletinAlert:(id)alert;
-(id)modalBulletinAlertHandlerRegistry;
-(BOOL)launchDisplayWithURL:(id)url forCall:(BOOL)call sender:(id)sender;
-(void)setFlipBackAttributeForSEODisplayWithIdentifier:(id)identifier;
-(void)prepareToAnswerCall;
-(void)stopRinging;
-(void)playRingtoneAtPath:(id)path vibrationPattern:(id)pattern;
-(void)playRingtoneAtPath:(id)path;
-(void)setBadgeNumberOrString:(id)string forApplicationWithID:(id)anId;
-(void)setIdleText:(id)text;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)necessary;
-(void)lockAndDimDevice;
-(BOOL)isIdleTimerDisabledForReason:(id)reason;
-(void)setIdleTimerDisabled:(BOOL)disabled forReason:(id)reason;
-(void)undimScreen;
-(void)dimScreen:(BOOL)screen;
-(void)updateLockScreenInterfaceIfNecessary;
-(CGRect)defaultContentRegionForAwayViewPlugin:(id)awayViewPlugin withOrientation:(int)orientation;
-(BOOL)launchFromAwayViewPluginWithURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock animate:(BOOL)animate;
-(BOOL)canLaunchFromAwayViewPluginWithURL:(id)url bundleID:(id)anId;
-(BOOL)launchFromSource:(int)source withURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock;
-(BOOL)launchFromPushOrLocalBulletin:(id)pushOrLocalBulletin origin:(int)origin;
-(BOOL)launchFromBulletinWithURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock animate:(BOOL)animate launchOrigin:(int)origin;
-(BOOL)canLaunchFromBulletinWithURL:(id)url bundleID:(id)anId;
-(BOOL)launchApplicationFromSource:(int)source withURL:(id)url options:(id)options;
-(BOOL)launchApplicationFromSource:(int)source withDisplayID:(id)displayID options:(id)options;
-(BOOL)canLaunchFromSource:(int)source withURL:(id)url bundleID:(id)anId;
-(void)openURL:(id)url animateIn:(BOOL)anIn scale:(float)scale start:(double)start duration:(float)duration animateOut:(BOOL)anOut;
-(BOOL)openURL:(id)url allowUnlock:(BOOL)unlock animated:(BOOL)animated;
-(BOOL)canUserLaunchIcon;
-(BOOL)springBoardIsActive;
-(id)createWallpaperView:(int)view;
-(BOOL)homeScreenIsDisplayingWallpaper;
-(int)networkUsageTypeForAppWithDisplayID:(id)displayID;
-(BOOL)lockScreenIsShowing;
-(BOOL)deviceIsTethered;
-(BOOL)deviceIsBlocked;
-(BOOL)deviceIsPasscodeLockedRemotely;
-(BOOL)deviceIsPasscodeLocked;
-(BOOL)deviceIsLocked;
-(BOOL)applicationInstalledForDisplayID:(id)displayID;
-(id)topSuspendedEventsOnlyDisplayID;
-(id)foregroundDisplayID;
-(id)foregroundApplicationDisplayID;
-(int)activeInterfaceOrientation;
-(void)updateInterfaceOrientationIfNecessary;
@end
