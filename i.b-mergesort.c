#include<stdio.h>

void merge(int A[], int l, int mid, int h)
{
    int i=l,j=mid+1,k=l;

    int B[100];

    while(i<=mid && j<=h)
    {
        if(A[i] < A[j])
        {
            B[k++] = A[i++];
        }
        else
        {
            B[k++] = A[j++];
        }
    }

    for( ; i<=mid; i++)
    {
        B[k++] = A[i];
    }
    for( ; j<=h; j++)
    {
        B[k++] = A[j];
    }

    for(i=l; i<=h; i++)
    {
        A[i] = B[i];
    }
}

void IterativeMergeSort(int A[], int n)
{
    int p,l,h,mid,i;

    for(p=2; p<=n; p=p*2)
    {
        for(i=0; i+p-1<=n; i=i+p)
        {
            l = i;
            h = i+p-1;
            mid = (l+h)/2;
            merge(A,l,mid,h);
        }
    }

    if(p/2 < n)
    {
        merge(A,0,(p/2)-1,n-1);
    }
}

void recursiveMergeSort(int A[], int l, int h)
{
    int mid;

    if(l < h)
    {
        mid = (l+h)/2;

        recursiveMergeSort(A,l,mid);
        recursiveMergeSort(A,mid+1,h);
        merge(A,l,mid,h);
    }
}

void display(int A[], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n");
}

int main()
{
    int A[] = {11,13,7,12,16,9,24,5,10,3};
    int n = 10;

    //IterativeMergeSort(A,n);

    recursiveMergeSort(A,0,9);

    display(A,n);

    return 0;
}
