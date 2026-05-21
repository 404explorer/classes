//declaration of r
class Rectangle{

    //declaration of private methods
    private:
        double height;
        double width;
    //declarationn of public methods
    public:
        Rectangle();//default constructor
        Rectangle(int,int);//constructor
        void set_height(double);//mutaters
        void set_width(double);
        double get_width();//accessors
        double get_height();
        double get_area();
}