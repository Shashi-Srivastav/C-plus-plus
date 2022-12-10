#include<iostream>
using namespace std;
int main()
{
    const int point{100};
    int num{};
    cout<<"Enter your number i'll be compare to it "<<endl;
    cin>>num;
    
    if (num >= point)
    {   
        cout<<"\n================================="<<endl;
        cout<<num<<" is grater then or equal to "<<point<<endl;
        int diff { num - point};
        cout<<num<<" is "<<diff<<" then "<<point<<endl;
    }
    else{
        cout<<"\n=================================="<<endl;
        cout<<num<<" is lesser "<<point<<endl;
        int diff{ point - num};
        cout<<num<<" is "<<diff<<" then "<<point<<endl;
    }
    return 0;

}