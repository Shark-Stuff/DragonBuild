//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iAdDeveloper/HTSHTTPMessage.h>

@class NSString, NSURL;

@interface HTSHTTPMessageRequest : HTSHTTPMessage
{
    NSString *_requestMethod;
    NSURL *_requestURL;
}

@property(copy, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(copy, nonatomic) NSString *requestMethod; // @synthesize requestMethod=_requestMethod;
- (BOOL)responseCanUseGZip;
- (id)responseWithStatus:(int)arg1;
- (struct __CFHTTPMessage )copyMessage;
- (id)initWithRequest:(struct __CFHTTPMessage )arg1;
- (void)dealloc;

@end
