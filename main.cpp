
// In Visual Studio Source folder keeps implementation files
//and Headers folder keeps declaration files
#include<iostream>
#include"triangle.h"
using namespace std;
typedef string st;



class Rectangle{

    //declaration of private methods
    private:
        double height;
        double width;
    //declarationn of public methods
    public:
        void set_height(double);//mutaters
        void set_width(double);
        double get_width();//accessors
        double get_height();
        double get_area();

};

int main(){

    Rectangle Rect_1;
    Rect_1.set_height(33.33);
    Rect_1.set_width(22.22);
    cout<<"------\n";
    cout<<Rect_1.get_width()<<endl;
    cout<<Rect_1.get_height()<<endl;
    cout<<Rect_1.get_area()<<endl;

    cout<<"trianlge timme!!^^^\n";
    double tside;
    cout<< "Enter side> \n";
    cin>>tside;
    Triangle triki;
    triki.set_side(tside);
    cout<<"Triangle data> \n";
    cout<<"perimeter> "<<triki.get_perimeter()<<" area> "<< triki.get_area()<< endl;
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

//const keyword prevents get_width to update any private part variables
double Rectangle::get_height(){
    
    return height;
}
double Rectangle::get_width(){
    return width;
}
double Rectangle::get_area(){
    //better to return values on-a-fly cause it prevents from storing "stale"(not 
    //updated data)
    return width*height;
}