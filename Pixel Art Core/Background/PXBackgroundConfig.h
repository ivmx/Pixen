//
//  PXBackgroundConfig.h
//  Pixen
//
//  Copyright 2005-2012 Pixen Project. All rights reserved.
//

@class PXBackground;

@interface PXBackgroundConfig : NSObject < NSCoding >
{
  @private
	PXBackground *_mainBackground;
	PXBackground *_alternateBackground;
	PXBackground *_mainPreviewBackground;
	PXBackground *_alternatePreviewBackground;
}

@property (nonatomic, retain) PXBackground *mainBackground;
@property (nonatomic, retain) PXBackground *alternateBackground;

@property (nonatomic, retain) PXBackground *mainPreviewBackground;
@property (nonatomic, retain) PXBackground *alternatePreviewBackground;

- (void)setDefaultBackgrounds;
- (void)setDefaultPreviewBackgrounds;

@end
