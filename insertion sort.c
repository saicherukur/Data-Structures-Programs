  
#include<stdio.h>
void insertion_sort(int arr[],int n);
void main()
{
	int arr[20],i,n;
	printf("enter the size of an array ");
	scanf("%d",&n);
	printf("enter the %d elements ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	insertion_sort(arr,n);
}
void insertion_sort(int arr[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j]) && j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	printf("\n After sorting the elements of an array is: ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}
