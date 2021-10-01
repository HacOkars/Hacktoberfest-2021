// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

// Time Complexity: O(n) for best case, O(n2) for average and worst case

// Space Complexity: O(1)

// Input − A list of unsorted data: 56 98 78 12 30 51
// Output − Array after Sorting: 12 30 51 56 78 98

// bubbleSort(array, size)
// Input: An array of data, and the total number in the array

// Output: The sorted Array

//Source Code
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of element you want to store: ";
    cin>>n;
    int arr[n],i,j;
    cout<<"Enter array values:\n";
    //taking the array value 
    //from user
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //Now we will sort the array
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            //checking if previous value is
            //grater than next one or not
            if(arr[j]>arr[j+1])
            {
                //temp will temporarly store
                //the value of arr[j]
                //then we will swap the values
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"After Bubble sort the array is:\n";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}