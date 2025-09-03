#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	float x1, x2, px, a, b, c;
	float F, x;

	while (1)
	{
		system("cls");
		printf("x1 = "); scanf_s("%f", &x1);
		printf("x2 = "); scanf_s("%f", &x2);
		
		if(x1 < x2)
		{
			break;
		}
		else { 
			printf("Error: x1 must be smaller than x2; \n press any key to continue...");
			(void)_getch();
		}
	}
	
	printf("px = "); scanf_s("%f", &px);
	printf("a = "); scanf_s("%f", &a);
	printf("b = "); scanf_s("%f", &b);
	printf("c = "); scanf_s("%f", &c);

	printf("\n");
	
	int n = 0;

	x = x1;

	while (x < x2)
	{
		n++;

		if ((x + a) < 0)
		{
			F = (c / (a * x) - b);
		}
		else if(x + a > 0){
			F = (x - a) / (c * sinf(x));
		}
		else
		{
			F = (10 * x) / (c - 6);
		}

		printf("%i: x = %.3f \t F = %.3f \n", n, x, F);

		x = x + px;
	}

	(void)_getch();
	return 0;
}