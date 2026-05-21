#pragma once
#include<array>

class Ring
//another try 
//to get everythinf ok with classes
{
private:
double pi=3.1415926535;
double outer_radius;
double inner_radius;
int color[3];
public:
Ring();//default constructor
Ring(double,double);//constructor
void set_ring(double,double);//ring setter
double get_area();//area getter
void color_setter(int,int,int);//setting color
double get_perimeter();//perimetter getter

};
