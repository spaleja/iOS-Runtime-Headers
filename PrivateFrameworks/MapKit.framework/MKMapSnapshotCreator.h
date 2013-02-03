/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class UIView, NSMutableArray, MKMapLevelView, NSThread;

@interface MKMapSnapshotCreator : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    } _centerCoordinate;
    NSThread *_firstThread;
    BOOL _isLoading;
    UIView *_mapClipView;
    MKMapLevelView *_mapLevelView;
    NSMutableArray *_requests;
}

@property ? centerCoordinate; /* unknown property attribute: V_centerCoordinate */
@property(readonly) MKMapLevelView *mapLevelView; /* unknown property attribute: V_mapLevelView */
@property(readonly) UIView *mapClipView; /* unknown property attribute: V_mapClipView */

+ (id)sharedInstance;

- (void)_ensureSingleThread;
- (void)_processRequest;
- (void)_respondWithSnapshot;
- (void)_updateWithCenterCoordinate;
- (struct { double x1; double x2; })centerCoordinate;
- (void)createSnapShotWithCoordinate:(struct { double x1; double x2; })arg1 size:(struct CGSize { float x1; float x2; })arg2 requester:(id)arg3 context:(id)arg4;
- (void)dealloc;
- (id)init;
- (id)mapClipView;
- (id)mapLevelView;
- (void)mapLevelViewDidFailLoading:(id)arg1;
- (void)mapLevelViewDidFinishLoading:(id)arg1;
- (void)mapLevelViewDidStartLoading:(id)arg1;
- (float)pointDistanceFromCoordinate:(struct { double x1; double x2; })arg1 toCoordinate:(struct { double x1; double x2; })arg2;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (struct CGPoint { float x1; float x2; })snapShotPointForCoordinate:(struct { double x1; double x2; })arg1;

@end