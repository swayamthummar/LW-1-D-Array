#include<stdio.h>
main()
{	
    int a[100],b[100],c[100],i,n;
	printf("Enter the Size of Array-> ");
	scanf("%d",&n);
	
	printf("Enter a value of Array A->\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Enter a value of Array B->\n");
		for(i=0;i<n;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
     printf("Addition of Arrays value->\n");
		for(i=0;i<n;i++)
	{
		c[i]= a[i]+b[i];
		printf("c[%d]=%d\n",i,c[i]);
	}
}
