#include<iostream>
using namespace std;
int main()
{
    const int lower{0};
    const int upper{100};
    int grade{};
    char letter{};
    cout<<"Enter your grade :"<<endl;
    cin>>grade;
    if (grade >= lower && grade <= upper)
    {
        if (grade > 90)
        {
            letter = 'A';
            cout<<"Your grade is "<<letter<<endl;
        }
        else if (grade > 80)
        {
            letter = 'B';
            cout<<" Your grade is "<<letter<<endl;
        }
        else if (grade > 70)
        {
            letter = 'C';
            cout<<"Your grade is "<<letter;
        }
        else if (grade >= 50)
        {
            letter = 'F';
            cout<<"Your grade is "<<letter<<endl;
            cout<<"You must repeate the class "<<endl;
        }
    if(grade <= 50)
    cout<<"Sorry must repate your class "<<endl;
    }
    else{cout<<"Your grade is not in range "<<endl;
    }
return 0;
}