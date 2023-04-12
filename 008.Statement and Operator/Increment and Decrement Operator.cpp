#include<iostream>
using namespace std;
int main()
{
    int counter{10};//10
    int result{0};

    // Simple Incrememt (Same Answer)

    counter = counter+1;//11
    cout<<"Counter "<<counter<<endl;
    counter ++;//12
    cout<<"Counter "<<counter<<endl;
    ++counter;//13
    cout<<"Counter "<<counter<<endl;
    cout<<"================================="<<endl;

    // Example-2 : Pre-Incrememt

    counter = 10;
    result = 0;
    cout<<"Counter "<<counter<<endl;//10
    result = ++counter;// result = counter but counter = ++counter @10+1 = 11 = counter = result
    cout<<"Counter "<<counter<<endl;//11
    cout<<"Result  "<<result<<endl;//11
    cout<<"================================="<<endl;

    // Example-3 : Post-increment
    counter = 10;
    result = 0;
    cout<<"Counter "<<counter<<endl;//10
    result = counter++;// result = counter =10, counter++ = 11 but still result = 10
    cout<<"Counter "<<counter<<endl;//11
    cout<<"Result  "<<result<<endl;//10
    cout<<"================================="<<endl;

    //Example-4
    
    counter = 10;
    result = 0;
    cout<<"Counter "<<counter<<endl;//10
    result = ++counter + 10;// Pre-Incrememnt
    cout<<"Counter "<<counter<<endl;//11
    cout<<"Result  "<<result<<endl;//21
    cout<<"================================="<<endl;

    //Example-5

    counter = 10;
    result = 0;
    cout<<"Counter "<<counter<<endl;//10
    result = counter++ + 10;// Post-Increment
    cout<<"Counter "<<counter<<endl;//11
    cout<<"Result  "<<result<<endl;//20

    return 0;
}