
//Iterative LS 
#include <stdio.h>
int main()
{
    int n,i,value,arr[100];
    printf("Enter the number of element: ");
    scanf("%d", &n);

    printf("Enter the %d element of array: ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &value);

    for(i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            printf("Element found at pos: %d", i+1);
            break;
        }
    }
    if(i==n)
        printf("Element not found!");
    return 0;

}

//Recursive LS
/*#include<stdio.h>

int LinearSearch(int arr[], int value, int i)
{  

  if(arr<0)
        return -1;
  if(arr[i]==value)
        return value;

    return LinearSearch(arr,value,i-1);   
}

int main()
{
    int arr[100],n,value,Ls,i;

    printf("Enter the total number of array: ");
    scanf("%d",&n);

    printf("Enter %d number of element: ",n);
    for(i=0;i<n;i++)

        scanf("%d", &arr[i]);

    printf("Enter the element to search: ");
    scanf("%d", &value);

    Ls=LinearSearch(arr,value,i);

    if(Ls==-1)
    {
        printf("Element not found!");
    }
    else
    {
        printf("Element found at pos: %d",i);
    }   

}
*/



























