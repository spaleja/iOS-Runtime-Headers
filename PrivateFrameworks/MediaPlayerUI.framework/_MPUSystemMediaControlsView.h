/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class MPUChronologicalProgressView, MPUMediaControlsTitlesView, MPUMediaControlsVolumeView, MPUTransportControlsView;

@interface _MPUSystemMediaControlsView : UIView {
    int _style;
    MPUChronologicalProgressView *_timeInformationView;
    MPUMediaControlsTitlesView *_trackInformationView;
    MPUTransportControlsView *_transportControlsView;
    MPUMediaControlsVolumeView *_volumeView;
}

@property(readonly) int style;
@property(retain) MPUChronologicalProgressView * timeInformationView;
@property(retain) MPUMediaControlsTitlesView * trackInformationView;
@property(retain) MPUTransportControlsView * transportControlsView;
@property(retain) MPUMediaControlsVolumeView * volumeView;

- (void).cxx_destruct;
- (void)_layoutSubviewsControlCenteriPad;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(int)arg1;
- (void)layoutSubviews;
- (void)setTimeInformationView:(id)arg1;
- (void)setTrackInformationView:(id)arg1;
- (void)setTransportControlsView:(id)arg1;
- (void)setVolumeView:(id)arg1;
- (int)style;
- (id)timeInformationView;
- (id)trackInformationView;
- (id)transportControlsView;
- (void)updatePlaybackState:(BOOL)arg1;
- (id)volumeView;

@end