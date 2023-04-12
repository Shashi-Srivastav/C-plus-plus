#include<iostream>
using namespace std;
int main()
{
    cout<<"The size of some variable :"<<endl;
    cout<<"==========================="<<endl;
    cout<<"Size of int: "<<sizeof(int)<<" bytes"<<endl;
    cout<<"Size of char: "<<sizeof(char)<<" bytes"<<endl;
    cout<<"Size of long: "<<sizeof(long)<<" bytes"<<endl;
    cout<<"Size of long long: "<<sizeof(long long)<<" bytes"<<endl;

int age{20};
double height{5.6};
    cout<<"Size of Age: "<<sizeof(age)<<" bytes"<<endl;
    cout<<"Size of heigth: "<<sizeof(height)<<" bytes"<<endl;

        return 0;
}