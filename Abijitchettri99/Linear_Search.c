
//Linear Search 
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