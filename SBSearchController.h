// Written with love by caughtinflux using cyript and IDA <3

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AddressBook/AddressBook.h>

#import "SPSearchAgentDelegate-Protocol.h"

@class SBSearchView;

@interface SBSearchController : NSObject <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, SPSearchAgentDelegate>
{
    SBSearchView     *_searchView;
    BOOL              _reloadingTableContent;
    BOOL              _resultsUpdated;
    ABAddressBookRef  _addressBook;
}

@property(nonatomic, retain) SBSearchView *searchView;

- (id)_auxiliaryTitleForABRecordID:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)searchAgentClearedResults:(id)arg1;
- (void)searchAgentUpdatedResults:(id)arg1;
- (void)_updateTableContents;
- (void)_tableViewDidFadeOut:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (CGFloat)tableView:(UITableView *)arg1 heightForRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UITableView *)arg1 willDisplayHeaderView:(id)arg2 forSection:(NSInteger)arg3;
- (id)tableView:(UITableView *)arg1 viewForHeaderInSection:(int)arg2;
- (BOOL)tableView:(UITableView *)arg1 wantsHeaderForSection:(int)arg2;
- (void)tableView:(UITableView *)arg1 willDisplayCell:(UITableViewCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)_deselect;
- (void)tableView:(UITableView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)indexPath;
- (id)tableView:(UITableView *)arg1 cellForRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)_populateCell:(id)arg1 withSearchResultAtIndex:(int)arg2 inSection:(id)arg3;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(UITableView *)arg1 numberOfRowsInSection:(int)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (BOOL)shouldShowKeyboardOnScroll;
- (void)scrollViewIsScrollingHorizontallyInSearchView;
- (void)controllerWasDeactivated;
- (void)controllerWasActivated;
- (void)updateResultsIfNecessary;
- (void)dealloc;

@end

