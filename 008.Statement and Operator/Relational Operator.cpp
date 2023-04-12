#include<iostream>
using namespace std;
int main()
{
    int num1{};
    int num2{};
    cout<<boolalpha;

    cout<<"Enter 2 number which is seprated by space "<<endl;
    cin>>num1>>num2;
    cout<<num1<<" > "<<num2<<" : "<<(num1>num2)<<endl;
    cout<<num1<<" < "<<num2<<" : "<<(num1<num2)<<endl;
    cout<<num1<<" >= "<<num2<<" : "<<(num1>=num2)<<endl;
    cout<<num1<<" <= "<<num2<<" : "<<(num1<=num2)<<endl;
    cout<<"================================="<<endl;
    const int lower{10};
    const int upper{20};

    cout<<"Enter number which is grater than "<<lower<<" : ";
    cin>>num1;
    cout<<num1<<" > "<<upper<<" is "<<(num1>upper)<<endl;

    cout<<"Enter number which is grater than "<<upper<<" : ";
    cin>>num2;
    cout<<num2<<" > "<<upper<<" is "<<(num2>upper)<<endl;  

    return 0;
} 