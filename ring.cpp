#include"ring.h"
#pragma once

using namespace std;

Ring::Ring(double inr, double outr){
    outer_radius=outr;
    inner_radius=inr;
    int color[3]={125,125,125};

}
void Ring::set_ring(double in, double out){
    outer_radius=out;
    inner_radius=in;
}
double Ring::get_area()//area getter
{
    return 2*pi*pow(outer_radius,2)-2*pi*(inner_radius,2);
}
double Ring::get_perimeter()//perimeter getter
{
return 2*pi*(outer_radius+inner_radius);
}
void Ring::color_setter(int r, int g, int b)
{
color[0]=r;
color[1]=g;
color[2]=b;
}