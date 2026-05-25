#include"menue.h"
#include"rectangle.h"
#include"triangle.h"
#include"ring.h"

Menue::Menue()
{
    show_menue();
    
}
void Menue::menue_chk_process(int c){
    if(c==1){
        cout<<"Rectanlge initiation>\n";
        int rht,rwt;
        cout<<"Enter height: ";cin>>rht;
        cout<<"Enter width: ";cin>>rwt;
        Rectangle R(rht,rwt);
        R.get_area();
        R.get_perimeter();
    }
    else if (c==3)
    {
        cout<<"Creating triangle>\n";
        cout<<"enter side>\n";
        int tht;cin>>tht;
        Triangle T(tht);
        T.get_area();
        T.get_perimeter();

    }
    else if (c==2)
    {
          cout<<"Creating ring>\n";
          double inner, outer;
        cout<<"enter inner and outer radiuses>\n";
        Ring Rn(inner, outer);
        Rn.get_area();
        Rn.get_perimeter();
    }

}



void Menue::show_menue(){
    int chk;
    while(true)
    {
        cout<<"####################### MAIN MENUE ###########################\n";
        cout<<"# Chose the firuge u want to generate                        #\n";
        cout<<"# Rectangle[1] Ring[2] Trienagle[3] Activity data[4] Quit[0] #\n";
        cout<<"##############################################################\n";
        
        cin>>chk;
        menue_chk_process(chk);

        if(chk==1 || chk==2 || chk==3 )
        {
           cout<< chk<< endl;//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        }
        else if (chk==0)
        {
            break;
        }
        else{
            continue;
        }  

    }
    
}