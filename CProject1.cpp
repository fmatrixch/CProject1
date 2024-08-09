//
//  CCalc
//  Created by Francis Chiang on 8/9/24.
//
#include <stdio.h>
#include <math.h>

double function()
{
	double a, b, c, x, y;
	int optf = 0;
	printf("Options: \n(1 Linear\n(2 Quadratic\n");
	scanf_s("%d", &optf);
	if (optf == 1) {
		printf("Input the value of k\n");
		scanf_s("%lf", &a);
		if (bool(a) == true and a != 0.00) {
			printf("Input the value of b\n");
			scanf_s("%lf", &b);
			if (bool(b) == true) {
				printf("Now, input the value of the argument.\n");
				scanf_s("%lf", &x);
				if (bool(x) == true) {
					y = a * x + b;
					printf("y=%lf\n", y);
					return 0;
				}
				else {
					printf("You haven't input the argument value.\n");
					return 1;
				}
			}
		}
		else {
			printf("This function does not exist.\n");
			return 1;
		}
	}if (optf == 2) {
		printf("Input the value of a\n");
		scanf_s("%lf", &a);
		if (bool(a) == true and a != 0.00) {
			printf("Input the value of b\n");
			scanf_s("%lf", &b);
			if (bool(b) == true) {
				printf("Input the value of c\n");
				scanf_s("%lf", &c);
				if (bool(c) == true) {
					printf("Now, input the value of the argument.\n");
					scanf_s("%lf", &x);
					if (bool(x) == true) {
						y = a * x * x + b * x + c;
						printf("y=%lf\n", y);
						return 0;
					}
					else {
						printf("You haven't input the argument value.\n");
						return 1;
					}
				}
				else {
					return 1;
				}

			}
		}
		else {
			printf("This function does not exist.\n");
			return 1;
		}
	}
	else {
		return 1;
	}
}

double add()
{
	double a, b, c;
	int op = 0;
	printf("Type the value of a:\n");
	scanf_s("%lf", &a);
	if (bool(a) == true)
	{
		printf("Type the value of b:\n");
		scanf_s("%lf", &b);
		if (bool(b) == true)
		{
			c = a + b;
			printf_s("The sum is:%lf\n", c);
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		printf("You haven't input the correct value.\n");
		return 1;
	}
}

double multiple()
{
	double a, b, c;
	int op = 0;
	printf("Type the value of a:\n");
	scanf_s("%lf", &a);
	if (bool(a) == true)
	{
		printf("Type the value of b:\n");
		scanf_s("%lf", &b);
		if (bool(b) == true)
		{
			c = a * b;
			printf_s("The product is:%lf\n", c);
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		printf("You haven't input the correct value.\n");
		return 1;
	}
}

double circle()
{
	//under construction
	double pi, r, v;
	int optt = 0;
	int opts = 0;
	printf("Radius of target circle: \n");
	scanf_s("%lf", &r);
	if (bool(r) == true)
	{
		printf("Pi value: \n(1 3.1415926 \n(2 3.14 \n(3 3.1416\n");
		scanf_s("%d", &opts);
		if (opts == 1)
		{
			pi = 3.1415926;
			while (true)
			{
				printf("Options: \n (1 Circumference \n (2 Square measure \n");
				scanf_s("%d", &optt);
				if (optt == 1)
				{
					v = 2 * pi * r;
					printf_s("The circumference of this circle is:%lf\n", v);
				}
				if (optt == 2)
				{
					v = pi * r * r;
					printf_s("The square measure of this circle is:%lf\n", v);
				}
				else
				{
					break;
				}
			}
			return 0;
		}
		if (opts == 2)
		{
			pi = 3.14;
			while (true)
			{
				printf("Options: \n (1 Circumference \n (2 Square measure \n");
				scanf_s("%d", &optt);
				if (optt == 1)
				{
					v = 2 * pi * r;
					printf_s("The circumference of this circle is:%lf\n", v);
				}
				if (optt == 2)
				{
					v = pi * r * r;
					printf_s("The square measure of this circle is:%lf\n", v);
				}
				else
				{
					break;
				}
			}
			return 0;
		}
		if (opts == 3)
		{
			pi = 3.1416;
			while (true)
			{
				printf("Options: \n (1 Circumference \n (2 Square measure \n");
				scanf_s("%d", &optt);
				if (optt == 1)
				{
					v = 2 * pi * r;
					printf_s("The circumference of this circle is:%lf\n", v);
				}
				if (optt == 2)
				{
					v = pi * r * r;
					printf_s("The square measure of this circle is:%lf\n", v);
				}
				else
				{
					break;
				}
			}
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}



}

double rect()
{
	double s, a, b;
	int optr = 0;
	printf("Input the a value:\n");
	scanf_s("%lf", &a);
	if (bool(a) == true) {
		printf("Input the b value:\n");
		scanf_s("%lf", &b);
		if (bool(b) == true) {
			printf("Options: \n(1 Area\n(2 Perimetre\n");
			scanf_s("%d", &optr);
			if (optr == 1) {
				s = a * b;
				printf("The area of this rectangle is:%lf", s);
				return 0;
			}if (optr == 2) {
				s = 2 * a + 2 * b;
				printf("The perimetre of this rectangle is:%lf", s);
				return 0;
			}
			else {
				return 1;
			}
		}
		else {
			return 1;
		}
	}
	else {
		return 1;
	}

}

double tri()
{
	double s, a, h, m;
	int optr = 0;
	printf("Input the a value:\n");
	scanf_s("%lf", &a);
	if (bool(a) == true) {
		printf("Input the h value:\n");
		scanf_s("%lf", &h);
		if (bool(h) == true) {
			printf("Options: \n(1 Area\n(2 Rt triangle's Perimetre\n");
			scanf_s("%d", &optr);
			if (optr == 1) {
				s = 0.5 * a * h;
				printf("The area of this triangle is:%lf", s);
				return 0;
			}if (optr == 2) {
				m = sqrt(a * a + h * h);
				s = a + h + m;
				printf("The perimetre of this Rt triangle is:%lf", s);
				return 0;
			}
			else {
				return 1;
			}
		}
		else {
			return 1;
		}
	}
	else {
		return 1;
	}
}

int main()
{
	int option;
	printf("Choose option: \n1(add)\n2(multiple)\n3(circle)\n4(rectangle)\n5(triangle)\n6(function)\n");
	scanf_s("%d", &option);
	if (option == 1)
	{
		add();
	}
	if (option == 2)
	{
		multiple();
	}
	if (option == 3)
	{
		circle();
	}
	if (option == 4)
	{
		rect();
	}
	if (option == 5)
	{
		tri();
	}
	if (option == 6)
	{
		function();
	}
	else {
		return 1;
	}
}
