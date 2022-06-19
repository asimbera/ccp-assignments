#include <math.h>
#include <stdio.h>

double f(double x)
{
	return (x / (1 + x));
}

int main()
{
	int n, i;
	double a, b, h, x, sum = 0, integral;

	printf("\nEnter the no. of sub-intervals(EVEN): ");
	scanf("%d", &n);
	printf("\nEnter the initial limit: ");
	scanf("%lf", &a);
	printf("\nEnter the final limit: ");
	scanf("%lf", &b);

	h = fabs(b - a) / n;
	for (i = 1; i < n; i++)
	{
		x = a + i * h;
		if (i % 2 == 0)
			sum = sum + 2 * f(x);
		else
			sum = sum + 4 * f(x);
	}
	integral = (h / 3) * (f(a) + f(b) + sum);

	printf("\nThe integral is: %lf\n", integral);
}
