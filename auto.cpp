#include<iostream>


int main(){
     

     auto var1{12};
     auto var2{23.4};
     auto var3{1234l};

    std::cout<<sizeof(var1)<<std::endl;
    std::cout<<sizeof(var2)<<std::endl;
    std::cout<<sizeof(var3)<<std::endl; 
}