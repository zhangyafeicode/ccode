#define _CRT_SECURE_NO_WARNINGS


//#include <ctype.h>
//#include <stdio.h>
//#include <string.h>
//
//
//int hexToDecimal(const char hex[]) {
//
//    int decimal = 0;
//    int len = strlen(hex);
//
//    for (int i = 0; i < len; i++) {
//        char ch = toupper(hex[i]);
//        int digit;
//
//        if (isdigit(ch)) {
//            digit = ch - '0';
//        }
//        else if (ch >= 'A' && ch <= 'F') {
//            digit = ch - 'A' + 10;
//        }
//        else {
//            return -1;
//        }
//
//        decimal = decimal * 16 + digit;
//    }
//
//    return decimal;
//}
//
//int main(void)
//{
//    
//    char hexNum[] = "1A3F";
//    int result = hexToDecimal(hexNum);
//    if (result != -1) {
//        printf("十进制结果: %d\n", result);
//    }
//    else {
//        printf("输入的十六进制数包含非法字符\n");
//    }	
//    return 0;
//}



//#include <stdio.h>
//int main()
//{ 
//	char a[] = { 1, 2, 3 };
//	char b[] = {2,3,4};
//	char c[3] = { 0 };
//	int len = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < len; i++)
//	{
//		c[i] = a[i] + b[i];
//	}
//	
//	return 0;
//}

//#include <string.h>
//#include <stdio.h>
//
//int change(char ch[], char ch2[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		ch2[i] = ch[len - i - 1];
//	}
//}
//int main()
//{
//	char ch[] = "erioufireu";
//	int len = strlen(ch);
//	char a[100];
//	change(ch, a, len);
//	return 0;
//}



//#include <string.h>
//double freq(char ch[])
//{
//	int num = 0;
//	double len = strlen(ch);
//	for (int i = 0; i < len; i++)
//	{
//		if (ch[i] >= 'a' && ch[i] <= 'z')
//			num++;
//	}
//	return num / len;
//}
//
//int main()
//{
//	char a[] = "afdoijRDrtfRDRDiuoah";
//	double freq1 = freq(a);
//	return 0;
//}
//

#include <stdio.h>
#include <math.h>
int is_me(int num)
{
	int num1 = num / 1000 % 10;
	int num2 = num / 100 % 10;
	int num3 = num / 10 % 10;
	int num4 = num % 10;
	if ((pow(num1, 4) + pow(num2, 4) + pow(num3, 4) + pow(num4, 4)) == num)
		return 1;
	else
		return 0;
}
int main()
{
	for (int i = 1000; i < 10000; i++)
	{
		if (is_me(i))
			printf("%d\n", i);
	}
	return 0;
}
