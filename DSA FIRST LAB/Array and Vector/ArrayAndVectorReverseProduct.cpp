#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size, sumOfProduct = 0;

    cout << "Enter your array size: ";
    cin >> size;

    int array1[size];
    vector<int> array2;

    for (int i = 0; i < size; i++)
    {
        int n;
        cout << "Enter the element in index [" << i << "]: ";
        cin >> n;
        array1[i] = n;
        array2.push_back(n);
    }

    cout << "For array: " << endl;
    for (int i = 0; i < size; i++)
    {
        sumOfProduct += array1[size - 1 - i] * array2.at(i);
    }

    cout << sumOfProduct << endl;

    return 0;
}