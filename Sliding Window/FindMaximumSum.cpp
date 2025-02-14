#include <iostream>
using namespace std;
int main()
{
    int n, k, sum = 0, initialSum = 0;
    cout << "Enter your array size: ";
    cin >> n;

    cout << "Enter the window size: ";
    cin >> k;

    if (k > n)
    {
        cout << "Error!, the array size must be greater than or equal to the window size." << endl;
        exit(1);
    }
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element in index [" << i << "]: ";
        cin >> array[i];
    }
    for (int i = 0; i <= (n - k); i++)
    {
        int sum = 0;
        for (int j = 0; j < k; j++)
        {
            sum += array[j + i];
        }
        if (initialSum < sum)
        {

            initialSum = sum;
        }
    }
    cout << "The maximum sum is: " << initialSum << endl;
}