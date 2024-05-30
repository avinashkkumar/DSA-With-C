#include<iostream>
#include<vector>

int main(){
    std::vector<int> vct;
    int insertion;
    std::cout << "Enter the number of elements that you want to enter into the vector : " ;
    std::cin >> insertion;
    for (size_t i = 0; i < insertion; i++)
    {
        int n;
        std::cout << "Enter the element at posiiton " << i ;
        std::cin >> n;
        vct.push_back(n);
    }
    
}