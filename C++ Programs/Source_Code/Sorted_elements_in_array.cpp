#include <iostream>
using namespace std;

int main()
{
    int arr[5], temp, i, j;

    // input array elements
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // sorting algorithm -> Selection sort
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // output
    for (i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
}