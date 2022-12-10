#include<iostream>
#include<string>
#include<vector>
using namespace std;
void print (int);
void print(double);
void print(string, string);
void print(vector<string>);
void print(int num) {
    cout<<"Printing int:"<<num<<endl;

}
void print(double num){
    cout<<"Printing double:"<<num<<endl;
}
void print(string s){
    cout<<"Printing string:"<<s<<endl;
}
void print(string s,string t){
    cout<<"Printing double:"<<s<<" and "<<t <<endl;
}
void print(vector<string> v){
    cout<<"Printing vector of string:";
    for(auto s: v)
    cout<<s + " ";
    cout<<endl;
}

int main()
{
    print(100); //int
    print('A'); //character is always promoted to int should print 65 ASCII ('A')

    print(123.5); //DOUBLE
    print(123.3F);//float is promoted to double

    string s{"C++ string"};//C-style is converted to a C++ string
    print(s);//c++ string
    print("C-style string",s);//first argument is converted to a c++ string
    vector<string>three_stooges{" larry","moe","curly"};
    print(three_stooges);
    cout<<endl;

    return 0;
}