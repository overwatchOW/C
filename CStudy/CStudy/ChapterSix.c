//控制语句   循环
#include <stdio.h>
#include <math.h> // C数学库

int ChapterSix(void)
{
	//--------------------------------While循环---------------------------------------
	/*
	long num;
	long sum = 0L;
	//int status;

	printf("Please enter an  integer to be summed ");
	printf("q to quit :");
	//status = scanf("%ld", &num);

	while (scanf("%ld", &num) == 1) //status == 1
	{
		sum += num;
		printf("Please enter next integer (Q to quit) : ");
		//status = scanf("%ld", &num);

	}
	printf("Those integers sum to %ld.\n", sum);  */

	//--------------------------------fabs函数比较浮点数(math.h)---------------------
	/*
	const double ANSWER = 3.14159;
	double response;

	printf("What is the value of pi?\n");
	scanf("%lf", &response);

	while (fabs(response - ANSWER) > 0.0001)  //用户输入的值与正确的值相差0.0001循环结束**
	{
		printf("Try again! \n");
		scanf("%lf", &response);
	}
	printf("Close enough! \n");      */

	//-------------------------------for循环---------------------------------------------
	/*
	const int FIRST_OZ = 46;
	const int NEXT_OZ = 20;
	int ounces, cost;

	for (ounces = 1, cost = FIRST_OZ;ounces <= 16; ounces++, cost += NEXT_OZ)
			printf("%5d  $%4.2f\n", ounces, cost / 100.0);
	//for(initializa;   test;    update)
	               //statement
	//initializa循环开始前只执行一次，test测试条件，update更新步长  可用逗号分隔增加表达式，号是一个序列点
	//整个逗号表达式的值是右侧项的值
	*/

	//------------------------------zeno悖论（箭永远射不到目标）---------------------
	/*
	int   t_ct;
	double   time, power_of_2;
	int   limit;
	printf("Enter the number of terms you want: ");
	scanf("%d", &limit);
	for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0)
	{
		time += 1.0 / power_of_2;
		printf("time = %lf  when terms = %d. \n", time, t_ct);

	}
	//数学上简单的方法可用      */

	//-------------------------------数组，函数----------------------------------------





	return 0;
}