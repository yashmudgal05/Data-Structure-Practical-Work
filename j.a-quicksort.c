#include<stdio.h>

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

}

int partition(int A[],int l, int h)
{
    int pivot = A[l];
    int i=l,j=h;

    do
    {
        do
        {
            i++;
        }while(A[i] <= pivot);                                  //condition for continuation
        do
        {
            j--;
        }while(A[j] > pivot);                                  //condition for continuation

        if(i<j)
        {
            swap(&A[i],&A[j]);
        }
    }while(i < j);

    swap(&A[l],&A[j]);

    return j;
}

void quickSort(int A[], int l, int h)
{
    int j;

    if(l < h)
    {
        j = partition(A,l,h);
        quickSort(A,l,j);
        quickSort(A,j+1,h);
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
    int A[] = {11,13,7,12,16,9,24,5,10,3,65532};                         //65532 is max integer of 2 bit

    int n = 11;

    quickSort(A,0,10);

    display(A,n-1);

    return 0;
}
