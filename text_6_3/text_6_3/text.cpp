#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//char ch[27] = {'0', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
//			  'h', 'i', 'j', 'k', 'l', 'm', 
//			  'n', 'o', 'p', 'q', 'r', 's', 
//			  't', 'u', 'v', 'w', 'x', 'y', 'z'};
//int ch_index = 0;
//int main()
//{
//	for (ch_index = 26; ch_index > 0; ch_index--)
//	{
//		printf("%c ", ch[ch_index]);
//	}
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int num[8] = {1, 1, 1, 1, 1, 1, 1, 1};
//	int num_index = 0;
//	for (; num_index < 8; num_index++)
//	{
//		for (int i = 0; i < num_index; i++)
//		{
//			num[num_index] *= 2;
//		}
//		printf("%d ", num[num_index]);
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int num[100] = { 0 };
//	int num_index = 0;
//	int count = 0;
//	for (int i = 2; i < 1000; i += 2)
//	{
//		//从2开始往后循环
//		num[num_index] = i;
//		printf("%d ", num[num_index]);
//		num_index++;
//		count++;
//		if (count % 10 == 0)  //10个数字一行，保证美观 //还有谁？？
//			printf("\n");
//		if (count == 100) //确保循环100次之后不再循环
//			break;
//	}
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//	int num[5] = { 1, 3, 4, 4, 6 };
//	int num_index = 0;
//	int max = 0;
//	for (; num_index < 5; num_index++)
//	{
//		if (max < num[num_index])
//			max = num[num_index];
//	}
//	printf("太帅了：%d", max);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char ch[255] = { 0 };
//	int i = 0;
//	while ((ch[i] = getchar()) != '#')
//	{
//		i++;
//	}
//	ch[i] = '\0';
//
//	for (int j = 0; j < i; j++)
//	{
//		if (ch[j] >= 'A' && ch[j] <= 'Z')
//		{
//			ch[j] += 32;
//		}
//		else if(ch[j] >= 'a' && ch[j] <= 'z')
//		{
//			ch[j] -= 32;
//		}
//	}
//	printf("%s ", ch);
//	return 0;
//}
//

#include <stdio.h>

int main()
{
	char a[255] = { 0 };
	int i = 0;
	while ((a[i] = getchar()) != '#')
	{
		i++;
	}

	int count = 0;
	for (int j = 0; j < i-2; j++)
	{
		if (a[j] == 'q' && a[j+1] == 'a' && a[j+2] == 'u')
		{
			count++;
		}
	}
	printf("qau出现的次数：%d\n", count);
	return 0;
}








