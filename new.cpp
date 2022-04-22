//[9,4,3,8,6,9,2]

#include <iostream>
using namespace std;

int find_largest_second_number(int[], int);

int main()
{
    int array[] = {9, 4, 3, 8, 6, 9, 2};
    int array_length = sizeof(array) / sizeof(array[0]);
    cout << " large : " << find_largest_second_number(array, array_length);
}

int find_largest_second_number(int arr[], int array_length)
{
    int len = array_length;
    int max, second_max;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        if (max > arr[i] && arr[i] > second_max)
        {
            second_max = arr[i];
        }
    }
    return second_max;
}