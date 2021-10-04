#include<stdio.h>

void bubble_Sort(int arr[],int n,int i, int j)
{
    int temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
}

int main()
{
    int arr[100],n,i;

    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("Enter %d element of array: ", n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Sorted array: ");
    bubble_Sort(arr,n,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ", arr[i]);

}