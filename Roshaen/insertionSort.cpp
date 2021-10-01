# include <iostream>
using namespace std;

int main(){
    cout<<"Enter the length of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=1; i<n;i++){
        int key = arr[i];
        int j = i-1;
        while (key<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}