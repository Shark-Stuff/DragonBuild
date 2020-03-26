//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSString, NSURL;

@interface MMCSSimpleFile : NSObject
{
    int _fd;
    double _progress;
    NSString *_authToken;
    long long _encryptionBehavior;
    NSString *_localPath;
    NSURL *_requestURL;
    NSString *_requestorID;
    NSString *_guid;
    NSUInteger _itemID;
    NSData *_signature;
    NSData *_fileHash;
    NSUInteger _protocolFileSize;
    NSError *_mmcsError;
    NSData *_authResponseData;
}

@property(retain) NSData *authResponseData; // @synthesize authResponseData=_authResponseData;
@property(retain, setter=setMMCSError:) NSError *mmcsError; // @synthesize mmcsError=_mmcsError;
@property NSUInteger protocolFileSize; // @synthesize protocolFileSize=_protocolFileSize;
@property(retain) NSData *fileHash; // @synthesize fileHash=_fileHash;
@property(retain) NSData *signature; // @synthesize signature=_signature;
@property NSUInteger itemID; // @synthesize itemID=_itemID;
@property(retain) NSString *guid; // @synthesize guid=_guid;
@property(retain) NSString *requestorID; // @synthesize requestorID=_requestorID;
@property(retain) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(retain) NSString *localPath; // @synthesize localPath=_localPath;
@property long long encryptionBehavior; // @synthesize encryptionBehavior=_encryptionBehavior;
@property(retain) NSString *authToken; // @synthesize authToken=_authToken;
@property double progress; // @synthesize progress=_progress;
@property int fd; // @synthesize fd=_fd;
- (void)dealloc;
- (id)init;
- (id)description;

@end
