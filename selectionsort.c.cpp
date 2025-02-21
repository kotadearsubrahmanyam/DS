#include<stdio.h>
void selectionSort(int arr[], int n) 
{
 for (int i = 0; i < n - 1; i++) 
 {
 int minIndex = i;
 // Find the index of the smallest element.
 for (int j = i + 1; j < n; j++) 
 {
 if (arr[j] < arr[minIndex]) 
 {
 minIndex = j;
 }
 }
 // Swap the smallest element with the first element of the unsorted region.
 int temp = arr[minIndex];
 arr[minIndex] = arr[i];
 arr[i] = temp;
 }
}

int printarray(int array[],int size){
	for(int i=  0;i<size;i++){
		printf("%d",array[i]);
	}
}
int main(){
	printf("enter the siize of array");
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	 selectionSort(arr,n);
	printf("sorted array is : \n");
	printarray(arr,n);
}
