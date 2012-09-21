/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATConnection;

__attribute__((visibility("hidden")))
@interface SBModelessSyncController : XXUnknownSuperclass {
	BOOL _isAppSyncing;
	BOOL _isSyncing;
	int _syncRegistrationToken;
	int _iCloudRestoreToken;
	BOOL _restoringFromICloud;
	BOOL _isAutoSyncing;
	BOOL _isWirelessSyncing;
	ATConnection* _airTrafficConnection;
}
@property(readonly, assign, nonatomic) BOOL isWirelessSyncing;
@property(readonly, assign, nonatomic) BOOL isAutoSyncing;
@property(readonly, assign, nonatomic) BOOL isRestoringFromICloud;
@property(readonly, assign, nonatomic) BOOL isSyncing;
@property(readonly, assign, nonatomic) BOOL isAppSyncing;
+(id)sharedInstance;
-(void)_endObservingICloudRestoreStatus;
-(void)_beginObservingICloudRestoreStatus;
-(void)_iCloudStatusChanged;
-(void)_updateIconsForStateChange;
-(void)_setAppSyncState:(BOOL)state;
-(void)_appSyncStateChanged;
-(void)gotLowBatteryWarning;
-(void)endMonitoring;
-(void)beginMonitoring;
-(void)connectionWasInterrupted:(id)interrupted;
-(void)connection:(id)connection updatedProgress:(id)progress;
-(void)setIsSyncing:(BOOL)syncing;
-(void)dealloc;
-(id)init;
@end
