#include <math.h>
#include <stdio.h>
int main()
{
	float x[10], y[10][10], h, u1, u, fx, fy, fact;
	int i, j, n, ch = 30;
	printf("How many terms you want to enter : ");
	scanf("%d", &n);
	printf("Enter the value of X and Y (X,Y): ");
	for (i = 0; i < n; i++)
	{
		scanf("%f,%f", &x[i], &y[i]);
	}
	for (j = 1; j < n; j++)
	{
		for (i = 0; i < n - j; i++)
		{
			y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
		}
	}

	printf("\n_____________________________________________________\n");
	printf("\n  x\t    y\t    y1\t    y2\t    y3\t    y4");
	printf("\n_____________________________________________________\n");
	for (i = 0; i < n; i++)
	{
		printf("%.2f", x[i]);
		j = 0;
		while (j < n - i)
		{
			printf("	%.3f", y[i][j]);
			j++;
		}
		printf("\n");
	}
	printf("\nEnter the value of x for which you wants to find Y : ");
	scanf("%f", &fx);
	h = x[1] - x[0];
	u = (fx - x[0]) / h;
	fy = y[0][0];
	u1 = u;
	fact = 1;
	for (i = 1; i < n; i++)
	{
		fy = fy + (u1 * y[0][i]) / fact;
		u1 = u1 * (u1 - i);
		fact = fact * (i + 1);
	}
	printf("\nY(%f)=%.3f\n", fx, fy);
}
