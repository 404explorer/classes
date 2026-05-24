
// In Visual Studio Source folder keeps implementation files
//and Headers folder keeps declaration files
#include<iostream>
#include"triangle.h"
//#include"ring.h"
//#include"rect.h"
#include"menue.h"
using namespace std;
typedef string st;

int main(){ 
cout<<"Enter tri side\n";
double side;
cin>>side;
Triangle One(side);

cout<<One.get_area()<<endl;
cout<<One.get_perimeter()<<endl;

cout<<"program terminated...";
    return 0;
}

