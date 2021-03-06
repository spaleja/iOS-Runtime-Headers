/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TSPComponentDelegate>, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, TSPComponent, TSPComponentExternalReferenceMap, TSPObject;

@interface TSPComponent : NSObject <NSCopying, NSDiscardableContent> {
    struct { 
        unsigned int usesDelayedArchiving : 1; 
        unsigned int allowsDuplicatesOutsideOfDocumentPackage : 1; 
        unsigned int dirtiesDocumentPackage : 1; 
        unsigned int modified : 1; 
        unsigned int persisted : 1; 
        unsigned int isStoredOutsideObjectArchive : 1; 
        unsigned int packageIdentifier : 2; 
    int _accessCount;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_dataReferences;
    <TSPComponentDelegate> *_delegate;
    TSPComponentExternalReferenceMap *_externalReferenceMap;
    } _flags;
    long long _identifier;
    NSString *_locator;
    TSPComponent *_originalDocumentComponent;
    NSString *_preferredLocator;
    unsigned long long _readVersion;
    TSPObject *_strongRootObject;
    TSPObject *_weakRootObject;
    unsigned long long _writeVersion;
}

@property(readonly) long long identifier;
@property(readonly) BOOL isStoredOutsideObjectArchive;
@property(readonly) BOOL isTransientComponent;
@property(readonly) NSString * locator;
@property(readonly) BOOL modified;
@property(readonly) BOOL needsArchiving;
@property(readonly) TSPComponent * originalDocumentComponent;
@property(readonly) unsigned char packageIdentifier;
@property(readonly) BOOL persisted;
@property(readonly) NSString * preferredLocator;
@property(readonly) unsigned long long readVersion;
@property(retain) TSPObject * rootObject;
@property(readonly) unsigned long long writeVersion;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addExternalReferenceToObjectOrLazyReference:(id)arg1 isWeak:(BOOL)arg2 externalReferenceMap:(id)arg3 delegate:(id)arg4;
- (BOOL)allowsDuplicatesOutsideOfDocumentPackageQueryingRootObject:(BOOL)arg1;
- (BOOL)beginContentAccess;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)dirtiesDocumentPackageQueryingRootObject:(BOOL)arg1;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (void)enumerateDataReferences:(id)arg1;
- (void)enumerateExternalReferences:(id)arg1;
- (struct ComponentExternalReferenceInfo { long long x1; BOOL x2; })externalReferenceInfoForObjectIdentifier:(long long)arg1;
- (long long)identifier;
- (id)init;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 preferredLocator:(id)arg3 packageIdentifier:(unsigned char)arg4 isStoredOutsideObjectArchive:(BOOL)arg5 allowsDuplicatesOutsideOfDocumentPackage:(BOOL)arg6 dirtiesDocumentPackage:(BOOL)arg7 originalDocumentComponent:(id)arg8;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 preferredLocator:(id)arg3 packageIdentifier:(unsigned char)arg4 isStoredOutsideObjectArchive:(BOOL)arg5 allowsDuplicatesOutsideOfDocumentPackage:(BOOL)arg6 dirtiesDocumentPackage:(BOOL)arg7;
- (id)initWithDelegate:(id)arg1 message:(const struct ComponentInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedField<unsigned int> { unsigned int *x_6_1_1; int x_6_1_2; int x_6_1_3; } x6; int x7; struct RepeatedField<unsigned int> { unsigned int *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; struct RepeatedPtrField<TSP::ComponentExternalReference> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct RepeatedPtrField<TSP::ComponentDataReference> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; boolx12; boolx13; boolx14; int x15; unsigned int x16[1]; }*)arg2 packageIdentifier:(unsigned char)arg3 originalDocumentComponent:(id)arg4;
- (id)initWithDelegate:(id)arg1 rootObject:(id)arg2;
- (BOOL)isCachingEnabled;
- (BOOL)isContentDiscarded;
- (BOOL)isStoredOutsideObjectArchive;
- (BOOL)isTransientComponent;
- (id)locator;
- (BOOL)modified;
- (BOOL)needsArchiving;
- (BOOL)needsArchivingImpl;
- (id)newExternalReferenceMapWithStrongReferences:(id)arg1 weakReferences:(id)arg2 delegate:(id)arg3;
- (id)newUpdatedExternalReferenceMapUsingDelegate:(id)arg1;
- (id)originalDocumentComponent;
- (unsigned char)packageIdentifier;
- (BOOL)persisted;
- (id)preferredLocator;
- (unsigned long long)readVersion;
- (id)rootObject;
- (void)saveToMessage:(struct ComponentInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedField<unsigned int> { unsigned int *x_6_1_1; int x_6_1_2; int x_6_1_3; } x6; int x7; struct RepeatedField<unsigned int> { unsigned int *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; struct RepeatedPtrField<TSP::ComponentExternalReference> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct RepeatedPtrField<TSP::ComponentDataReference> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; boolx12; boolx13; boolx14; int x15; unsigned int x16[1]; }*)arg1 writtenComponentInfo:(const struct WrittenComponentInfo { id x1; id x2; BOOL x3; BOOL x4; id x5; BOOL x6; BOOL x7; id x8; id x9; BOOL x10; unsigned long long x11; unsigned long long x12; id x13; id x14; }*)arg2;
- (void)setLocator:(id)arg1;
- (void)setModified:(BOOL)arg1 forObject:(id)arg2;
- (void)setModifiedImpl:(BOOL)arg1 forObject:(id)arg2;
- (void)setPackageIdentifier:(unsigned char)arg1 preferredLocator:(id)arg2 locator:(id)arg3 isStoredOutsideObjectArchive:(BOOL)arg4 rootObjectOrNil:(id)arg5 externalReferenceMap:(id)arg6 dataReferences:(id)arg7 readVersion:(unsigned long long)arg8 writeVersion:(unsigned long long)arg9 wasCopied:(BOOL)arg10 wasModifiedDuringWrite:(BOOL)arg11;
- (void)setRootObject:(id)arg1;
- (BOOL)shouldForceCaching;
- (BOOL)shouldKeepStrongObjectImpl;
- (void)updateComponentPropertiesUsingRootObjectOrNil:(id)arg1;
- (void)willDiscardComponent;
- (unsigned long long)writeVersion;

@end
