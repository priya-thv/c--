#include<iostream>
//std::cout ; printing stuff to the console

/*int main()
{
    std::cout<<"hello world"<<std::endl;

    std::cout<<"the number is;"<<12<<std::endl;

    int age{21};
    std::cout<<"the age s"<<age<<std::endl;

    //error
    std::cerr<<"std::cerr output:something went wrong"<<std::endl;

    //log message
    std::clog<<"std::clog output:this is log message"<<std:endl;
    }*/

 int age;
 std::string full_name;

 /*int main()
 {
    std::cout<<"enter name"<<std::endl;
    std::cin>>name;

    std::cout<<"enter age"<<std::endl;
    std::cin>>age;
    std::cout<<"hello"<<name<<"!you are"<<age<<"years old"<<std::endl;

 } */  
int main() 
{
   std::cout<<"enter name "<<std::endl;
   std::getline(std::cin,full_name);
   std::cout<<"type age"<<std::endl;
   std::cin>>age;
   std::cout<<"hello"<<full_name<<"! you are"<<age<<"years old"<<std::endl;


}
