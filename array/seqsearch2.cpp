#include <iostream>
using namespace std;
int main()
{
    int N, target, arr1[N];
    cout << "Enter the size of array";
    cin >> N;
    cout << "Enter the target value for search";
    cin >> target;
    cout << "Enter the element of array";
    for (int i = 0; i < N; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < N; i++)
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