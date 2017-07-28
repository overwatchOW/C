//分支和跳转
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h> //bool类型所在头文件 
#include <iso646.h> // 包含此头文件 && || ！ 可替换成 and or not  
#define STOP '|'    //文件末尾，暂时使用它，后面学习EOF 
#define COVERAGE 350
//#define SPACE ' '

int ChapterSeven(void)
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

	//-------------------------逻辑运算符-------------------------------------------------
	//while ((c = getchar()) != ' ' && c != '\n' )
	//&& || 运算符都是序列点，C保证了逻辑表达式的求值顺序是从左向右的

	//-------------------------统计单词程序---------------------------------------------
	/*  待完善
	char ch;      //读入的字符
	char prev; //读入的前一个字符
	long n_chars = 0L;  //总字符数
	int n_lines = 0;      //行数
	int n_words = 0;    // 单词数
	int p_lines = 0;    //特殊行
	bool inword = false;    // 如果ch在单词中，inword等于true

	printf("Enter text to be analyzed (| to terminnate): \n");
	prev = '\n';    //用于识别完整的行
	
	while ((ch = getchar()) != STOP)
	{
		n_chars++;
		if (ch == '\n')
			n_lines++;
		if (!isspace(ch)&& !inword)  //新单词第一个字符进入
		{
			inword = true;
			n_words++;
		}
		if (isspace(ch) && inword)  //单词结束，标记设置成0,新单词读取首字符时进入上一个判断
			inword = false;

		prev = ch;

	}

		printf("Characters = %ld, words = %d, lines = %d, ", n_chars, n_words, n_lines);
		printf("partial lines = %d\n", p_lines);   */
																							
	//------------------------条件运算符（三项运算符）--------------------------------
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

	//------------------------continue和break语句------------------------------------
	//continue在while循环中，只对循环测试表达式求值	
	//continue在for循环中，更新表达式求值，然后对循环测试表达式求值
	
	//------------------------GOTO---------------------------------------------------
	/*
	goto test;
	test:printf("l'm goto");  */

	
	return 0;


}