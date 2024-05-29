#include<iostream>

void square(){
    int count;
    std::cout << "Enter the iterations : " ;
    std::cin >> count;
    for (size_t i = 0; i < count; i++)
    {
        for (size_t j = 0; j < count; j++)
        {
            if(i == 0 || i == count-1 || j == 0 || j == count-1){
                std::cout << " * " ;
            }else{
                std::cout << "   " ;
            }
        }
        std::cout << std::endl;
        
    }
    
}
void squarefilled(){
    int count;
    std::cout << "Enter the iterations : " ;
    std::cin >> count;
    for (size_t i = 0; i < count; i++)
    {
        for (size_t j = 0; j < count; j++)
        {
            std::cout << " * " ;
        }
        std::cout << std::endl;
        
    }
}
void squareinner(){
    int count;
    std::cout << "Enter the iterations : " ;
    std::cin >> count;
    for (size_t i = 0; i < count; i++)
    {
        for (size_t j = 0; j < count; j++)
        {
            if(i == 0 || i == count-1 || j == 0 || j == count-1){
                std::cout << " ~ " ;
            }else{
                std::cout << " * " ;
            }
        }
        std::cout << std::endl;
        
    }
}

int main(){
    int selection;
    std::cout << "Enter the selection" << std::endl;
    std::cout << "1. square" << std::endl;
    std::cout << "2. filled square" << std::endl;
    std::cout << "3. inner square" << std::endl;
    std::cin >> selection;

    switch (selection)
    {
    case 1:
        square();
        break;
    case 2:
        squarefilled();
        break;
    case 3:
        squareinner();
        break;
    
    default:
        break;
    }
}