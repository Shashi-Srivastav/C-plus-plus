#include<iostream>
using namespace std;
int main()
{
    int total{};
    int num1{},num2{},num3{};
    const int count{3};
    cout<<"Enter 3 number sepratedly "<<endl;
    cin>>num1>>num2>>num3;
    cout<<"Number 1 is "<<num1<<"\nNumber 2 is "<<num2<<"\nNumber 3 is "<<num3<<endl;
    total = num1+num2+num3;
    double average{0.0};
    // Covert int total to double total
    average = static_cast<double>(total)/count;
    cout<<"Total = "<<total<<endl;
    cout<<"Average = "<<average<<endl;
    return 0;
}