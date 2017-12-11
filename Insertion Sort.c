#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b =temp;
}
void insertion_sort(int a[],int n)
{
    int i,temp,iptr;
    for(i=1 ; i<=n-1 ; i++)
    {
        temp = a[i];
        iptr = i;
        while(iptr>0 && a[iptr-1]>a[iptr])
        {
            swap(&a[iptr-1],&a[iptr]);
            iptr--;

        }

    }
    printf("After The Insertion Sort  : \n");
        for(i=0 ; i<n ;i++)
        {
            printf("%d\t",a[i]);
        }
}
int main()
{
    int a[] = {10,9,8,7,6,5,4,3,2,1};
    insertion_sort(a,10);
    return 0;
}
