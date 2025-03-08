#include <iostream>
#include <cmath>
int main() {
    int a;
    int b;
   
   
    std::cout<<"please input value a "<<std::endl;
    std::cin>> a;
    std::cout<<"please input value b "<<std::endl;
    std::cin>> b;

    int sum=a+b;
    int product =a*b;   
    int power = pow(a,b);
    int sqrt_ =sqrt(a);
   
    std::cout<< sum<< " is the sum of a and b"<<std::endl;
    std::cout<< product<< " is the product of a and b"<<std::endl;
    std::cout<< power<< " is a to the power of b "<<std::endl;
    std::cout<< sqrt_<< " is the sqaure root of a  "<<std::endl;

}
