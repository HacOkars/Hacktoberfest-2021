#include<stdio.h>

void merge_sort(int arr[100],int start, int end){

    int mid;
    if(start<end){
        mid=(start+end)/2;
        merge_sort(arr,start,mid);
        merge_sort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}
void merge(int arr[],int start,int mid, int end){
    int b[100],i=start,j=mid+1,k=start;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            b[k++]=arr[i++];
        }
        else
            b[k++]=arr[j++];
        }
    if(i>mid){
        while(j<=end){
            b[k++]=arr[j++];
        }
    }
    else{
        while(i<=mid)
            b[k++]=arr[i++];
    }
    for(i=start;i<=end;i++){
        arr[i]=b[i];
    }
}
int main()
{
    int arr[100],n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter %d element of array: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    merge_sort(arr,0,n-1);
    printf("Sorted elements are: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

return 0;
}