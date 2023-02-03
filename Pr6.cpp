#include <stdio.h>

main()
{
	int d,m,y;
	
	printf("Day=");
	scanf("%i",&d);
	printf("Month=");
	scanf("%i",&m);
	printf("Year=");
	scanf("%i",&y);
	if (y%4==0)
	{
		printf("Visokosnyi ");
	}
	else
	{
		printf("Nevisokosnyi ");
	}
	int vost=y%12;
	switch(vost)
	{
		case 1:
			{
				printf("Petuh");
			}
			break;
		case 2:
			{
				printf("Sobaka");
			}
			break;
		case 3:
			{
				printf("Svinya");
			}
			break;
		case 4:
			{
				printf("Krysa");
			}
			break;
		case 5:
			{
				printf("Byk");
			}
			break;
		case 6:
			{
				printf("Tigr");
			}
			break;
		case 7:
			{
				printf("Cot");
			}
			break;
		case 8:
			{
				printf("Dracon");
			}
			break;
		case 9:
			{
				printf("Zmeya");
			}
			break;
		case 10:
			{
				printf("Loshad");
			}
			break;
		case 11:
			{
				printf("Koza");
			}
			break;
		case 0:
			{
				printf("Obezyana");
			}
			break;
	}
	if ((m==12&&d>19)||(m==1&&d<22))
	{
		printf(" Kozerog");
	}
	if ((m==1&&d>19)||(m==2&&d<22))
	{
		printf(" Vodoley");
	}
	if ((m==2&&d>19)||(m==3&&d<22))
	{
		printf(" Ryby");
	}
	if ((m==3&&d>19)||(m==4&&d<22))
	{
		printf(" Oven");
	}
	if ((m==4&&d>19)||(m==5&&d<22))
	{
		printf(" Telec");
	}
	if ((m==5&&d>19)||(m==6&&d<22))
	{
		printf(" Bliznecy");
	}
	if ((m==6&&d>19)||(m==7&&d<22))
	{
		printf(" Rak");
	}
	if ((m==7&&d>19)||(m==8&&d<22))
	{
		printf(" Lev");
	}
	if ((m==8&&d>19)||(m==9&&d<22))
	{
		printf(" Deva");
	}
	if ((m==9&&d>19)||(m==10&&d<22))
	{
		printf(" Vesy");
	}
	if ((m==10&&d>19)||(m==11&&d<22))
	{
		printf(" Scorpion");
	}
	if ((m==11&&d>19)||(m==12&&d<22))
	{
		printf(" Strelec");
	}
}