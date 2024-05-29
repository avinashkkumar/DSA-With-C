#include<iostream>

int main(){
    std::string input_str = "";
    std::cout << "Enter the number or string to reverse : ";
    std::cin >> input_str;
    std::cout << "The reversed string is : " ;
    for (size_t i = input_str.size(); i > 0; i--)
    {
        std::cout << input_str.at(i-1);
    }
    
}