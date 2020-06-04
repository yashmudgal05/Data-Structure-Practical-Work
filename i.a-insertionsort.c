#include<stdio.h>

void insertionSort(int A[], int n)
{
    int i,j,x;

    for(i=1; i<n; i++)                                         //loop for no. of passes
    {
        j = i-1;
        x = A[i];
        while(j>-1 && A[j]>x)                           //loop for max no. of comparisons or max. no of shift
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
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
    int A[] = {3,7,9,10,6,5,12,4,11,2};
    //int A[] = {1,2,3,4,5,6,7,8,9,10};                          //sorted array
    int n = 10;

    insertionSort(A,n);

    display(A,n);

    return 0;
}
