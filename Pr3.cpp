#include<stdio.h>

main()
{
	int pin1,pin2;
	printf("pin1=");
	scanf("%i",&pin1);
	printf("pin2=");
	scanf("%i",&pin2);
	
	if(((pin1==123)&&(pin2==321))||((pin1==246)&&(pin2==579)))
	{
		printf("Ok");
		
	}
	else
	{
		printf("Error");
	}
}