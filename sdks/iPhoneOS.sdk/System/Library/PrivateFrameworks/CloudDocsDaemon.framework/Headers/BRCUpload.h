//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCTransfer-Protocol.h>

@class BRCClientZone, BRCItemID, BRCProgress, CKRecord, CKRecordID, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCUpload : NSObject <BRCTransfer>
{
    BRCClientZone *_clientZone;
    long long _throttleID;
    NSUInteger _totalSize;
    NSString *_stageID;
    BOOL _progressPublished;
    BRCItemID *_itemID;
    CKRecord *_record;
    NSUInteger _doneSize;
    BRCProgress *_progress;
}

@property(readonly, nonatomic) NSString *stageID; // @synthesize stageID=_stageID;
@property(readonly, nonatomic) long long throttleID; // @synthesize throttleID=_throttleID;
@property(nonatomic) BOOL progressPublished; // @synthesize progressPublished=_progressPublished;
@property(readonly, nonatomic) BRCProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) NSUInteger doneSize; // @synthesize doneSize=_doneSize;
@property(readonly, nonatomic) NSUInteger totalSize; // @synthesize totalSize=_totalSize;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2 transferSize:(NSUInteger)arg3;
- (id)description;
@property(readonly, nonatomic) NSNumber *transferID;
@property(readonly, nonatomic) NSString *etag;
@property(retain, nonatomic) CKRecord *secondaryRecord;
@property(readonly, nonatomic) CKRecordID *secondaryRecordID;
@property(readonly, nonatomic) CKRecordID *recordID;

@end
