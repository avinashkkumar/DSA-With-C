#include<iostream>
#include<vector>

int main(){
    std::vector<int> vct;
    int element,size,it,confirm, position, position_value;
    std::cout << "Enter the size of the vector : ";
    std::cin >> size;
    it = size;
    while (it--)
    {
        std::cout << "Enter the value at " << (size-it) << " : ";
        std::cin >> element;
        vct.push_back(element);
    }

    for(auto x:vct)std::cout << x  << " ";


    std::cout << std::endl << std::endl;

    std::cout << "Would you like to delete the last element of the vecor press 1 : " ;
    std::cin >> confirm;
    if(confirm)vct.pop_back();

    std::cout << "Enter the position element that you want to replace : ";
    std::cin >> position;
    std::cout << "Enter the element that should be at " << position << " : ";
    std::cin >> position_value;
    vct.at(position - 1) = position_value;

    for(auto x:vct)std::cout << x << " "; 


    std::cout << std::endl <<  "Enter Position of the element that you want to remove : ";
    std::cin >> position;
    vct.erase(vct.begin()+position);

    for(auto x:vct)std::cout << x << " ";
    
    std::cout << std::endl;
}