/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolylineOverlaySection : NSObject {
    struct { 
        double x0; 
        double x1; 
        double y0; 
        double y1; 
    } _bounds;
    unsigned int _pointCount;
    struct { float x1; float x2; } *_points;
    unsigned int _startPointIndex;
    int _transportType;
}

@property(readonly) struct { double x1; double x2; double x3; double x4; } bounds;
@property(readonly) unsigned int endPointIndex;
@property(readonly) unsigned int pointCount;
@property(readonly) struct { float x1; float x2; }* points;
@property(readonly) unsigned int startPointIndex;
@property(readonly) int transportType;

- (id).cxx_construct;
- (struct { double x1; double x2; double x3; double x4; })bounds;
- (void)dealloc;
- (unsigned int)endPointIndex;
- (id)initWithRoute:(id)arg1 startPoint:(unsigned int)arg2 pointCount:(unsigned int)arg3 bounds:(struct { double x1; double x2; double x3; double x4; })arg4 transportType:(int)arg5;
- (unsigned int)pointCount;
- (struct { float x1; float x2; }*)points;
- (unsigned int)startPointIndex;
- (int)transportType;

@end
