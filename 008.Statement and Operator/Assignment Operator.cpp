#include<iostream>
using namespace std;
int main()
{
    int num1{1};
    int num2{2};
    // Updated
    num1 = 100;
    num2 = 200;
    
    num1 = num2 = 1000;

    cout<<"The value of num1 is "<<num1<<endl;
    cout<<"The value of num2 is "<<num2<<endl;
    return 0;

}