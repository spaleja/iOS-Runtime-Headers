/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult {
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    NSString *_phoneNumber;
    } _range;
    id _underlyingResult;
}

@property(readonly) void *underlyingResult;

- (BOOL)_adjustRangesWithOffset:(NSInteger)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 phoneNumber:(id)arg2 underlyingResult:(void*)arg3;
- (id)initWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 phoneNumber:(id)arg2;
- (id)phoneNumber;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })range;
- (id)resultByAdjustingRangesWithOffset:(NSInteger)arg1;
- (unsigned long long)resultType;
- (void*)underlyingResult;

@end