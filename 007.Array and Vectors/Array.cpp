#include<iostream>
using namespace std;
int main ()
{
    char vowels[5] {'a','e','i','o','u'};
    cout<<"\nHere is the first vowels "<<vowels[0]<<endl;
    cout<<"Here is the fourth vowels "<<vowels[4]<<endl;
    cout<<"=================================="<<endl;
    int array[]{10,20,30,40,50};
    cout<<"First value from array "<<array[0]<<endl;
    cout<<"Second value from array "<<array[1]<<endl;
    cout<<"Third value from array "<<array[2]<<endl;
    cout<<"Fourth value from array "<<array[3]<<endl;
    cout<<"Fifth value from array "<<array[4]<<endl;
    cout<<"==================================="<<endl;
    cin>>array[0];
    cin>>array[1];
    cin>>array[2];
    cin>>array[3];
    cin>>array[4];
    cout<<"New updated values are :"<<endl;
     cout<<"First value from array "<<array[0]<<endl;
    cout<<"Second value from array "<<array[1]<<endl;
    cout<<"Third value from array "<<array[2]<<endl;
    cout<<"Fourth value from array "<<array[3]<<endl;
    cout<<"Fifth value from array "<<array[4]<<endl;
    return 0;
}