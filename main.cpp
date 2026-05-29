

#include <vector>
#include<iostream>
#include<cstdlib>
#include"triangle.h"
#include"ring.h"
#include"rectangle.h"
#include"menue.h"
using namespace std;
typedef string st;

vector<Rectangle> rect_list;
vector<Triangle> tri_list;
vector<Ring> ring_list;
//all functions of pushing object to "database"
//are here
void create_rect();
void create_tri();
void create_ring();
void show_data_menue(bool);

//main function 
int main(){
    system("cls");
    bool run=true;
    bool figure_menue_chk=true;
    Menue One;
    while(run)
        {
            One.main_menue(rect_list.size(),ring_list.size(),tri_list.size());
            show_data_menue(figure_menue_chk);
            std::cout<<"> ";
            int chk;
            cin>>chk;
            if(chk==1)
                {
                    create_rect();
                }
            else if(chk==2)
                {
                    create_ring();
                }
            else if(chk==3)
                {
                    create_tri();
                }
            else if(chk==4)
                {
                    std::cout<<"dta\n";
                }
            else if (chk==0)
                {
                    run=false;
                }
            else if(chk==4){
                figure_menue_chk=false;
            }
            else{
                    std::cout<<"try again\n";
                }
     system("cls");           
    }
        
    
    std::cout<<"program terminated\n";
    return 0;
}

void create_rect()
{   
    double h,w;
    std::cout<<"[Creating rectangle] \n";
    std::cout<<"[height]> ";cin>>h;
    std::cout<<"[width]> ";cin>>w;
    rect_list.push_back(Rectangle(h,w));

}

void create_tri()
{
    double s;
    std::cout<<"[Creating triangle]\n";
    std::cout<<"[side]> ";cin>>s;
    tri_list.push_back(Triangle(s));

}

void create_ring()
{
    double out,inn;
    std::cout<<"[Creating ring]\n";
    std::cout<<"[outer diameter]> ";cin>>out;
    std::cout<<"[inner diameter]> ";cin>>inn;
    ring_list.push_back(Ring(out,inn));

}

void show_data_menue(bool fi){
    if(fi=false){
    cout<<"#data#\n";}
}