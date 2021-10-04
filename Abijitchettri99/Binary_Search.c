#include<stdio.h>
int main()
{
    int arr[100],n,i,value;
    printf("Enter the number of array element: ");
    scanf("%d",&n);

    printf("Enter the %d elements of array: ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d",&value);
    
    
    int l=0, r=n-1,mid =(l+r)/2;
 while(l<=r)
    {
        
        if(arr[mid]==value){
            printf("Element found at pos: %d", mid+1);
            break;}
        else if(arr[mid]<value)
            l=mid+1;
        else
           r=mid-1;
       // mid=(l+r)/2;
    }
    if(l>r)
        printf("Element not found!");
}
/*
//Recursive
#include<stdio.h>
int BinarySearch(int arr[], int value, int l, int r)
{
    if(l>r)
        return -1;

    int mid =(l+r)/2;
    if(arr[mid]==value)
        return mid;
    else if(arr[mid]<value)
        return BinarySearch(arr,r,value,mid+1);
    else
        return BinarySearch(arr,l,value,mid-1);
}
int main()
{
    int arr[100],n,value,i,index,l,r;
    printf("Enter the number of array element: ");
    scanf("%d",&n);

    printf("Enter %d number of element: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &value);

    index=BinarySearch(arr,value,0,n-1 );

    if(index==-1)
        printf("Element not found!");
    else
        printf("Element found at pos: %d\n",index+1);
}*/