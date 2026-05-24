#pragma once
class Triangle{

    private:
    double side;
    public:
    Triangle();
    Triangle(double);
    double get_perimeter();//getters
    double get_area();
    void set_side(double);//setter
    
};