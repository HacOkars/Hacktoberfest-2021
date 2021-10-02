#include <bits/stdc++.h>
using namespace std;

void Display(vector<int> v)
{
    cout << "Array is : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
} 

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
 
 
int Partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    while(i<j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void Quick_sort(vector<int> &arr, int low, int high)
{
    int PartitionIndex;
    if (low < high)
    {
        PartitionIndex = Partition(arr, low, high);
        Quick_sort(arr, low,PartitionIndex - 1);
        Quick_sort(arr, PartitionIndex + 1, high);
    }
}

int main()
{
    int n;
    vector<int> v = {10,23,44,53,4,23,12,61};
    Display(v);
    Quick_sort(v, 0, v.size()-1);
    Display(v);
    return 0;
}