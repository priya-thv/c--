#include<iostream>

int main()
{
    int value{45};

    std::cout<<"the value is:"<<value<<std::endl;

    std::cout<<std::endl;

    value+=5;
    --value;
    std::cout<<" the value now is:"<<value--<<std::endl;
    

    value-=5;
    std::cout<<" the value now is:"<<value++<<std::endl;

    value*=6;
    std::cout<<" the value now is:"<<value<<std::endl;


    value/=4;
    std::cout<<" the value now is:"<<value<<std::endl;

    value%=5;
    std::cout<<" the value now is:"<<value<<std::endl;
    
    return 0;
}