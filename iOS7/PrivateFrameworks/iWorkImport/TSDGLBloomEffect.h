/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader;

// Not exported
@interface TSDGLBloomEffect : NSObject
{
    struct CGSize _effectSize;
    struct CGSize _blurBufferSize;
    TSDGLFrameBuffer *_colorFramebuffer;
    TSDGLFrameBuffer *_blurFramebuffer;
    TSDGLDataBuffer *_dataBuffer;
    TSDGLDataBuffer *_blurTransferDataBuffer;
    TSDGLDataBuffer *_blurDataBuffer;
    TSDGLShader *_blurHorizontalShader;
    TSDGLShader *_blurVerticalShader;
    TSDGLShader *_bloomShader;
    TSDGLShader *_fboTransferShader;
}

- (void)drawBloomEffectWithMVPMatrix:(struct CATransform3D)arg1 bloomAmount:(double)arg2;
- (void)p_blurColorBuffer;
- (void)unbindFramebuffer;
- (void)bindFramebuffer;
- (void)p_setupBuffers;
- (void)p_setupShaders;
- (void)teardown;
- (void)dealloc;
- (id)initWithEffectSize:(struct CGSize)arg1 blurScale:(double)arg2;

@end
