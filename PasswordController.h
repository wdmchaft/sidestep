//
//  PasswordController.h
//	Sidestep
//
//  Created by Ira Cooke on 27/07/2009. Modified with permission by Chetan Surpur.
//  Copyright 2009 Mudflat Software. 
//

#import <Cocoa/Cocoa.h>
#import "EMKeychainItem.h"

/*! This class consists entirely of class methods which provide a simple interface to keychain calls to set and retrieve passwords*/
@interface PasswordController : NSObject {
}

+ (NSArray *) promptForPassword:(NSString*)hostname user:(NSString*) username;
+ (NSString*) passwordForHost:(NSString*)hostname user:(NSString*) username;
+ (BOOL) setPassword:(NSString*)newPassword forHost:(NSString*)hostname user:(NSString*) username;
+ (BOOL) deleteKeychainEntryForHost:(NSString*)hostname user:(NSString*) username;

@end
