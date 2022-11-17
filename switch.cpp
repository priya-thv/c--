#include<iostream>
#include<string>

//tools
const int pen{10};
const int  marker{20};
 
int main(){
     int tool{pen};
     switch(tool){
        case pen:{
            std::cout<<"active tool is pen"<<std::endl;
        }break;
        case marker:{
            std::cout<<"active tool is marker"<<std::endl;
        }break;
        default:{
            std::cout<<"cant match any tool"<<std::endl;
        }
     }    

     std::string name{"priya"};

     switch(name){
        case kim:{
            std::cout<<"its kim"<<std::endl;

        }break;
        case priya:{
            std::cout<<"its priya"<<std::endl;
        }
     }
    }




