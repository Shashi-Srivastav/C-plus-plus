#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector <char> vowels;  //   Empty Vector
   // vector <char> vowels(5);// 5 Element vector itself initlized by "0"
    vector <char> vowels{'a','e','i','o','u'};
    cout<<vowels[0]<<endl;;
    cout<<vowels[1]<<endl;
    cout<<vowels[2]<<endl;
    cout<<vowels[3]<<endl;
    cout<<vowels[4]<<endl;

    vector <int> test_score{100,20,30};
    cout<<"Test score using array syntax :"<<endl;
    cout<<test_score[0]<<endl;
    cout<<test_score[1]<<endl;
    cout<<test_score[2]<<endl;

    cout<<"Test score using vector syntax :"<<endl;
    cout<<test_score.at(0)<<endl;
    cout<<test_score.at(1)<<endl;
    cout<<test_score.at(2)<<endl;
    cout<<"\nThere are "<<test_score.size()<<"items in vector"<<endl;
    cout<<"\nEnter new test scores "<<endl;
    
    cin>>test_score.at(0);
    cin>>test_score.at(1);
    cin>>test_score.at(2);

    cout<<"New Updated test scores are :"<<endl;
    cout<<test_score.at(0)<<endl;
    cout<<test_score.at(1)<<endl;
    cout<<test_score.at(2)<<endl;
    cout<<"======================================"<<endl;
// DYNAMIC NATUE  
    cout<<"\nEnter new values to add in vector "<<endl;
    int new_test_score{0};
    cout<<"Enter new value "<<endl;
    cin>>new_test_score;
    test_score.push_back(new_test_score);
    cout<<"Enter another new value "<<endl;
    cin>>new_test_score;
    test_score.push_back(new_test_score); // Enter valur from to where it is stored
    cout<<"Latest test score are :"<<endl;
    cout<<test_score.at(0)<<endl;
    cout<<test_score.at(1)<<endl;
    cout<<test_score.at(2)<<endl;
    cout<<test_score.at(3)<<endl;
    cout<<test_score.at(4)<<endl;

    cout<<"======================================"<<endl;
    vector <vector<int>> movie_ratings
    {   
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    cout<<"Here the movie ratings for reviewer #1 using array syntax "<<endl;
    cout<<movie_ratings[0][0]<<endl;
    cout<<movie_ratings[0][1]<<endl;
    cout<<movie_ratings[0][2]<<endl;
    cout<<movie_ratings[0][3]<<endl;

    cout<<"Here the movie ratings for reviewer #1 using vector syntax "<<endl;
    cout<<movie_ratings.at(0).at(0)<<endl;
    cout<<movie_ratings.at(0).at(1)<<endl;
    cout<<movie_ratings.at(0).at(2)<<endl;
    cout<<movie_ratings.at(0).at(3)<<endl;

    return 0;

}