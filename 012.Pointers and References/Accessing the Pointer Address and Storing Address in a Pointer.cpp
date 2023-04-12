#include<iostream>
#include<string>
#include<vector>
using namespace std;



int main(){



int num{10};
cout<<"-----------------------------------"<<endl;
cout<<"Value of num is: "<<num<<endl;
cout<<"Size of num is: "<< sizeof num<<endl;
cout<<"Address of num is: "<<&num<<endl;
cout<<"-----------------------------------"<<endl;
int *p;
cout<<"Value of p is: "<<p<<endl;
cout<<"Address of p is: "<<&p<<endl;
cout<<"Size of p is: "<< sizeof p<<endl;
cout<<"-----------------------------------"<<endl;
p = nullptr;
cout<<"Value of p is: "<<p<<endl;
cout<<"-----------------------------------"<<endl;
int *p1{nullptr};
double *p2{nullptr};
unsigned long long *p3{nullptr};
vector<string> *p4   {nullptr};
string *p5 {nullptr};
cout<<"Size of p1 is: "<<&p1<<endl;
cout<<"size od p2 is: "<<&p2<<endl;
cout<<"size od p3 is: "<<&p3<<endl;
cout<<"size od p4 is: "<<&p4<<endl;
cout<<"size od p5 is: "<<&p5<<endl;
cout<<"-----------------------------------"<<endl;
int score{10};
double high_temp{107.5};
int *score_ptr{nullptr};
score_ptr = &score;
cout<<"Value of score is: "<<score<<endl;
cout<<"Address of score is: "<<&score<<endl;
cout<<"Value of score_ptr is: "<< score_ptr<<endl;
cout<<"-----------------------------------"<<endl;
// score_ptr =&high_temp; //Compiler error @ int & double type
return 0;
}