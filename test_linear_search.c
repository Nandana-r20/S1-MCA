#include<stdio.h>
int main()
{
	int arr[100],n,key,i,f=0;
	printf("enter the limit");
	scanf("%d",&n);
	printf("\n");
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nenter the element to search");
	scanf("%d",&key);
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("\n%d found at position %d ",key,i+1);
			f=1;
			printf("\n");
		}
	}
	if(f==0)
	{
		printf("not found");
		printf("\n");
	}
	return 0;
}
