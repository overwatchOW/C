//�������   ѭ��
#include <stdio.h>
#include <math.h> // C��ѧ��

int ChapterSix(void)
{
	//--------------------------------Whileѭ��---------------------------------------
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

	//--------------------------------fabs�����Ƚϸ�����(math.h)---------------------
	/*
	const double ANSWER = 3.14159;
	double response;

	printf("What is the value of pi?\n");
	scanf("%lf", &response);

	while (fabs(response - ANSWER) > 0.0001)  //�û������ֵ����ȷ��ֵ���0.0001ѭ������**
	{
		printf("Try again! \n");
		scanf("%lf", &response);
	}
	printf("Close enough! \n");      */

	//-------------------------------forѭ��---------------------------------------------
	/*
	const int FIRST_OZ = 46;
	const int NEXT_OZ = 20;
	int ounces, cost;

	for (ounces = 1, cost = FIRST_OZ;ounces <= 16; ounces++, cost += NEXT_OZ)
			printf("%5d  $%4.2f\n", ounces, cost / 100.0);
	//for(initializa;   test;    update)
	               //statement
	//initializaѭ����ʼǰִֻ��һ�Σ�test����������update���²���  ���ö��ŷָ����ӱ��ʽ������һ�����е�
	//�������ű��ʽ��ֵ���Ҳ����ֵ
	*/

	//------------------------------zeno��ۣ�����Զ�䲻��Ŀ�꣩---------------------
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
	//��ѧ�ϼ򵥵ķ�������      */

	//-------------------------------���飬����----------------------------------------





	return 0;
}