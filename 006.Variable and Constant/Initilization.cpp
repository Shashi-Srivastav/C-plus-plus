#include<iostream>
using namespace std;
int age{18};
int main()

{
    // Initiliztion of variables
    cout<<"Enter the value of length "<<endl;
    int length{0};
    cin>>length;
    cout<<"Enter the value of breath "<<endl; 
    int breath{0};
    cin>>breath;
    cout<<"Area of given values is "<< length*breath<<endl;

    // END

    // Global Variable
    cout<<age<<endl;
    //END
    return 0;
}