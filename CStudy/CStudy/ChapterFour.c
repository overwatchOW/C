#include <stdio.h>
#include <string.h>  //字符串函数头文件
#include <limits.h>  //整数类型大小限制相关信息
#define DENSITY 62.4   //人体密度  前导程序代码段使用
#define PRAISE "You are an extraordinary being."  //使用字符串代码段使用
#define PI 3.14159f   //C预处理器片段使用


int main()
{
	//取消VS强制使用scanf_s ALT+F7 设置 _CRT_SECURE_NO_DEPRECATE

	//--------------------前导程序-----------------------
	/*
	float weight, volume;
	int size, letters;
	char name[40];   //字符数组  加\0结尾是字符串
	
	printf("HI! What's your first name?\n");
	scanf("%s", name);
	printf("%s, What's your weight in pounds? \n", name);
	scanf("%f", &weight);
	
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	
	printf("Well, %s, your volume is %.2f cubic feet. \n", name, volume);
	printf("Also, your first name has %d letters, \n", letters);
	printf("and we have %d bytes to store it. \n", size);*/

	//--------------------使用字符串---------------------
	/*
	char names[40];
	printf("What's your name");
	scanf("%s", names);
	printf("Hello, %s. %s\n", names, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n", 
																		strlen(names), sizeof names);
	printf("The phrase of praise has %zd letters",strlen(PRAISE) );
	printf("and occupies %zd memory cells.\n", sizeof PRAISE);

	//strlen 函数返回数组元素的长度 对于字符串，不包含结尾的空字符
	//sizeof 函数返回数组长度，如果是字符串，会将字符串结尾不可见的空字符也包含在内了
	//sizeof 对于特定类型必须增加圆括号，对于特定量可有可无
	//对于早期C，这两个函数返回的实际类型通常时unsigned 或 unsigned long */
	
	//--------------------常亮和C预处理器---------------
	/*
	float area, circum, radius;
	
	printf("What is the radius of  your pizza?\n");
	scanf("%f", &radius);
	
	area = PI * radius * radius;
	circum = 2.0f * PI * radius;

	printf("Your basic pizza parameters are as follows:\n");
	printf("Circumference = %1.2f, area = %1.2f\n", circum, area);*/

	//-------------------- ---------------





	return 0;

}