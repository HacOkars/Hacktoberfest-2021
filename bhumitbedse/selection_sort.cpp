#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void SelectionSort(vector<int> &arr)
{
    int n = arr.size();
    int MinIndex ; 
    for(int i = 0;i<n-1;++i)
    {
        MinIndex = i;
        for(int j = i+1;j<n;++j)
        {
            if(arr[j]<arr[MinIndex])
            {
                swap(&arr[j],&arr[MinIndex]);
                // MinIndex = j;
            }
        }
    }
}

void Display(vector<int> v)
{
    cout << "Array is : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
// Driver code
int main()
{
	int n;
    vector<int> v ; 
    // {10,23,44,53,4,23,12,61};
    cout << "Enter the Size Of Array" << endl;
    cin >> n;
    int element;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << "th Element " << endl;
        cin >> element;
        v.push_back(element);
    }
    Display(v);
    SelectionSort(v);
    Display(v);
    return 0;
}

