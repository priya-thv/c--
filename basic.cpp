#include<iostream>

//addition,subtraction,multiplication,division,modulas
                 
//operation presedence and associavity


int main(){
     int a{6};
     int b{1};
     int c{8};
     int d{6};
     int e{4};
     int f{3};
     int g{7};

     int result=a+b*c-d/e-f+g;

     std::cout<<"result:"<<result<<std::endl;
     return 0;
}