#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double number{};
    cout<<"Enter an interger : ";
    cin>>number;
    cout<<"The Sqe Root of "<<number<<" is "<<sqrt(number)<<endl;
    cout<<"Cubed root of "<<number<<" is "<<cbrt(number)<<endl;

    cout<<"The sine of "<<number<<" is "<<sin(number)<<endl;
    cout<<"the cosine of "<<number<<" is "<<cos(number)<<endl;

    //cout<<"The ceil of "<<number<" is "<<ceil(number)<<endl;
    cout<<"The floor of "<<number<<" is "<<floor(number)<<endl;
    cout<<"The round of "<<number<< " is "<<round(number)<<endl;

    double power{};
    cout<<"\nEnter a power to raise"<<number<<" to:";
    cin>>power;
    cout<<number<<" raised to the "<<power<<" power is: "<<pow(number,power)<<endl;
    cout<<endl;

    return 0;
}