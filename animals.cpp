#include<iostream>

int main()
{
 /*   int elephant_count;
    //variable may contain random garbage value,warning

    int lion_count{};//initalize to zero
    int dog_count{10};//initalize to 10
    int cat_count{15};//initalize to 15

    int domesticated_animal{dog_count+cat_count};
    //can use expression initalizer
     std::cout<<"d_a"<<domesticated_animal<<std::endl;
   // int bad_initalization{doesnt_exist+doesnt_exist2};
    //wont compile the expression in the bracket uses undeclared variables

   //int narrowing_conversion{2.9};
    //2.9 is a type double with the wider range then int.error or warning*/

 //functional initalization
 /*
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count+orange_count);

    int narrowing_conversion_functional(2.9);

    std::cout<<"ncf"<<narrowing_conversion_functional<<std::endl;*/


  //assigment initalizAtion

  int bike_count=3;
  int truck_count=7;
  int vehical_count=bike_count+truck_count;
  int narrowing_conversion_assignment=2.9;

  std::cout<<"narrowingca"<<narrowing_conversion_assignment<<std::endl;

  //checl the size with sizeof
  std::cout<<"size of int"<<sizeof(int)<<std::endl;
  std::cout<<"size of truckcount"<<sizeof(truck_count)<<std::endl;
    return 0; 
}


