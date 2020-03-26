//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKDTrafficLogger : NSObject
{
    long long _sequenceNumber;
    NSString *_requestID;
}

@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
// - (void).cxx_destruct;
- (void)finishRequestLog;
- (void)logPartialResponseObjectData:(id)arg1;
- (void)logResponseConfiguration:(NSUInteger)arg1 withMessageClassString:(id)arg2;
- (void)logRequestBodyStreamReset;
- (void)logPartialRequestObjectData:(id)arg1;
- (void)logResponse:(id)arg1;
- (void)logRequest:(id)arg1 toURL:(id)arg2 withMethod:(id)arg3 withMessageClassString:(id)arg4 parsingStandaloneMessage:(BOOL)arg5;
- (BOOL)shouldLog;
- (void)_logObject:(id)arg1 ofType:(NSUInteger)arg2;
- (id)initWithRequestID:(id)arg1;

@end
