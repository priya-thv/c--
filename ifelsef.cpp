#include<iostream>
using namespace std;

int main()
{
    int number1{75};
    int number2{60};

    bool result=(number1<number2);
    std::cout<<std::boolalpha<<"result:"<<result<<std::endl;
    
    std::cout<<std::endl;
    std::cout<<"free standing if statement "<<std::endl;

    //if (result){}
    if (result==true) {
        std::cout<<number1<<"is less than "<<number2<<std::endl;

    }   
    //if(!result){
      if(!(result==true)){  
        std::cout<<number1<<"is not less than "<<number2<<std::endl;
      } 

    std::cout<<std::endl;
    std::cout<<"using    else clause:"<<std::endl;

    if(result==true){
        std::cout<<number1<<"is less than "<<number2<<std::endl;
    }else{ 
        std::cout<<number1<<"is not less than "<<number2<<std::endl;

    }
    return 0;   
    }
    
