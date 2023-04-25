#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//int turn_round(char*pch1, char*pch2, int len)
//{
//	assert(pch1 && pch2);
//	int i = 0;
//	int j = 0;
//	
//	for (i=0; i<len-1; i++)
//	{
//		int tmp = *pch1;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(pch1 + j) = *(pch1 + j + 1);
//		}
//		pch1[len - 1] = tmp;
//		if (strcmp(pch1, pch2) == 0)
//		{
//			return 1;
//		}
//	}	
//	return 0;
//}
//
//int main()
//{
//	char ch1[] = "abcdef";
//	char ch2[] = "defabc";
//	int len = strlen(ch1);
//	int ret=turn_round(ch1,ch2,len);
//	printf("ret=%d\n", ret);
//	printf("%s\n", ch1);
//	return 0;
//}

//int turn_round(char* pch1,int len, int num)
//{
//	assert(pch1);
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < num; i++)
//	{
//		int tmp = *pch1;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(pch1 + j) = *(pch1 + j + 1);
//		}
//		pch1[len - 1] = tmp;
//	}
//	return num;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	char ch1[] = "abcdef";
//	char ch2[] = "defabc";
//	int len = strlen(ch1);
//	int ret = turn_round(ch1, len, num);
//	printf("ret=%d\n", ret);
//	printf("%s\n", ch1);
//	return 0;
//}
