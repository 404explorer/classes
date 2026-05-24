
#include<cmath>
#include"triangle.h"

Triangle::Triangle(){};
Triangle::Triangle(double s){
    side=s;
}

void Triangle::set_side(double s){
    side=s;}

double Triangle::get_perimeter(){
    return 3*side;
}

double Triangle::get_area(){
   
    return pow(side, 2)*(pow(3,0.5))/4;
}