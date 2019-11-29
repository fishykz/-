// 快速排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//升序排列
#pragma warning (disable:4996)
#include <iostream>
#include <stdlib.h>
//#include "bubble.h"//冒泡排序法
#include "selection.h"
int main()
{
	printf("输入你想要随机生成的数组大小");
	int i;
	scanf("%d",&i);
	printf("这是你的随机数组\n");
	int a[100];
	int j;
	for (j = 1; j < i; j++) {
		a[j] = rand()%101;
		printf("%d ", a[j]);
	}
	selection(a,i);//输入你选择的排序方法:
	printf("这是排序完的数组\n");
	for (j = 1; j < i; j++) {
		printf("%d ", a[j]);
	}
	

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
