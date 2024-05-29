#include <iostream>
#include <math.h>

bool checkForPrime(int number,int sqrt_num){
    if(number == 0 || number == 1){
        return false;
    }
    if(number == 2){
        return true;
    }
    if(number%2 == 0){
        return false;
    }
    for (size_t i = 3; i < sqrt_num; i+2)
    {
        if (number%i==0)
        {
            return false;
        }
        
    }
    return true;
    
}

int main(){
    int input_number = 0;
    std::cout << "Enter the number to check if its prime or not : " ;
    std::cin >> input_number;
    int sqrt_input = int(sqrt(input_number));
    if(checkForPrime(input_number,sqrt_input)){
        std::cout << "Its a prime number" << std::endl;
    }else{
        std::cout << "Its not a prime number" << std::endl;
    }
        
}