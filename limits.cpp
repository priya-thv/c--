#include<iostream>
#include<limits>

int main(){
    std::cout<<"the range (with lowest)for float is form "<<std::numeric_limits<float>::lowest()
    <<" the range for double; "<<std::numeric_limits<double>::max()<<"the range for int(short)"
    <<std::numeric_limits<int>::min()<<std::endl;
    return 0;
}