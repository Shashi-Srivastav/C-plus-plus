#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int score{100};
    int *score_ptr{&score};

    cout<<*score_ptr<<endl;//100

    *score_ptr = 200;
        cout<<*score_ptr<<endl;// Dereferenceing - 200
        cout<<score<<endl;//200 Updated no copy

    cout<<"\n---------------------------"<<endl;
    double high_temp{100.7};
    double low_temp{37.5};
    double *temp_ptr{&high_temp};

    cout<<*temp_ptr<<endl;//100.7
    temp_ptr = &low_temp;
    cout<<*temp_ptr<<endl;//37.5

    cout<<"\n--------------------------------"<<endl;


    string name{"Shashi"};
    string *string_ptr{&name};
    cout<<*string_ptr<<endl;

    name = "james";
    cout<<"\n--------------------------------"<<endl;
    vector<string> stooges{"larry","ron","tom"};
    vector<string> *vector_ptr{nullptr};

    vector_ptr = &stooges;
    cout<<"First Stooges: "<<(*vector_ptr).at(0)<<endl;//larry
    cout<<"Stooges: ";
    for(auto stooges: *vector_ptr)
    cout<<stooges<<" ";
    cout<<endl;
    return 0;
}