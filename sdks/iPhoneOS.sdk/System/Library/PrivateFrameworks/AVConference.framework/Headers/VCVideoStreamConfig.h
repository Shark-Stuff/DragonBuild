//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCMediaStreamConfig.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCVideoStreamConfig : VCMediaStreamConfig
{
    long long _videoResolution;
    NSUInteger _framerate;
    NSUInteger _txMaxBitrate;
    NSUInteger _txMinBitrate;
    NSUInteger _rxMaxBitrate;
    NSUInteger _rxMinBitrate;
    NSUInteger _keyFrameInterval;
    int _remoteVideoInitialOrientation;
    BOOL _enableCVO;
    NSUInteger _cvoExtensionID;
    BOOL _isVideoProtected;
    long long _type;
    NSUInteger _sourceFramerate;
    int _encodingMode;
    _Atomic unsigned char _videoPriorityPointer;
    int _captureSource;
    unsigned int _screenDisplayID;
    NSUInteger _customWidth;
    NSUInteger _customHeight;
    NSString *_rxCodecFeatureListString;
    NSString *_txCodecFeatureListString;
    NSUInteger _tilesPerFrame;
}

+ (BOOL)validateClientDictionary:(id)arg1;
@property(nonatomic) NSUInteger tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property(nonatomic) NSUInteger customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) NSUInteger customWidth; // @synthesize customWidth=_customWidth;
@property(nonatomic) unsigned int screenDisplayID; // @synthesize screenDisplayID=_screenDisplayID;
@property(nonatomic) int captureSource; // @synthesize captureSource=_captureSource;
@property(nonatomic) _Atomic unsigned char videoPriorityPointer; // @synthesize videoPriorityPointer=_videoPriorityPointer;
@property(nonatomic) int encodingMode; // @synthesize encodingMode=_encodingMode;
@property(nonatomic) NSUInteger sourceFramerate; // @synthesize sourceFramerate=_sourceFramerate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) BOOL isVideoProtected; // @synthesize isVideoProtected=_isVideoProtected;
@property(nonatomic) NSUInteger cvoExtensionID; // @synthesize cvoExtensionID=_cvoExtensionID;
@property(nonatomic) BOOL enableCVO; // @synthesize enableCVO=_enableCVO;
@property(nonatomic) int remoteVideoInitialOrientation; // @synthesize remoteVideoInitialOrientation=_remoteVideoInitialOrientation;
@property(nonatomic) NSUInteger keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(retain, nonatomic) NSString *rxCodecFeatureListString; // @synthesize rxCodecFeatureListString=_rxCodecFeatureListString;
@property(nonatomic) NSUInteger rxMaxBitrate; // @synthesize rxMaxBitrate=_rxMaxBitrate;
@property(nonatomic) NSUInteger rxMinBitrate; // @synthesize rxMinBitrate=_rxMinBitrate;
@property(retain, nonatomic) NSString *txCodecFeatureListString; // @synthesize txCodecFeatureListString=_txCodecFeatureListString;
@property(nonatomic) NSUInteger txMaxBitrate; // @synthesize txMaxBitrate=_txMaxBitrate;
@property(nonatomic) NSUInteger txMinBitrate; // @synthesize txMinBitrate=_txMinBitrate;
@property(nonatomic) NSUInteger framerate; // @synthesize framerate=_framerate;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
- (BOOL)updateWithClientDictionary:(id)arg1;
- (BOOL)applyVideoStreamClientDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithClientDictionary:(id)arg1;
- (id)init;

@end
