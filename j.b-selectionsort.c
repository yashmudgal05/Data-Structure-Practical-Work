#include<stdio.h>

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

}

void selectionSort(int A[], int n)
{
    int i,j,k;

    for(i=0;i<n-1;i++)                                     //loop for no. of passes
    {
       for(j=k=i;j<n;j++)                                 //loop for no. of comparisons
       {
           if(A[j] < A[k])
           {
               k = j;
           }
       }
       swap(&A[i],&A[k]);
    }
    printf("\n");
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

    selectionSort(A,n);

    display(A,n);

    return 0;
}
