#include"menue.h"
#include"rectangle.h"
#include"triangle.h"
#include"ring.h"

Menue::Menue()
{
       
}
void Menue::main_menue()
{
cout<<"####################### MAIN MENUE ###########################\n";
cout<<"# Chose the firuge u want to generate                        #\n";
cout<<"# Rectangle[1] Ring[2] Trienagle[3] Activity data[4] Quit[0] #\n";
cout<<"##############################################################\n";             
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