#include<iostream>
using namespace std;
int main()
{
    const double usd_by_inr{0.012};
    cout<<"Welcome to INR to USD convertor "<<endl;
    double inr{0.0};
    double usd{0.0};
    cout<<"Enter INR ammount here ";
    cin>>inr;
    usd = inr*usd_by_inr;
    cout<<inr<<" INR equivalent to "<<usd<<" USD "<<endl;
    return 0;
}