#ifndef _COLOR_H_
#define _COLOR_H_
//TODO:需要添加clamp函数限制
struct Color
{
public:
    Color() : r(0),g(0),b(0),a(0){}
    Color(unsigned char r, unsigned char g, unsigned char b, unsigned char a) : r(r), g(g), b(b), a(a) {}
    Color operator*(float s){ return Color(s*r,s*g,s*b,s*a);}
    Color operator*(Color c){ return Color(c.r*r,c.g*g,c.b*b,c.a*a);};
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a; 

};


#endif