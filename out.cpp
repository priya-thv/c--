#include<iostream>
#include<iomanip>
#include<ios>

int main(){

    

  std::cout<<"lastname"<<std::setw(7)<<"firstname"<<std::setw(9)<<std::endl;
  std::cout<<"kumari"<<std::setw(7)<<"priya"<<std::setw(9)<<std::endl;
  int col_width=9;
  std::cout<<std::setw(col_width)<<"kim"<<std::setw(col_width)<<"taehung"<<std::endl;


  double a{3.24566};
  double b{4556.245};
  int c{6};

  std::cout<<std::showpoint;

  std::cout<<"A: "<<a<<std::endl;
  std::cout<<"b: "<<b<<std::endl;
  std::cout<<"c: "<<c<<std::endl;


  std::cout<<"noshowpoint"<<std::noshowpoint<<std::endl;
  std::cout<<"A: "<<a<<std::endl;
  std::cout<<"b: "<<b<<std::endl;
  std::cout<<"c: "<<c<<std::endl;

  
  
  return 0;
}
     
     