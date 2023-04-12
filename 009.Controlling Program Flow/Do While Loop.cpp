#include<iostream>
using namespace std;
int main()
{
    char selection{};
    cout<<"--------------------------"<<endl;
    cout<<" Menu !!!"<<endl;
    do
    {
        cout<<"1.Do This"<<endl;
        cout<<"2.Do That"<<endl;
        cout<<"3.Do Something Different"<<endl;
        cout<<"4.Quit"<<endl;
        cout<<"Enter Your Selection : ";
        cin>>selection;
        if (selection =='1')
        {
            cout<<"1.Doing This"<<endl;
            cout<<"====================="<<endl;
        }
        else if (selection == '2')
        {
            cout<<"2.Doing That"<<endl;
            cout<<"====================="<<endl;
        }
        else if (selection =='3')
        {
            cout<<"3.Doing Something Else"<<endl;
            cout<<"====================="<<endl;
        }
        else {cout<<"Incorrect Selection !!!"<<endl;
        cout<<"====================="<<endl;}
                      
        
    } while (selection != 'q' && selection != 'Q');
    return 0;
}