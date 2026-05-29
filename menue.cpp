#include"menue.h"
#include<string>

typedef string st;

Menue::Menue()
{
       
}
void Menue::main_menue(int re,int ri,int tri)
{
st rec=to_string(re);
st ring=to_string(ri);
st tria=to_string(tri);
int total=re+ri+tri;

cout<<"MAIN MENUE ####################################################\n";
cout<<"Figure selection[number in square brakets]\n";
cout<<"Rectangle[1]"<<rec<<" Ring[2]"<<ring<<" Trienagle[3]"<<tria<<" Figures data[4] Quit[0] \n";
cout<<"Total number of figures: "<<total<<endl; 
cout<<"###############################################################\n";             
}


void Menue::showdata_menue()

{
cout<<"############### DATA MENUE ##################\n";
cout<<"# Rectangle[1] Ring[2] Trienagle[3] Quit[0] #\n";
cout<<"#############################################\n";
cout<<endl;
}

void Menue::rectdata_menue()
{
cout<<"############### RECTANGLES ###################\n";
}
void Menue::tridata_menue()
{
cout<<"############### TRIANGLES ####################\n";
}
void Menue::ringdata_menue()
{
cout<<"################## RINGS #####################\n";
}