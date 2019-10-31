#include<stdio.h>
#include<stdlib.h>

void quicksort(int arr[],int low, int high);
int partition(int arr[],int low, int high);
void main()
{
  int low,high,arr[10],i,n=5;
  printf("\nEnter values in the array\n");
  for(i=0;i<10;i++)
    scanf("%d",&arr[i]);
  quicksort(arr,0,n-1);
    for(i=0;i<n;i++)
      printf("%d ",arr[i]);
}  

int partition(int arr[],int low, int high)
{
  int pivot=arr[high],temp;
  int i=low-1;
  for(int j=low;j<high;j++)
    {
      if(arr[j]<pivot){
	i++;
	temp=arr[j];
	arr[j]=arr[i];
	arr[i]=temp;
      }
    }
  temp=arr[high];
  arr[high]=arr[i+1];
  arr[i+1]=temp;
  return i+1;
}
   
void quicksort(int arr[],int low, int high)
{
  if(low<high){
    int p=partition(arr,low,high);
    quicksort(arr,low,p-1);
    quicksort(arr,p+1,high);
  }
}
