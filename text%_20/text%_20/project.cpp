//#define _CRT_SECURE_NO_WARNINGS
//
////#include <stdio.h>
////#include <math.h>
////
////int main()
////{
////	int a = 0;
////	int b = 0;
////	int c = 0;
////	scanf("%d%d%d", &a, &b, &c);
////	if (a + b > c && a + c > b && b + c > a)
////	{
////		int p = 0.5 * (a + b + c);
////		float s = sqrt(p * (p - a) * (p - b) * (p - c));
////		printf("能构成三角形，且三角形的面积是：%.3f", s);
////	}
////	else
////	{
////		printf("不能构成三角形");
////	}
////	return 0;
////}
//
//
//
////#include <stdio.h>
////int isMin(int x, int y, int z, int m)
////{
////	if (x < y && x < z && x < m)
////		return x;
////	else if (y < x && y < z && y < m)
////		return y;
////	else if (z < y && z < x && z < m)
////		return z;
////	else if (m < y && m < z && m < x)
////		return m;
////}
////int main()
////{
////	int a = 0;
////	int b = 0;
////	int c = 0;
////	int d = 0;
////	scanf("%d%d%d%d", &a, &b, &c, &d);
////	int min = isMin(a, b, c, d);
////	printf("最小值是：%d\n", min);
////	return 0;
////}
////
//
////#include <stdio.h>
////#include <math.h>
////int main()
////{
////	int a = 0;
////	int b = 0;
////	int c = 0;
////	scanf("%d%d%d", &a, &b, &c);
////	if ((b * b - 4 * a * c) > 0)
////	{
////		double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
////		double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
////		printf("x1 = %lf\nx2 = %lf\n", x1, x2);
////	}
////	else
////		printf("无根或俩个相同的根");
////	return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////	int a;
////	scanf("%d", &a);
////	int num1 = a / 100 % 10;
////	int num2 = a / 10 % 10;
////	int num3 = a % 10;
////	if (a == (num1 * num1 * num1 + num2 * num2 * num2 + num3 * num3 * num3))
////		printf("%d是水仙花数", a);
////	return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////	int x = 0;
////	int y = 0;
////	scanf("%d%d", &x, &y);
////	if (x * x + y * y < 1)
////		printf("yes");
////	return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////	unsigned int s = 0;
////	scanf("%d", &s);
////	if (s >= 90)
////		printf("A");
////	else if (s >= 80)
////		printf("B");
////	else if (s >= 70)
////		printf("C");
////	else if (s >= 60)
////		printf("D");
////	else
////		printf("E");
////	return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////	int a = 2345;
////	if (a >= 10000)
////		printf("5位数");
////	else if (a >= 1000)
////		printf("4位数");
////	else if (a >= 100)
////		printf("3位数");
////	else if (a >= 10)
////		printf("2位数");
////	else
////		printf("1位数");
////	//
////	int n1 = a / 10000 % 10;
////	int n2 = a / 1000 % 10;
////	int n3 = a / 100 % 10;
////	int n4 = a / 10 % 10;
////	int n5 = a % 10;
////	if (a >= 10000) printf("%d", n5);
////	if (a >= 1000) printf("%d", n4);
////	if (a >= 100) printf("%d", n3);
////	if (a >= 10) printf("%d", n2);
////	if (a >= 1) printf("%d", n1);
////	printf("\n");
////	return 0;
////}
//
//
//#include <stdio.h>
//int main()
//{
//	int p = 0;
//	int c = 0;
//	scanf("%d", &p)
//	if (num > 40000)
//		c = (c - 40000) * 0.02 + 20000 * 0.05 + 10000 * 0.075 + 10000 * 0.1;
//	else if (num > 20000)
//		c = (p - 20000) * 0.05 + 10000 * 0.075 + 10000 * 0.1;
//	else if (num > 10000)
//		c = (p - 10000 * 0.075) + 10000 * 0.1;
//	else
//		c = p * 0.1;
//	return 0;
//}
//


#include <stdio.h>

int main()
{
    double p = 0;
    double c = 0;

    printf("请输入销售额: ");
    scanf("%lf", &p);

    if (p > 40000)
        c = (p - 40000) * 0.02 + 20000 * 0.05 + 10000 * 0.075 + 10000 * 0.1;
    else if (p > 20000)
        c = (p - 20000) * 0.05 + 10000 * 0.075 + 10000 * 0.1;
    else if (p > 10000)
        c = (p - 10000) * 0.075 + 10000 * 0.1;
    else
        c = p * 0.1;

    printf("提成为: %.2lf\n", c);

    return 0;
}