//��֧����ת
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h> //bool��������ͷ�ļ� 
//#define SPACE ' '

int main(void)
{
	//--------------------------��һ��ʾ������Ȼ�ᣬ�����ڹ�һ��--------------------------
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

	//--------------------------getchar()�� putchar()-------------------------------------
	/*
	//isalpha    ctype.hͷ�ļ��а��������ַ������ĺ���ԭ��
	char ch;
	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch)) //ch == SPACE ��ʾ�����ж��ַ�������  
			putchar(ch + 1);
		else
			putchar(ch);

		}
	putchar(ch);
	                          */

	//-------------------------if else--------------------------------------------------------
	//else�������ifƥ�䡣���������if��������ס��

	//-------------------------���Ƕ��if��ѭ��-------------------------------------------
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