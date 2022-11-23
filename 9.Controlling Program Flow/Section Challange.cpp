#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> numbers{};
    char selection{};
    do
    {
        cout << "Menu !!!" << endl;
        cout << "P - Print number " << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of thr number" << endl;
        cout << "S - Display the smallest numbers" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cin >> selection;
        if (selection == 'P' || selection == 'P')
        {
            if (numbers.size() == 0)
                cout << "[] - the list is empty" << endl;
            else
            {
                cout << "[";
                for (auto num : numbers)
                    cout << num << " ";
                cout << "]" << endl;
            }
        }
        else if (selection == 'a' || selection == 'A')
        {
            int num_to_add{};
            cout << "Enter numberss you want to add : ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " added " << endl;
        }
        else if (selection == 'm' || selection == 'M')
        
            if (numbers.size() == 0)
                cout << "Unable to calculate mean - no data" << endl;
            else
            {
                int total{};
                for (auto num : numbers)
                    total += num;
                cout << "The mean is :" << static_cast<double>(total) / numbers.size() << endl;
          }
        
        while (selection != 'q' && selection != 'Q');
    }
        return 0;
}
