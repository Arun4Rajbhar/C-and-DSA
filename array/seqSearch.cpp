#include <iostream>
using namespace std;
int main()
{
    int target=12;
    int arr1[5]={23,12,45,56,67};
    for (int i = 0; i < 5; i++)
    {
        if (arr1[i] == target)
        {
            cout << "Element found at index: " << i;
            return 0;
        }
    }
    cout << "Element not found";
    return 0;
}