#include<iostream>
#include<cstdlib>//required for rand()
#include<ctime>//required for time()
using namespace std;
int main()
{
  int random_number{};
  size_t count{10};// number of random no. to generate
  int min{1};//lower bound (inclusive)
  int max{6};//upper bounf(inclusive)
// seed the random number generator
//if you don't seed the generator you will get the same req random number every run
 cout<<"RAND_MAX on my system is: "<<RAND_MAX<<endl;
 srand(time(nullptr));
for (size_t i {1}; i < count; i++)
{
    random_number = rand()% max+ min;//generate a random number[min,max];
    cout<<random_number<<endl;

}
cout<<endl;
return 0;

}



