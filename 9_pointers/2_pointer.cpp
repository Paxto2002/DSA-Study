#include<iostream>
int main() {
    int a = 0;
    int* ptrOfa = &a;
    float pi = 3.14;
    float* ptrOfPi = &pi;
    std::cout<<"Address of a: "<<ptrOfa<<"\n";
    std::cout<<"Address of pi: "<<ptrOfPi<<"\n";
    std::cout<<"Address of ptrOfPi: "<<&ptrOfPi<<"\n";
    return 0;
}