//��֧����ת
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h> //bool��������ͷ�ļ� 
#include <iso646.h> // ������ͷ�ļ� && || �� ���滻�� and or not  
#define STOP '|'    //�ļ�ĩβ����ʱʹ����������ѧϰEOF 
#define COVERAGE 350
//#define SPACE ' '

int ChapterSeven(void)
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
	/*
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
	printf("Bye.\n");   */

	//-------------------------�߼������-------------------------------------------------
	//while ((c = getchar()) != ' ' && c != '\n' )
	//&& || ������������е㣬C��֤���߼����ʽ����ֵ˳���Ǵ������ҵ�

	//-------------------------ͳ�Ƶ��ʳ���---------------------------------------------
	/*  ������
	char ch;      //������ַ�
	char prev; //�����ǰһ���ַ�
	long n_chars = 0L;  //���ַ���
	int n_lines = 0;      //����
	int n_words = 0;    // ������
	int p_lines = 0;    //������
	bool inword = false;    // ���ch�ڵ����У�inword����true

	printf("Enter text to be analyzed (| to terminnate): \n");
	prev = '\n';    //����ʶ����������
	
	while ((ch = getchar()) != STOP)
	{
		n_chars++;
		if (ch == '\n')
			n_lines++;
		if (!isspace(ch)&& !inword)  //�µ��ʵ�һ���ַ�����
		{
			inword = true;
			n_words++;
		}
		if (isspace(ch) && inword)  //���ʽ�����������ó�0,�µ��ʶ�ȡ���ַ�ʱ������һ���ж�
			inword = false;

		prev = ch;

	}

		printf("Characters = %ld, words = %d, lines = %d, ", n_chars, n_words, n_lines);
		printf("partial lines = %d\n", p_lines);   */
																							
	//------------------------����������������������--------------------------------
	/*
	int sq_feet;
	int cans;

	printf("Enter number of square feet to be painted:\n");
	while (scanf("%d", &sq_feet) == 1)
	{
		cans = sq_feet / COVERAGE;
		cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
		printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
		printf("Enter next value (q to quit):\n");

	}*/

	//------------------------continue��break���------------------------------------
	//continue��whileѭ���У�ֻ��ѭ�����Ա��ʽ��ֵ	
	//continue��forѭ���У����±��ʽ��ֵ��Ȼ���ѭ�����Ա��ʽ��ֵ
	
	//------------------------GOTO---------------------------------------------------
	/*
	goto test;
	test:printf("l'm goto");  */

	
	return 0;


}