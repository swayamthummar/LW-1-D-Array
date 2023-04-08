#include<stdio.h>
main()
{	
   int a[]={4,8,7,1,6,2,3,8,9},i,n;

	n = sizeof(a)/sizeof(a[0]);
	
	printf("Size of Array = %d",n);
}
