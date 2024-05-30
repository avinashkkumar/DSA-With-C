#include<iostream>
// Reference variable are the variable in cpp which point to another variable memory location.
// it is can be considered for learning purpose that it is a pointer to another variable.
// The operation that we do to reference variable will affect the actual variable.
// This is can be used to pass the memory location of the variable to another function so that they are able to modify the variable.

void incre(int& num){
    num += 5;
}

void incr(int num){
    num += 5;
}

int main(){
    int n = 0;
    std::cout << n << std::endl;
    incre(n);
    std::cout << n << std::endl;
    incr(n);
    std::cout << n << std::endl;
}