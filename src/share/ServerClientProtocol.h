// -*- Mode: objc; Coding: utf-8; indent-tabs-mode: nil; -*-

@import Cocoa;

@class PreferencesModel;

@protocol ServerClientProtocol

- (NSString*)bundleVersion;

- (bycopy PreferencesModel*)preferencesModel;
- (void)savePreferencesModel:(bycopy PreferencesModel*)preferencesModel processIdentifier:(int)processIdentifier;

- (void)updateStartAtLogin;

- (NSString*)currentInputSourceID;
- (NSString*)currentInputModeID;

- (void)terminateServerProcess;

- (void)checkForUpdatesStableOnly;
- (void)checkForUpdatesWithBetaVersion;

@end
