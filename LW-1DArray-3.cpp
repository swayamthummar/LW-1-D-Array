#include<stdio.h>
main()
{
int a[100],i,n,sum=0,avg;
	printf("Enter the value of N -> ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Element of Array ->");
		for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		sum=sum+a[i];
	}
	printf("\nSum of Array=%d",sum);
	avg = sum/n;
	
	printf("\nAverage of Array=%d",avg);
}
