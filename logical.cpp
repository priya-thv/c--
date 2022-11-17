#include<iostream>

int main(){
    bool a{true};
    bool b{false};
    bool c{true};

    std::cout<<std::boolalpha;
    std::cout<<"a:"<<a<<std::endl;
    std::cout<<"b:"<<b<<std::endl;
    std::cout<<"c:"<<c<<std::endl;

    //and:evalutes to true when all operands are true
    //A single ffalse operand will drag
    //the entire expression to evaluating false 

    std::cout<<std::endl;
    std::cout<<"basic and operations"<<std::endl;

    std::cout<<"a&&b:"<<(a&&b)<<std::endl;
    std::cout<<"a&&c:"<<(a&&c)<<std::endl;
    std::cout<<"a&&b&&c"<<(a&&b&&c)<<std::endl;
    
    //OR evaluates to true when at least one operand is true
    //A single true operand will push
    //the entire expression to evaluating true

    std::cout<<std::endl;
    std::cout<<"basic Or operations"<<std::endl;
    std::cout<<"a||b:"<<(a||b)<<std::endl;
    std::cout<<"a||c:"<<(a||c)<<std::endl;
    std::cout<<"a||b||c"<<(a||b||c)<<std::endl;

    std::cout<<"!(a&&b)||c"<<(!(a&&b)||c)<<std::endl;


    int d{34};
    int e{20};
    int f{11};


    std::cout<<"(d>e)&&(d>f):"<<((d>e)&&(d>f))<<std::endl;
    std::cout<<"(d==e)&&(e<=f):"<<((d==e)&&(e<=f))<<std::endl;

    return 0;
    
}