#include "triangle.h"
#include<cmath>

void Triangle::set_side(double s){
    side=s;}

double Triangle::get_perimeter() const{
    return 3*side;
}

double Triangle::get_area() const{
    using namespace std;
    return pow(side, 2)*(pow(3,0.5))/4;
}