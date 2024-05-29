#include <iostream>

int main(){
    int previous = 0;
    int current = 1;
    int iterations ;
    std::cout << "Enter the number of iterations : ";
    std::cin >> iterations;
    for (size_t i = 0; i < iterations; i++)
    {
        std::cout << current << std::endl;
        current = current + previous;
        previous = current - previous;
    }
    
}