#include<iostream>
using namespace std;
typedef string st;

class Rectangle{
    private:
        double height;
        double width;
    public:
        void set_height(double);//mutaters
        void set_width(double);
        double get_width() const;//accessors
        double get_height() const;
        double get_area() const;

};

int main(){

    Rectangle Rect_1;
    Rect_1.set_height(33.33);
    Rect_1.set_width(22.22);
    cout<<"------\n";
    cout<<Rect_1.get_width()<<endl;
    cout<<Rect_1.get_height()<<endl;
    cout<<Rect_1.get_area()<<endl;
    return 0;
}

//function declaration block
// :: - scope resolutin operator
void Rectangle::set_width(double w){
    width=w;
}
void Rectangle::set_height(double h){
    height=h;
}

double Rectangle::get_height() const{
    return height;
}
double Rectangle::get_width() const{
    return width;
}
double Rectangle::get_area() const{
    return width*height;
}