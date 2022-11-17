#include<iostream>


int addnumbers(int first_number,int second_number){
    int sum= first_number+ second_number;
    return sum;

}

int main()
{
    int firstnumber=12;
    int secondnumber=9;

    int sum = firstnumber+secondnumber;

    sum=addnumbers(firstnumber,secondnumber);
    sum=addnumbers(34,7);
    
    std::cout<<"the sum of two numers is:" <<sum<<std::endl;
    std::cout<<"the sum of two number is:" <<addnumbers(23,8)<<std::endl;
    return 0;
}




/*int main()
{
    int amount1;
    cin>>amount1;  cin is an extraction operator

  int amount2;
   cin>>amount2;

    int sum=amount1+amount2;
    cout<<"sum\n";cout is an inserton operator
    cout<<sum;
       
    return 0;

}*/
