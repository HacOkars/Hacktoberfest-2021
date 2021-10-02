#include <bits/stdc++.h>
using namespace std;
#include"merge_sort.cpp"

int BinarySearch(int Arr[], int Search, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (Arr[mid] == Search)
        {
            return mid;
        }
        if (Arr[mid] > Search)
        {
            return BinarySearch(Arr, Search, low, mid - 1);
        }
        return BinarySearch(Arr, Search, mid + 1, high);
    }
    return -1;
}

int main(void)
{
    int size;
    cout << "Enter the size of an Array" << endl;
    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i+1 << "th Element" << endl;
        cin >> array[i];
    }
    mergeSort(array,0,size-1);
    printArray(array,size);
    int Search;
    cout << "Enter the Key to be Search" << endl;
    cin >> Search;

    int result = BinarySearch(array, Search, 0, size);

    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
}
