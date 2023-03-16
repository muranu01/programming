#include <stdio.h>

main()
{
	int i=0;
	while (i<15)
	{
		printf("%i\n",i);
		i=i+1;
	}
	i=0;
	while (i<15)
	{
		if (i%2==1)
		{
			printf("%i\n",i);
		}
		i=i+1;
	}
}