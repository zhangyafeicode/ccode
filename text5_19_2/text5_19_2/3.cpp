//#define _crt_secure_no_warnings
//
////#include <stdio.h>
////int main()
////{
////	int a = 0;
////	int b = 0;
////	scanf("%d%d", &a, &b);
////	printf("a = %d\nb = %d\n", a, b);
////	return 0;
////}
//
//
////#include <stdio.h>
////int main()
////{
////	float a = 0.0;
////	float b = 0.0;
////	scanf("%f%f", &a, &b);
////	printf("a = %f\nb = %f\n", a, b);
////	return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////	char ch = 0;
////	scanf("%c", &ch);
////	printf("ch的字符：%c\nchd的ascii码值：%d\n", ch, ch);
////	return 0;
////}
//
////#include <stdio.h>
////
////int main()
////{
////	char ch = 97;
////	printf("ch的结果：%c\n", ch);
////	return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////	int a = 2.3;
////	printf("%d\n", a);
////	a = 2.7;
////	printf("%d\n", a);
////	return 0;
////}
//
////#include <stdio.h>
////
////int main()
////{
////	int a = 9;
////	a += 1;
////	printf("%d\n", a);
////	return 0;
////}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("输入一个三位数：");
//	scanf("d", &a);
//	int num1 = a / 100 % 10;
//	int num2 = a / 10 % 10;
//	int num3 = a % 10;
//	int areverse = num1 * 100 + num2 * 10 + num3;
//	printf("%d\n", areverse);
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
//double angle(double x, double y, double z)
//{
//	int qq = (x * x + y * y - z * z) / 2xy;
//	return qq;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%D", a, b, c);
//	double a1 = angle(a, b, c);
//	double a2 = angle(b, a, c);
//	double a3 = angle(c, a, b);
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int v1 = 0;
	int a1 = 0;
	int t1 = 0;
	scanf("%d%d%d", v1, a1, t1);
	int v = v1 + a1 * t1;
	return 0;
}


