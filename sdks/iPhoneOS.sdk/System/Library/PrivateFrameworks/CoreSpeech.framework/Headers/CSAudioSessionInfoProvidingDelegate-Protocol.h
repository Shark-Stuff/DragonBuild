//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary;
@protocol CSAudioSessionInfoProviding;

@protocol CSAudioSessionInfoProvidingDelegate <NSObject>

@optional
- (void)audioSessionInfoProvider:(id <CSAudioSessionInfoProviding>)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionInfoProvider:(id <CSAudioSessionInfoProviding>)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionInfoProvider:(id <CSAudioSessionInfoProviding>)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionInfoProvider:(id <CSAudioSessionInfoProviding>)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(NSDictionary *)arg2;
@end
