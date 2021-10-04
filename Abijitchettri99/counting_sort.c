//Counting sort C program.

#include<stdio.h>

/*void count_Sort(int arr[], int n, int max){
    int sorted[10];
    int count[10],i;


    for(i=0;i<=max;i++){
        count[i]=0;
    }
    for(i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(i=1;i<=max;i++){
        count[i]=count[i]+count[i-1];
    }

    for(i=n-1;i>=0;i--){
        sorted[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(i=0;i<n;i++)
        arr[i]=sorted[i];

    printf("sorted array: ");

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
} */
void count_Sort(int arr[],int n,int max)
{
    int sort[10];
    int count[10],i;

    for(i=0;i<=max;i++){
        count[i]=0;
    }
    for(i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(i=1;i<=max;i++){
        count[i]=count[i]+count[i-1];
    }
    for(i=n-1;i>=0;i--){
        sort[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }

    for(i=0;i<n;i++)
        arr[i]=sort[i];

    printf("Sorted array: ");
    for(i=0;i<n;i++)
        printf("%d ", arr[i]);



}
int main()
{
    int arr[100],n,i,max=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter %d element of array: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
    }
   // printf("%d\n",max);
    count_Sort(arr,n,max);
return 0;
}

