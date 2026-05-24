#include"rectangle.h"

Rectangle::Rectangle(){};
Rectangle::Rectangle(int h, int w ){
    height=h;
    width=w;
}
double Rectangle::get_area(){
    return width*height;
}
double Rectangle::get_perimeter(){
    return width*2+height*2;

}