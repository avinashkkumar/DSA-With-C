#include<iostream>


void print_result(float output){
    std::cout << output << std::endl;
}

void addition(){
    int num1, num2;
    std::cout << "Enter number 1 and number 2 : " ;
    std::cin >> num1 >> num2 ;
    print_result(num1+num2);
}

void substraction(){
    int num1, num2;
    std::cout << "Enter number 1 and number 2 : " ;
    std::cin >> num1 >> num2 ;
    print_result(num1-num2);
}

void multiplication(){
    int num1, num2;
    std::cout << "Enter number 1 and number 2 : " ;
    std::cin >> num1 >> num2 ;
    print_result(num1*num2);
}

void division(){
    int num1, num2;
    std::cout << "Enter number 1 and number 2 : " ;
    std::cin >> num1 >> num2 ;
    print_result(num1/num2);
}


int main(){
    int selection = 0;
    std::cout << "Enter the selection of operation" << std::endl;
    std::cout << "1. addition" << std::endl;
    std::cout << "2. substraction" << std::endl;
    std::cout << "3. multiplication" << std::endl;
    std::cout << "4. division" << std::endl;
    std::cin >> selection ;
    switch (selection)
    {
    case 1:
        addition();
        break;
    case 2:
        substraction();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        division();
        break;
    
    default:
        break;
    }
}