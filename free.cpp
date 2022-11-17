#include<iostream>
//pre defined function
//we can add number and the compiler first find the function and then apply addition 
// sum=addnumbers(a,b);
/*int addnumbers(int first_param,int second_param){
    int result = first_param+second_param;
    return result;
    }*/
/*int multiply(int firstnumber,int secondnumber){
    int product=firstnumber*secondnumber;
    return product;
} */

int division(int a,int b){
    int ans=a/b;
    return ans;
}


int main()
{
    int first_number(21);
    int second_number(7);

    std::cout<<"first no."<<first_number<<std::endl;
    std::cout<<"second no."<<second_number<<std::endl;
    
    /*int product=first_number*second_number;
    std::cout<<"product"<<product<<std::endl;
    int sum=first_number+second_number;
    std::cout<<"sum:"<<sum<<std::endl;*/
    int divide=first_number/second_number;
    std::cout<<"divide"<<divide<<std::endl;
    

   /*sum=addnumbers(25,7);
    std::cout<<"sum"<<sum<<std::endl;

    sum=addnumbers(100,78);
    std::cout<<"sum:"<<sum<<std::endl;

    std::cout<<"sum:"<<addnumbers(23,56)<<std::endl;

    std::cout<<"sum:"<<addnumbers(98,6)<<std::endl;

   product =multiply(7,8);
   std::cout<<"product"<<product<<std::endl;

   std::cout<<"product"<<multiply(78,6)<<std::endl;*/
    
   divide=division(45,5);
   std::cout<<"divide"<<divide<<std::endl;

   std::cout<<"divide"<<division(48,6)<<std::endl; 
   return 0;
}

