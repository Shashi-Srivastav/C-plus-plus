#include <iostream>
using namespace std;
int main()
{
    /*
    int number{};
    cout<<"Enter number : ";
    cin>>number;
    if (number % 2 == 0)
    {
       cout<<"Number is even "<<endl;
    }
    else {cout<<"Number is odd "<<endl;
    }
    cout<<number<<" Is "<<((number % 2 == 0) ? "Even " : " Odd")<<endl;
    */

    // Example 2

    int num1{};
    int num2{};
    cout << "Enter any two number seprated by sapce " << endl;
    cin >> num1 >> num2;
    if (num1 != num2)
    {
        cout <<"Larges "<<((num1 > num2) ? num1 : num2)<<endl;
        cout <<"Smallest "<<((num1 < num2) ? num1 : num2)<<endl;

    }
    else if (num1 == num2)
    {
        cout<<"Number is same can't compare "<<endl;
    }
    
    else{cout<<"Invalid Input !!!"<<endl;
    }

    return 0;
}