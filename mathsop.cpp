#include<iostream>
#include<cmath>

int main(){

    double weight{7.7};
    //floor
    std::cout<<"weight rounded to floor is: "<<std::floor(weight)<<std::endl;

    //ceil
    std::cout<<"weight rounded to ceil is: "<<std::ceil(weight)<<std::endl;
    return 0;
}