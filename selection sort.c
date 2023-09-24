#include<stdio.h>
int swap(int *a , int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int main ()
{
    int n ,temp , i;
    int arr[]={1,5,2,45,4,34,0};
    n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n-1;i++)
    {
        int min =i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
            swap(&arr[i],&arr[min]);
    }
    printf("\nSorted array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
}