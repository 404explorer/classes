#pragma once
#include<iostream>
#include<vector>
using namespace std;

class Menue{

    public:
        Menue();
        void main_menue();
        void showdata_menue();
        void rectdata_menue();
        void tridata_menue();
        void ringdata_menue();
    private:
        int choice;

};