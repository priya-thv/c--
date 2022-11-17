#include<iostream>

int main(){

    int number1{45};
    int number2{60};

    std::cout<<"number1"<<number1<<std::endl;
    std::cout<<"number2"<<number2<<std::endl;

    std::cout<<std::endl;
    std::cout<<"comparing variables"<<std::endl;

    std::cout<<std::boolalpha;//male bool show up as true or false insted of 0 or 1
    //stress the need of parantheses here

    std::cout<<"number 1<number2:"<<(number1<number2)<<std::endl;
    std::cout<<"number <=number2:"<<(number1<=number2)<<std::endl;
    std::cout<<"number>=number2:"<<(number1>=number2)<<std::endl;
    std::cout<<"number>number2:"<<(number1>number2)<<std::endl;
    std::cout<<"number 1==number2:"<<(number1==number2)<<std::endl; 
     //std::cout<<std::noboolalpha 
    std::cout<<"number 1!=number2:  "<<(number1!=number2)<<std::endl;
    

    std::cout<<std::endl;
    std::cout<<"storage comparison result and use it later"<<std::endl;

    bool result=(number1==number2);

    std::cout<<number1<<"=="<<number2<<":"<<result<<std::endl;

    return 0;


}