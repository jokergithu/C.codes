#include<stdio.h>
int swap(int *a , int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void quicksort(int arr[25],int low,int high){
   int i, j, pivot, temp;
   if(low<high){
      pivot=low;
      i=low;
      j=high;
      while(i<j){
         while(arr[i]<=arr[pivot]&&i<high)
         i++;
         while(arr[j]>arr[pivot])
         j--;
         if(i<j){
            swap(&arr[i],&arr[j]);
         }
      }
      swap(&arr[pivot],&arr[j]);
      quicksort(arr,low,j-1);
      quicksort(arr,j+1,high);
   }
}
int main(){
   int i, n, arr[25];
   printf("How many elements will you enter: ");
   scanf("%d",&n);
   printf("Enter %d elements: ", n);
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
   quicksort(arr,0,n-1);
   printf("Order of Sorted elements: ");
   for(i=0;i<n;i++)
   printf(" %d",arr[i]);
   return 0;
}