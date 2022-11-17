#include<iostream>
int main(){
    int max{};
    int a{135};
    int b{45};

    max=(a>b)?a:b;

    std::cout<<"max:"<<max<<std::endl;

    std::cout<<std::endl;
    std::cout<<"speed"<<std::endl;

    bool fast=false;
    int speed{fast?300:150};

    std::cout<<"the speed is:"<<speed<<std::endl;

}