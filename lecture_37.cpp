#include <iostream>
using namespace std;
// Rotated an array:
void rotateArray(int *arr, int size, int k)
{
    int temp[size] = {};
    for (int i = 0; i < size; i++)
    {
        temp[(i + k) % size] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}
// Counting 0 and 1:
int countZeroOne(int *arr1, int size1)
{
    int countZeros = 0;
    int countOnes = 0;
    for (int i = 0; i < size1; i++)
    {
        if (arr1[i] == 0)
        {
            countZeros++;
        }
        else
        {
            countOnes++;
        }
    }
    if (countOnes == countZeros)
    {
        return countOnes + countZeros;
    }
    return max(countOnes, countZeros);
}
int main()
{
    // Rotated an array kth times:
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int k = 2;
    rotateArray(arr, size, k);
    cout << "The Rotated array with " << k << " index is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Counting the maximum numbers of 0 and 1:
    int arr1[4] = {0, 1, 1, 0};
    int size1 = 4;
    int ans = countZeroOne(arr1, size1);
    cout << "The maximum number is: " << ans << endl;
}