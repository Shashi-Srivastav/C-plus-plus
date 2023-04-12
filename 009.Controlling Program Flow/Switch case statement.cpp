#include <iostream>
using namespace std;
int main()
{
    char letter{};
    cout << "Enter the letter grade you expect in your exam " << endl;
    cin >> letter;
    switch (letter)
    {
    case 'a':
    case 'A':
        cout << "You need 90 grade for " << letter << endl;
        break;
    case 'b':
    case 'B':
        cout << "You need 80 grade for " << letter << endl;
    case 'c':
    case 'C':
        cout << "You need 70 grade for " << letter << endl;
    case 'f':
    case 'F':
    {
        char input{};
        cout << "Are you sure Y/N" << endl;
        cin >> input;
        if (input == 'y' || input == 'Y')
        {
            cout << "Better you study " << endl;
        }
        else if (input == 'n' || input == 'N')
        {
            cout << "Good- Study hard " << endl;
        }
        else
        {
            cout << "Illigal attempt !!!" << endl;
        }
    }

    default:
        cout << "Invalid input !!!" << endl;
        break;
    }
    return 0;
}