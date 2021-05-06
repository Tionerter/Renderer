#ifndef _LIGHT_H_
#define _LIGHT_H_
#include "Color.h"
class Light
{
    Color color;
    //位置
    //强度
    Color GetLightSourceColor();
    Color GetColorInWorldSpace();
    float GetIntensity();
    void  GetPosition();

};

class PointLight:Light
{

};

class DirectionalLight:Light
{

};

class AmbientLight:Light
{

};

class SpotLight:Light
{

};

#endif