#include<iostream>
int main(){
    int a = 5;
    int b = 10;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    
}