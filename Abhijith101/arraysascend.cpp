//Take 2 arrays as input and each array is sorted in ascending order and all the elements in the first array will be less than the elements in the second array.

#include <iostream>
using namespace std;
int swap(int arr1[], int arr2[], int n1, int n2)
{
   int i=0,j=0,temp=0;
   while(j<n2)
   {
       for(i=0;i<n1;i++)
   {
       if(arr1[i]>arr2[j])
       {
          temp=arr2[j];
          arr2[j]=arr1[i];
          arr1[i]=temp;
       }

   }
  j++;
}
 for(i=0;i<n1;i++)
     {cout<<arr1[i]<<" ";}
     cout<<"\n";
      for(j=0;j<n2;j++)
      {cout<<arr2[j]<<" ";}
      cout<<"\n";
 
}

int sort(int arr1[], int arr2[], int n1, int n2)
{
    int i=0,j=0,k,l,temp=0;
     for(i=0;i<n1;i++)
     {for(k=i+1;k<n1;k++)
   {
       if(arr1[i]>arr1[k])
       {
          temp=arr1[k];
          arr1[k]=arr1[i];
          arr1[i]=temp;
       }

   }
     }
    for(j=0;j<n2;j++)
    {for(l=j+1;l<n2;l++)
   {
       if(arr2[j]>arr2[l])
       {
          temp=arr2[l];
          arr2[l]=arr2[j];
          arr2[j]=temp;
       }

   }
    }
  for(i=0;i<n1;i++)
     {cout<<arr1[i]<<" ";}
     cout<<"\n";
      for(j=0;j<n2;j++)
      {cout<<arr2[j]<<" ";}
      cout<<"\n";
}
    

int main()
{ 
    int a[100],b[100];
    int n1,n2;
    int i,j;
    cout<<"enter sizes";
    cin>>n1>>n2;
    cout<<"enter 2 arrays";
    for(i=0;i<n1;i++)
    {cin>>a[i];
     
    }
    for(j=0;j<n2;j++)
    {cin>>b[j];
     
    }
    swap(a,b,n1,n2);
    sort(a,b,n1,n2);
     
      
    
    
 

    return 0;

}