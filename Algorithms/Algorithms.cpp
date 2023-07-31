#include <stdio.h>
#include <conio.h>
#include <math.h.>

void main()
{
	int w = 1;
	while (w <= 5 && w >= 1)
	{
		int i;
		printf("1. program 1\n");
		printf("2. program 2\n");
		printf("3. program 3\n");
		printf("4. program 4\n");
		printf("5. program 5\n");
		printf("6. exit\n");
		printf("Choise the option\t");
		scanf_s("%d", &i);
		switch (i) {
		case 1:
			double x1, y1, z11, z21;
			printf("Write x and y\n");
			scanf_s("%lf%lf", &x1, &y1);
			z11 = pow(cos(x1), 4) + pow(sin(y1), 2) + 1. / 4 * pow(sin(2 * x1), 2) - 1;
			z21 = sin(y1 + x1) * sin(y1 - x1);
			printf("Result z1=%.4lf\tz2=%.4lf\n\n", z11, z21);
			break;
		case 2:
			double x2, y2, z2, z12, z22, z32, f2;
			x2 = -2.235 * pow(10, -2);
			y2 = 2.23;
			z2 = 15.221;
			z12 = exp(fabs(x2 - y2)) * pow(fabs(x2 - y2), x2 + y2);
			z22 = atan(x2) + atan(z2);
			z32 = pow((pow(x2, 6) + pow(log(y2), 2)), 1. / 3);
			f2 = z12 / z22 + z32;
			printf("For x=-2.235*pow(10,-2); y=2.23; z=15.221 f=%.3lf\n\n", f2);
			break;
		case 3:
			double x3, y3, z3;
			printf("Write z\n");
			scanf_s("%lf", &z3);
			if (z3 < -1)
			{
				x3 = (-z3) / 3;
				printf("x=-z/3\n");
			}
			else
			{
				x3 = fabs(z3);
				printf("x=|z|\n");
			}
			y3 = log(x3 + 0.5) + (exp(x3) - exp(-x3));
			printf("Result:\t%.4lf\n\n", y3);
			break;

		case 4:
			double x4, y4, v4, z14, z24, max4, min4;
		m1:printf("Write new x and y\n");
			scanf_s("%lf%lf", &x4, &y4);
			z14 = x4 - y4;
			z24 = y4 - x4;
			if (z14 == z24)
			{
				goto m1;
			}
			if (z14 > z24)
			{
				min4 = z24;
			}
			else
			{
				min4 = z14;
			}
			if (min4 == 0)
			{
				goto m1;
			}
			if (min4 > 0)
			{
				max4 = min4;
			}
			else
			{
				max4 = 0;
			}
			v4 = max4;
			printf("v=%.5lf\n\n", v4);
			break;

		case 5:
			double t25, c5, k5, z15, z25;
		m2: printf("Enter new c and k\n");
			scanf_s("%lf%lf", &c5, &k5);
			z15 = pow(tan(c5 - 2 * k5), 2);
			z25 = log(fabs(c5 - 2 * k5)) - sin(c5 / 2 * k5);
			if (fabs(c5 + k5) > 2) {
				printf("|c+k|>2\n");
				t25 = z15;
			}
			else if (fabs(c5 + k5) <= 2 && fabs(c5 + k5) > 0.5 && 2 * k5 != 0) {
				printf("0.5<|c+k|<=2\n");
				t25 = z25;
			}
			else {
				goto m2;
			}
			printf("Result t2=%.4lf\n\n", t25);
			break;
		}
		w = i;

	}
	_getch();
}

