
	#include <stdio.h>

int main()
{
    int i=1,j=1, n;
    
    printf("Print n odd numbers: ");
    scanf("%d", &n);
    if(n==1)
    printf("%d",n);
    else
    while(i<=n)
    {
    	
    	printf("%d,",j);
    	j=j+2;
    	i++;
	}
    return 0;
}
