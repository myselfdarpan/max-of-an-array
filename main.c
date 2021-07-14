#include <stdio.h>
#include <stdlib.h>
int largest(int arr[], int n);

int main()
{

    int arr[1000];
    int i,t,n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(i=0;i<n;i++)
            scanf("%d", &arr[i]);
        printf("Largest element is %d", largest(arr, n));
        printf("\n");
    }
    return 0;
}


int largest(int arr[], int n)
{
    int max,j;
    max=arr[0];
    for(j=0;j<n;j++)
    {
        if(max>arr[j])
            max=max;
        else
            max=arr[j];
    }
    return max;
}
