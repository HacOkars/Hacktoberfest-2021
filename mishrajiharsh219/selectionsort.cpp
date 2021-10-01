#include <bits/stdc++.h>
using namespace std;
void selectionSort(int *array, int size)
{
    int i, j, imin;
    for (i = 0; i < size - 1; i++)
    {
        imin = i; //get index of minimum data
        for (j = i + 1; j < size; j++)
            if (array[j] < array[imin])
                imin = j;
        //placing in correct position
        swap(array[i], array[imin]);
    }
}
int main()
{
   int n;
   cin>>n;
   int a[1000];
   for (int i = 0; i < n; i++)
   { 
       cin>>a[i];
   }
   selectionSort(a,n);
   for (int i = 0; i < n; i++)
   {
       cout<<a[i];
   }
   
       
    return 0;
}