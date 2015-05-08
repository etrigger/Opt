#ifndef G3DShapeFromShading_h
#define G3DShapeFromShading_h
#include <G3D/G3D.h>
#include <GLG3D/GLG3D.h>
using G3D::Texture;
using G3D::Array;
class SFSHelpers;
class G3DShapeFromShading {
    shared_ptr<SFSHelpers> m_sfsHelpers;
public:
    void estimateLightingAndAlbedo(shared_ptr<Texture> color, shared_ptr<Texture> depth, shared_ptr<Texture> outputAlbedo, Array<float>& lightinSHCoefficients);
};

#endif