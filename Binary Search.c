#include <stdio.h>
#include <stdlib.h>

int Binary_Search(int *a,int l,int h,int key)
{
    while(l<=h)
    {
        int m = l+(h-l)/2;
        if(a[m] == key)
            return m;
        else if(a[m]<key)
        {
            l = m+1;
        }
        else
        {
            h = m-1;
        }
    }
    return -1;
}

int main()
{
    int i;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);
     i = Binary_Search(arr,0,len-1,8);
    if( i == -1)
    {
        printf("The Element is Not Present");
    }

    else
    {
     printf("After Linear Search \n");
      printf("The Element is :%d Present at Index: %d",arr[i],i);
    }
    return 0;
}
