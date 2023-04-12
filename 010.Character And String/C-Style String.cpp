//Function Used :-
//1.strlen()- Used to get no. of char in ();
//2.strcpy copy first_name char[] to full_name[];
//3.cin Extrator Operator;
//4.Using cin.getline() Function;
//5.strcmp - for compersion;


#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    char first_name[50]{};
    char middle_name[40]{};
    char full_name[30]{};
    char temp[50]{};
    
    //Example 1 : strlen()- Used to get no. of char in ();

    // cout<<"Enter your first name ";
    // cin>>first_name;
    // cout<<"Enter your last name ";
    // cin>>middle_name;
    //cout<<"-------------------------------------------"<<endl;
    // cout<<"Hello "<<first_name<<" your first name has "<<strlen(first_name)<<" character "<<endl;
    // cout<<"Your last name "<<middle_name<<" has "<<strlen(middle_name)<<" character "<<endl;

    // //Example 2 : strcpy()- Used to copy char from one place() to another ();

    // strcpy(full_name,first_name);//strcpy copy first_name char[] to full_name[]
    // strcat(full_name," ");//Concatenate full_name and add space
    // strcat(full_name,middle_name);
    // cout<<"Your full names is "<<full_name<<endl;
    //cout<<"-------------------------------------------"<<endl;

    //Example 3 // cin Extrator Operator

    // cout<<"Enter your full name "<<endl;
    // cin>>full_name;
    // cout<<"Your full name is "<<full_name<<endl;// Only display first name till carry space
    //cout<<"-------------------------------------------"<<endl;

    //Example 4 : Using cin.getline() Function

    cout<<"Enter your full name ";
    cin.getline(full_name,30);// This function show full name
    cout<<"Your full name is "<<full_name<<endl; 
    cout<<"-------------------------------------------"<<endl;
    
    //Example 5 : Using strcpy function to copy full_name to temp;
    strcpy(temp,full_name);
    if(strcmp(temp,full_name) == 0 ){// strcmp - for compersion
    cout<< temp <<" and "<<full_name<<" are the same "<<endl;
    }
    else
    { 
    cout<< temp <<" and "<<full_name<< " are different "<<endl;
    }
    cout<<"-------------------------------------------"<<endl;

    //Example 6
    for (size_t i {0}; i < strlen(full_name); i++)
    {
        if(isalpha(full_name[i]))
        full_name[i] = toupper(full_name[i]);
    }
    cout<<"Your full name is "<<full_name<<endl;
    cout<<"---------------------------------"<<endl;

    if(strcmp(temp,full_name) == 0)
        cout<<temp<<" and "<<full_name<<" are the same "<<endl;
    else
    { 
    cout<< temp <<" and "<<full_name<< " are different "<<endl;
    }
    cout<<"-------------------------------------------"<<endl;  

    cout<<"Result of comaring "<<temp<<" and "<<full_name<<": "<<strcmp(temp,full_name)<<endl; // 1 or -1
    cout<<"Result of comaring "<<full_name<<" and "<<temp<<": "<<strcmp(full_name,temp)<<endl; // 1 or -1

    return 0;

}