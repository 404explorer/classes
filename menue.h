#pragma once
#include<iostream>
using namespace std;
int menue(){
    int choise;
    
    while(true)
    {
        cout<<"Chose the firuge u want to generate.>\n";
        cout<<"Rectangle - 1\n";cout<<"Ring - 2\n";cout<<"Trienagle-3\n";
        cin>>choise;
        if(choise==1 || choise==2 || choise==3 )
        {
            return choise;
        }
        else if (choise==0)
        {
            break;
        }
        else{
            continue;
        }  

    }
    return choise;
}