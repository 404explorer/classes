#pragma once
#include<iostream>
using namespace std;
int menue(){
    int choise;
    
    while(true)
    {
        cout<<"####################### MAIN MENUE ###########################\n";
        cout<<"# Chose the firuge u want to generate                        #\n";
        cout<<"# Rectangle[1] Ring[2] Trienagle[3] Activity data[4] Quit[0] #\n";
        cout<<"##############################################################\n";
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