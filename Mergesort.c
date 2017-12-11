void merge(int arr[] , int l , int m , int r )
{
   int i , j , k;
   int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1] , R[n2];
    for( i = 0 ; i < n1 ; i++ )

        L[i] = arr[l+i] ;


    for( j = 0 ; j < n2 ; j++ )

         R[j] = arr[m + 1 + j];

    i = 0 ;
    j = 0 ;
    k = l ;
    while( i < n1 && j < n2 )
    {
        if(L[i] <= R[j] )
        {
            arr[k] = L[i];
            i++;

        }
        else
        {
            arr[k] = R[j];
            j++;

        }
      k++;
    }
    while( i < n1 )
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while( j < n2 )
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}



void mergesort(int arr[] , int l ,int r )
{
    if( l < r )//won't execute for one element
    {
        int m = l + (r-l)/2;//HERE I WROTE r-1(ONE).Which is a BIG mistake,took 1 HOUR
                                  // to DEBUG.
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);

        merge(arr, l, m, r);
    }
}

void printArray(int A[] , int size )
{
    int i;
    printf("NOW The Sorted array is : \n");
    for( i = 0 ; i < size ; i++)
    {
        printf("%d ",A[i]);
    }
}

int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1};

    int len = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr, 0, len-1);
printArray(arr , len);

    return 0;
}
