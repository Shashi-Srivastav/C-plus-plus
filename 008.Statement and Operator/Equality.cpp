#include<iostream>
using namespace std;
int main()
{
    bool equal_result{false};
    bool not_equl_result{false};

    int num1{},num2{};
    cout<<"Enter two number "<<endl;
    cin>>num1>>num2;
    equal_result = (num1 == num2);
    not_equl_result = (num1 != num2);

    cout<<boolalpha;//To convert 1,0 to True and False

    cout<<"Comparision is (Equal) :"<<equal_result<<endl;
    cout<<"Comparision is (Not Equal) :"<<not_equl_result<<endl;
    cout<<"================================="<<endl;
    // Example 2 for char
    char char1{},char2{};
    cout<<"Enter two character seprated by space "<<endl;
    cin>>char1>>char2;
    equal_result = (char1 == char2);
    not_equl_result = (char1 != char2);

    cout<<boolalpha;//To convert 1,0 to True and False

    cout<<"Comparision is (Equal) :"<<equal_result<<endl;
    cout<<"Comparision is (Not Equal) :"<<not_equl_result<<endl;
    cout<<"==================================="<<endl;
    // Example 3 for double

    double double11{}, double22{};
    cout<<"Enter two double number "<<endl;
    cin>>double11>>double22;
    equal_result = (double11 == double22);
    not_equl_result = (double11 != double22);

    cout<<boolalpha;//To convert 1,0 to True and False

    cout<<"Comparision is (Equal) :"<<equal_result<<endl;
    cout<<"Comparision is (Not Equal) :"<<not_equl_result<<endl;
    cout<<"==================================="<<endl;

    // Example 4 
    cout<<"Enter integer and double seprated by space"<<endl;
    int num111{};
    double double111{};
    cin>>num111>>double111;
    equal_result = (num111 == double111);
    not_equl_result = (num111 != double111);
    cout<<"Comparision is (Equal) :"<<equal_result<<endl;
    cout<<"Comparision is (Not Equal) :"<<not_equl_result<<endl;


    return 0;

}
