#include <stdio.h>

main()
{
	int sum=0;
	int i=5;
	while (i<=15)
	{
		sum=sum+i;
		i=i+1;
	}
	printf("sum=%i",sum);
}