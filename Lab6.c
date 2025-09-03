#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float x1, x2, px, a, b, c;
	float x, F;
	
	printf("Input x1: "); scanf_s("%f", &x1);
	printf("Input x2: "); scanf_s("%f", &x2);
	printf("Input px: "); scanf_s("%f", &px);
	printf("Input a: "); scanf_s("%f", &a);
	printf("Input b: "); scanf_s("%f", &b);
	printf("Input c: "); scanf_s("%f", &c);

	x = x1;
	int n = 0;

	while (x < x2)
	{
		n++;
		if (b - a < 0)
		{
			F = ((1 - x) / (x - cos(x))) - (b / a);
		}
		else if (b - a > 0)
		{
			F = (a - b * x) / (log(x));
		}
		else { F = (10 * x - 2) / (sqrt(c) - 6 - b); }

		x = x + px;

		printf("%i: x = %.3f \t F = %.3f \n", n, x, F);
	}

	_getch();
	return 0;
}
