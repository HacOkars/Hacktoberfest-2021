#include<stdio.h>

void quick_sort(int arr[],int start,int end)
{
    int i,j,pivot,temp;
    if(start<end){
        pivot=start;
        i=start;
        j=end;
    
    while(i<j){
        while(arr[i]<=arr[pivot] && i<end)
            i++;
        while(arr[j]>arr[pivot])
            j--;
        if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[pivot];
    arr[pivot]=arr[j];
    arr[j]=temp;
    
    quick_sort(arr,0,j-1);
    quick_sort(arr,j+1,end);
    }      
}




int main()
{
    int arr[100],n,i; 

    printf("Enter the total number of array element: ");
    scanf("%d",&n);

    printf("Enter %d array elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    quick_sort(arr,0,n-1);
    printf("sorted elements are: " );
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}