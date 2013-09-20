/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSMutableDictionary, SBKRequest;

@interface SBKTransaction : NSObject {
    SBKRequest *_activeRequest;
    NSMutableDictionary *_userInfo;
}

@property(retain) SBKRequest * activeRequest;
@property(retain) NSMutableDictionary * userInfo;

- (void).cxx_destruct;
- (id)activeRequest;
- (id)clampsKey;
- (id)domain;
- (id)init;
- (id)newRequest;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(id)arg2;
- (id)requestURL;
- (void)setActiveRequest:(id)arg1;
- (void)setTransactionContext:(id)arg1 forKey:(id)arg2;
- (void)setUserInfo:(id)arg1;
- (id)transactionContextForKey:(id)arg1;
- (id)userInfo;

@end