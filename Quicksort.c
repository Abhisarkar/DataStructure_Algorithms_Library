#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int start , int end)
{
    int pivot = a[end];
    int pIndex = start-1;
    int i;

    for(i=start ; i<=end-1 ; i++)
    {
        if( a[i] <= pivot )
        {
            pIndex++;
            swap(&a[i] , &a[pIndex]);

        }
    }

    swap(&a[pIndex+1] , &a[end]);
    return pIndex+1;
}

void quicksort(int a[] , int start, int end)
{
    if(start<end)
    {
        int pIndex = partition(a,start,end);
        quicksort(a,start,pIndex-1);
        quicksort(a,pIndex+1,end);
    }
}


int main()
{
    int arr[] = {2,6,3,8,9,1,5};
    int i;
    int len = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr,0,len-1);
    printf("After Quick Sort Algorithm : \n");
    for(i=0 ; i<len ; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;

}
