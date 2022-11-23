#include<iostream>
using namespace std;
int main()
{
    int small_rooms{0};
    int large_rooms{0};
    const double tax_price{0.06};
    const int days{30};
    const double small_room_price{25};
    const double large_room_price{35};
    cout<<"\nWelcome To Frank's Carpet Cleaning Servie "<<endl<<endl;;
    cout<<"How many small rooms you want to clean? ";
    cin>>small_rooms;
    cout<<"How many large rooms you want to clean? ";
    cin>>large_rooms;
    cout<<"\nEstimate for carpet cleaning service "<<endl;
    cout<<"Number of samll rooms "<<small_rooms<<endl;
    cout<<"Number of large rooms "<<large_rooms<<endl;
    cout<<"Price per small rooms "<<small_room_price<<"$"<<endl;
    cout<<"Price per large rooms "<<large_room_price<<"$"<<endl;
    cout<<"Cost "<<(small_rooms*small_room_price)+(large_rooms*large_room_price)<<"$"<<endl;
    cout<<"Tax "<<((small_room_price*small_rooms)+(large_rooms*large_room_price))*tax_price<<"$"<<endl;
    cout<<"===================================="<<endl;
    cout<<"Total Cost = "<<(small_room_price*small_rooms)+(large_room_price*large_rooms)+((small_room_price*small_rooms)+(large_rooms*large_room_price))*tax_price<<endl;
    cout<<"This is valid for "<<days<<endl<<endl;;
    return 0;
}