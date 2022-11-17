#include<iostream>
#include<iomanip>

int main()
{
    //declare and initalize the variables
    float number1{1.1234567890f};//4 byte precision:7
    double number2{1.12345677888765440};//8 byte precision:15
    long double number3{1.12334567890876543220l};//12 byte precision 20

    //print out sizes
     std::cout<<"size of float:"<<sizeof(float)<<std::endl;
     std::cout<<"size of double:"<<sizeof(double)<<std::endl;
     std::cout<<"size of long double:"<<sizeof(long double)<<std::endl;
    
    std::cout<<std::setprecision(10);//control the recision from std::cout
    std::cout<<"number 1:"<<number1<<std::endl;
    std::cout<<"number 2:"<<number2<<std::endl;
    std::cout<<"number 3:"<<number3<<std::endl;

    //float poblems:the precision is  usually too limited 
    //for a lot of (float)(19247886416.f)
     double number4{192400023.0}; //error:narrowing conversion
     std::cout<<"number4:"<<number4<<std::endl;


    double number10{-5.6};
    double number11{};
    double number12{};

    //infinity
    double result{number10/number11};

    std::cout<<number10<<"/"<<number11<<"yeilds"<<result<<std::endl;
    std::cout<<result<<"+"<<number10<<"yeilds"<<result+number10<<std::endl;

    //nan
    result=number11/number12;

    std::cout<<number11<<"/"<<number12<<"="<<result<<std::endl;



}