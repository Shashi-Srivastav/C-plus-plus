#include<iostream>
using namespace std;
int main()
{
    int num1{100};
    int num2{200};

    cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;

    // Using Variable
    int result{0};
    result = num1 + num2;
    cout<<num1<<" + "<<num2<<" = "<<result<<endl;

    result = num2 - num1;
    cout<<num1<<" - "<<num2<<" = "<<result<<endl;

    result = num1 * num2;
    cout<<num1<<" * "<<num2<<" = "<<result<<endl;

    result = num2 / num1;
    cout<<num2<<" / "<<num1<<" = "<<result<<endl;

    result = num2 % num1;
    cout<<num2<<" % "<<num1<<" = "<<result<<endl;

    num1 = 10;
    num2 = 3;

    result = num1 % num2;
    cout<<num1<<" % "<<num2<<" = "<<result<<endl;
    return 0;
}