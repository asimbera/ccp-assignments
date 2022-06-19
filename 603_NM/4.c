#include <stdio.h>
#include <math.h>

double f(double x)
{
	return 1 / (1 + pow(x, 2));
}

int main()
{
	int n, i;
	double a, b, h, x, sum = 0, integral;

	printf("\nEnter the no. of sub-intervals: ");
	scanf("%d", &n);
	printf("\nEnter the initial limit: ");
	scanf("%lf", &a);
	printf("\nEnter the final limit: ");
	scanf("%lf", &b);

	h = fabs(b - a) / n;
	for (i = 1; i < n; i++)
	{
		x = a + i * h;
		sum = sum + f(x);
	}
	integral = (h / 2) * (f(a) + f(b) + 2 * sum);

	printf("\nThe integral is: %lf\n", integral);
	return 0;
}
