#include<iostream>

int main()
{
    //compile time error
    std::cout<<"hello world!" <<std::endl;


    //run time error
    int value = 7/10;
    std::cout<<"value:"<< value<< std::endl;
    return 0; 
}

