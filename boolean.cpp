#include<iostream>

int main(){


bool red_light{false};
bool green_light{true};

if(red_light==true){
    std::cout<<"stop!"<<std::endl;
}else{
    std::cout<<"go through"<<std::endl;
}

if(green_light==false)
{
    std::cout<<"the light is green"<<std::endl;
}
else{
    std::cout<<"the light is not green"<<std::endl;
}
std::cout<<"size of bool:"<<sizeof(bool)<<std::endl;
//printing out bool
//0=false
//1=true
std::cout<<std::endl;
std::cout<<"red light:"<<red_light<<std::endl;
std::cout<<"green light:"<<green_light<<std::endl;

std::cout<<std::endl;
std::cout<<std::boolalpha;
std::cout<<"red light:"<<red_light<<std::endl;
std::cout<<"green light:"<<green_light<<std::endl;
return 0;
}