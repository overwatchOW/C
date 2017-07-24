//分支和跳转
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h> //bool类型所在头文件 
//#define SPACE ' '

int main(void)
{
	//--------------------------第一个示例，虽然会，但是在过一遍--------------------------
	/*
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;

	printf("Enter the list of daily low temperature.\n");
	printf("Use Celsius, and enter q to quit.\n");

	while (scanf("%f",&temperature) == 1 )
	{

		all_days++;
		if (temperature < FREEZING)
			 cold_days++;
	}
	if (all_days != 0)
		printf("%d days total: %.1f%% were below freezing.\n", all_days, (float) cold_days / all_days * 100.0);
	if (all_days == 0)
		printf("No data entered! \n");  
	                                     */

	//--------------------------getchar()和 putchar()-------------------------------------
	/*
	//isalpha    ctype.h头文件中包含处理字符函数的函数原型
	char ch;
	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch)) //ch == SPACE 明示常量判断字符的类型  
			putchar(ch + 1);
		else
			putchar(ch);

		}
	putchar(ch);
	                          */

	//-------------------------if else--------------------------------------------------------
	//else与最近的if匹配。除非最近的if被大框号括住了

	//-------------------------多层嵌套if加循环-------------------------------------------
	unsigned long num;
	unsigned long div;
	bool isPrime;

	printf("Please enter an integer for analysis,");
	printf(" Enter q to quit\n");

	while ((scanf("%lu", &num)) == 1)
	{
		for (div = 2, isPrime = true; (div * div) <= num; div++)
		{
			if (num % div == 0)
			{
				if ((div * div) != num)
					printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
				else
					printf("%lu is divisible by %lu.\n", num, div);

				isPrime = false;

			}

		}
		if (isPrime && num != 1)
			printf("%lu is prime.\n", num);

		printf("Please enter an integer for analysis,");
		printf(" Enter q to quit\n");

	}
	printf("Bye.\n");




	return 0;

}