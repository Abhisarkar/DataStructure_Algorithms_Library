#include <stdio.h>
#include <stdlib.h>

void swap (int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubble_sort(int a[] , int n)
{
   int i,j;
   for(i=0 ; i<(n/2)+1 ; i++)
   {

       for(j=0 ; j<n-i-1 ; j++)
       {

           if(a[j] > a[j+1])
           {
               swap(&a[j], &a[j+1]);

           }

       }


   }
   printf("The Sorted Array is : \n");
       for(i=0 ; i<n ; i++)
       {
            printf("%d\t",a[i]);
       }

}
int main()
{
    0
    int a[] = {3,1,5,9,22,4,8,43,11,54,20};
    bubble_sort(a ,11);


    return 0;
}
