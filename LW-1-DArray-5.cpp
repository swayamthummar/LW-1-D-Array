#include<stdio.h>
main()
{	
    int a[100],b[100],mrg[200],i,n1,n2,k;
	printf("Enter the size of Array->");
	scanf("%d",&n1);
	
	printf("Enter The value of Array A->\n");
	for(i=0;i<n1;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		mrg[i]=a[i];
	}
	k=i;
	printf("Enter the size of Array->");
    scanf("%d",&n2);
	
	printf("Enter B Array Value=\n");
	for(i=0;i<n2;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
		mrg[k]=b[i];
		k++;
	}
	printf("Merge Array Value=\n");
	
	for(i=0;mrg[i]!='\0';i++)
	{
		printf("mrg[%d]=%d\n",i,mrg[i]);
	}
}
