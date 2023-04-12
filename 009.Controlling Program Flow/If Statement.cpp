#include<iostream>
using namespace std;
int main()
{
    int num{};
    const int lower{10};
    const int upper{100};
    
    cout<<"Enter any number lies between "<<lower<<" to "<<upper<<endl;
    cin>>num;
    if (num >= lower)
    {
        cout<<"=============Statement 1==============="<<endl;
        cout<<num<<" is grater than "<<lower<<endl;
        int diff{};
        diff = (num - lower);
        cout<<num<<" is "<<diff<<" differ then "<<lower<<endl;
    }
    if (num <= upper)   
    {
    cout<<"=============Statement 2==============="<<endl;
        cout<<num<<" is lower than "<<lower<<endl;
        int diff{};
        diff = (upper - num);
        cout<<num<<" is "<<diff<<" differ then "<<upper<<endl;
    }
    if (num >= lower && num <= upper)
    {
        cout<<"=================Statement 3========="<<endl;
        cout<<num<<" is in range "<<endl;
        cout<<"This means statement 1 and 2 must be displayed "<<endl;

    }
    if (num == lower || num == upper)
    {
       cout<<"==================Statement 4==========="<<endl;
       cout<<num<<" is at right on boundary "<<endl; 
    }
    
    
    
    
    return 0;

}