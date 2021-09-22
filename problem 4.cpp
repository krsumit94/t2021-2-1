#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int *p;
	int n,i,j,k;
	int a[9]={0};
	printf("enter no.of elements");
	scanf("%d",&n);
	p=(int*) malloc(n*sizeof(int));
    printf("enter elements in array");
    for(i=0;i<n;i++)
    {
    	scanf("%d",(p+i));
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(p+j)%(i+1)==0)
			k++;
			else 
			continue;
		}
		a[i]=k;
		k=0;
	}
	for(i=0;i<9;i++)
	{
		printf("%d:%d,",i+1,a[i]);
	}
	
}
