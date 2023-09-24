#include<stdio.h>
int swap(int *a , int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void quicksort(int arr[25],int first,int last){
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         while(arr[i]<=arr[pivot]&&i<last)
         i++;
         while(arr[j]>arr[pivot])
         j--;
         if(i<j){
            swap(&arr[i],&arr[j]);
         }
      }
      swap(&arr[pivot],&arr[j]);
      quicksort(arr,first,j-1);
      quicksort(arr,j+1,last);
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