#include <stdio.h>
#include <stdlib.h>
void selection_sort(int A[],int n)
{
        int i,j,min,temp;
        for(i=0 ; i<=n-2 ; i++)
        {
            min = i;
            for(j=i+1 ; j<=n-1 ; j++)
            {
                if(A[j] < A[min])
                {
                    min = j;
                }

            }
            temp = A[i];
            A[i] = A[min];
            A[min] = temp;
        }

}

int main()
{
    int a[]={2,4,3,5,1,6};
    int i;
    selection_sort(a,6);
    printf("The sorted array : \n");
    for(i=0;i<6;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
