#include<iostream>

int main(){
    unsigned int value1{10};
     signed int value2{-100};

     std::cout<<"value1:"<<value1<<std::endl;
     std::cout<<"value2:"<<value2<<std::endl;
     std::cout<<"size of value 1 :"<<sizeof(value1)<<std::endl;
     std::cout<<"size of value 2:"<<sizeof(value2)<<std::endl;

    //short and long int
     short short_var{-32768};//2 bytes
     std::cout<<"size of sv:"<<sizeof(short_var)<<std::endl; 
     short int short_int{455};
      std::cout<<"size of iv:"<<sizeof(short_int)<<std::endl;
     signed short signed_short{122};
      std::cout<<"size of ss:"<<sizeof(signed_short)<<std::endl;
    signed short int signed_short_int{-456};
    std::cout<<"size of ssi:"<<sizeof(signed_short_int)<<std::endl; 
    unsigned short int unsigned_short_int{456};
     std::cout<<"size of uns:"<<sizeof(unsigned_short_int)<<std::endl;

    int int_var{55};//4bytes
     std::cout<<"size of iv:"<<sizeof(int_var)<<std::endl;
    signed signed_var{66};
     std::cout<<"size of sv:"<<sizeof(signed_var)<<std::endl;
    signed int signed_int{77};
     std::cout<<"size of si:"<<sizeof(signed_int)<<std::endl;
    unsigned int unsigned_int{77};
     std::cout<<"size of ui:"<<sizeof(unsigned_int)<<std::endl;

    long long_var{88};//4 or 8  bytes
     std::cout<<"size of lv:"<<sizeof(long_var)<<std::endl;
    long int long_int{33};
     std::cout<<"size of li:"<<sizeof(long_int)<<std::endl;
    signed long signed_long{44};
     std::cout<<"size of sl:"<<sizeof(signed_long)<<std::endl;
    unsigned long unsigned_long{55};
     std::cout<<"size of ul:"<<sizeof(unsigned_long)<<std::endl;
    

    long long long_long{888};//8bytes
     std::cout<<"size of ll:"<<sizeof(long_long)<<std::endl;
    long long int l_l_i{999};
    std::cout<<"size of lli:"<<sizeof(l_l_i)<<std::endl;
    signed long long s_l_l{444};
     std::cout<<"size of sll:"<<sizeof(s_l_l)<<std::endl;
    signed long long int s_l_l_i{1234};
     std::cout<<"size of slli:"<<sizeof(s_l_l_i)<<std::endl;
    unsigned long long int un_l_l_i{1234};
     std::cout<<"size of unlli:"<<sizeof(un_l_l_i)<<std::endl;


     return 0;
}