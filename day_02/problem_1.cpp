#include<iostream>

void array_add(int (&arr)[10]){
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "Enter the data for position " << (i+1) << " : ";
        std::cin >> arr[i];
    }
    
}


void search_value(int (&arr)[10],int seeking_value){
    bool found = false;
    for (size_t i = 0; i < 10; i++)
    {
        if (arr[i]==seeking_value)
        {
            std::cout << std::endl << "The value to be searched is " << seeking_value << " and it is present at " << i << std::endl;
            found = true;
        }
        
    }
    if (!found)
    {
        std::cout << std::endl << "The value is not found in the array" << std::endl;
    }
}

int main(){
    int arr[10];
    int search;
    array_add(arr);
    std::cout << std::endl << "Enter the value to search : " << std::endl;
    std::cin >> search ;
    search_value(arr,search);
}