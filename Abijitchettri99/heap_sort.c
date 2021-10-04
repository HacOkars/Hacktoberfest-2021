#include<stdio.h>

void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void heapify(int arr[],int n,int left){   
    for( int i =n-1;i >=0;i-- ){
    int left = 2*left+1;
    int right = 2*left+2;
    if( left < n && arr[left] > arr[i] ){
        swap(arr,left,i);
    }
    if( right < n && arr[right] > arr[i] ){
        swap(arr,right,i);
        }
    }
}
void heapsort(int arr[],int n){
   
    for(int i = n/2-1; i >= 0; i--)
    heapify(arr,n,0);

    for(int i =n-1;i>=0;i--){
        swap(arr,i,0);

        heapify(arr,i,0);
    }
   
   
   
   /* heapify(arr,n,0);
    for(int i = n-1;i >0;i--){
    swap(arr,i,0);
    heapify(arr,i,0);
}*/
}
int main(){
    int n;
        printf("Enter the size of array : ");
            scanf("%d",&n); 
    int arr[n];
        printf("Enter %d array elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    heapsort(arr,n);
    printf("Sorted Array : ");
    for(int i = 0; i < n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
