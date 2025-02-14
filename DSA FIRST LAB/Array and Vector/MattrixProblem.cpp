#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Please enter your row size: ";
    cin >> row;
    cout << "Please enter your column size: ";
    cin >> col;

    int array[col][row];

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << "Enter the element in index [" << i << "] [" << j << "]: ";
            cin >> array[i][j];
        }
    }
    cout << "Input array: " << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Output array: " << endl;
    for (int i = col - 1; i >= 0; i--)
    {
        for (int j = row - 1; j >= 0; j--)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}