/* Problem Solving 
Frank's Room Cleaning Service 
Each Room Cleaning Charge $30
Tax = 6%
*/
#include<iostream>
using namespace std;
int main()
{
    int rooms{0};
    const double room_tax{0.06};
    const double cleaning_room_cost{30};
    const int days{30};
    cout<<"Frank's Room Cleaning Service "<<endl;
    cout<<"How Many Rooms You Want To Clean ";
    cin>>rooms;
    cout<<"Price for each rooms ="<<cleaning_room_cost<<"$"<<endl;
    cout<<"Cost of cleaning is = "<<cleaning_room_cost*rooms<<"$"<<endl;
    cout<<"Tax ="<<room_tax*rooms*cleaning_room_cost<<"$"<<endl;
    cout<<"=========================================="<<endl;
    cout<<"Total Cost df cleaning = "<<(cleaning_room_cost*rooms*room_tax)+(rooms*cleaning_room_cost)<<"$"<<endl;
    cout<<"This is valid upto "<<days<<endl;
    return 0;    
}