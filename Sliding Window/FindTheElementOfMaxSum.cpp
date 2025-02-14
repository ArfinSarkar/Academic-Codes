#include <iostream>
using namespace std;

int main()
{
    int n, k, maxSum = 0;
    cout << "Enter your array size: ";
    cin >> n;
    cout << "Enter the window size: ";
    cin >> k;

    if (k > n)
    {
        cout << "Error!, the array size must be grater than or equal to the window size.";
        exit(1);
    }
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number in index [" << i << "]: ";
        cin >> array[i];
    }

    int maxElementArray[k];

    for (int i = 0; i <= (n - k); i++)
    {
        int sum = 0;
        for (int j = 0; j < k; j++)
        {
            sum += array[i + j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            for (int j = 0; j < k; j++)
            {
                maxElementArray[j] = array[i + j];
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << maxElementArray[i] << " ";
    }

    cout << "The maximum sum is: " << maxSum << endl;

    return 0;
}