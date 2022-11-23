#include<iostream>
using namespace std;
int main()
{
    int num{};
    const int lower{10};
    const int upper{20};
    cout<<boolalpha;
    //Example 1 with AND
    /*cout<<"Enter a integer - bounds are  "<<lower<<" & "<<upper<<" : "<<endl;
    cin>>num;
    bool without_bound{false};

    without_bound = (num > lower && num < upper);

    cout<<num<<" is between "<<lower<<" & "<<upper<<" : "<<without_bound<<endl;*/

    // Example 2 with OR

    /*cout<<"Enter a integer - bounds are  "<<lower<<" & "<<upper<<" : "<<endl;
    cin>>num;
    bool without_bound{false};

    without_bound = (num < lower || num > upper);

    cout<<num<<" is outside "<<lower<<" & "<<upper<<" : "<<without_bound<<endl;*/

    // Example 3 
    cout<<"Enter a integer - bounds are  "<<lower<<" & "<<upper<<" : "<<endl;
    cin>>num;
    bool without_bound{false};

    without_bound = (num == lower || num == upper);

    cout<<num<<" is one of the bounds "<<lower<<" & "<<upper<<" : "<<without_bound<<endl;
    return 0;

}