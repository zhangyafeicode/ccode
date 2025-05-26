#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != '#')
//	{
//		printf("该字符是:%c\n该字符的ASCII码值是：%d\n", ch, ch);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	do{
//		printf("请输入一个整数：");
//		scanf("%d", &n);
//		printf("立方：%d\n", n * n * n);
//	} while (n > 0);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	double sum = 0;
//	double sum1 = 0;
//	for (; i < 1000; i++)
//	{
//		sum += 1.0 / i;
//		if (i % 2 == 0)
//		{
//			sum1 -= 1.0 / i;
//		}
//		else
//		{
//			sum1 += 1.0 / i;
//		}
//	}
//	printf("1000项的和是：%lf\n", sum);
//	printf("1000项的和是：%lf\n", sum1);
//return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int m = 100;
//	int count = 0;
//	while (m > 0)
//	{
//		m *= 1.08;
//		m -= 10;
//		count++;
//	}
//	printf("%d年之后取完\n", count);
//	return 0;
//}]


//#include <stdio.h>
//
//int main() {
//    int n = 4;
//    for (int i = 1; i <= n; i++) 
//    {
//        for (int k = 0; k < n - i; k++) 
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < i; j++) 
//        {
//            printf("%c", 'A' + j);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int a = 0;
//	scanf("%d", &n);
//	scanf("%d", &a);
//	int num = 0;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		num = num * 10 + a;
//		sum += num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//


#include <stdio.h>

int main() {
    char ch, prev = '\0';
    int count = 0;

    while ((ch = getchar()) != '#') {
        if (ch == 'i' && prev == 'e') {
            count++;
        }
        prev = ch;
    }

    printf("%d\n", count);
    return 0;
}



























