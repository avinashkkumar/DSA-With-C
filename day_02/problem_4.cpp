#include<iostream>

class polygon{
    protected:
        int length,bredth;
        int area;
        int parameter;
    

    public:
        void set_value(){}
        void set_parameter(){}
        void get_parameter(){}
        void set_area(){}
        void get_area(){}

};


class rectangle : public polygon{
    public:
        void set_value(int len, int bre){
            length = len;
            bredth = bre;
        }
        void set_parameter(){
            parameter = ((2*length)+(2*bredth));
        }
        void get_parameter(){
            if(parameter){
                std::cout << "The parameter of the rectangle is : " << parameter << std::endl;
            }
        }
        void set_area(){
            area = length * bredth;
        };
        void get_area(){
            std::cout << "The area of the rectangle is : " << area << std::endl;
        }
};

class square : public polygon{
    public:
        void set_value(int len){
            length = len;
        }
        void set_parameter(){
            parameter = (4*length);
        }
        void get_parameter(){
            std::cout << "The parameter of the square is : " << parameter << std::endl;
        }
        void set_area(){
            area = length * length;
        }
        void get_area(){
            std::cout << "The area of the square is : " << area << std::endl;
        }
};

int main(){
    square sq;
    sq.set_value(5);
    sq.set_area();
    sq.set_parameter();
    sq.get_area();
    sq.get_parameter();


    rectangle rc;
    rc.set_value(5,10);
    rc.set_area();
    rc.set_parameter();
    rc.get_area();
    rc.get_parameter();
}