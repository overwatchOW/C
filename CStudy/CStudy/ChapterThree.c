//�����������ͣ� �������ͣ������͸�������
#include <stdio.h>
#include <inttypes.h> //����ֲ����ͷ�ļ�
#include <complex.h>  //����������ͷ�ļ�


int ChapterThree()
{
	//char  �ַ���  ���������������� ���ַ��������ʽ���ڴ��д洢 һ�ֽ�
	//short ������ �з������� ռ�ô洢�ռ���ܱ�int��
	//int     ���� �з������� ռ��һ�������ֳ� ��Сȡֵ��Χ-32768~32767 ��С��16λ
	//long  ������ �з������� ռ�ÿռ���ܱ�int�� ��׺L
	//long long  �з������� ռ�ÿռ���ܱ�long�� ����ռ64λ ��׺LL
	//�� unsigned ��Ϊ�޷������� ��׺��U ��llu

	//��ӡ  %d ʮ����  %o �˽��� %x ʮ������ Ҫ��ӡǰ׺��# �� %#d
	//��ӡ  %h short��  %l  long�� %ll long long ��  %u ��ӡ�޷������� ���Ͽ����
	//��ӡ  %f float �ͺ�double��  %e ��E ��ӡָ�������� %a��A ��ӡP������
	//ʹ��  %Lf  %Le  %La  ��ӡ long double����  %zd ƥ�� sizeof()

	//��׼ASCLL�뷶Χ�� 0-127 

	// _Bool ����ֵ   

	//float  �����ȸ����� �����ܱ�ʾ6λ��Ч���� ռ32λ ȡֵ��Χ���� 10-37 -10+37
	//double ˫���ȸ����� �����ܱ�ʾ10λ��Ч���� ��ʵ������13λ��Чλ  ռ64λ 
	//long double ������double���͵ľ�����ͬ

	//_complex  _Imaginary  ��������������


	//----------------------------------------��ӡת��˵��---------------------------------------
	printf("------------------------��ӡת��˵��--------------------------\n");

	int  i = 2147483647;
	unsigned int j = 4294967295;

	printf("%d  %d   %d \n", i, i + 1, i + 2);
	printf("%u  %u  %u \n", j, j + 1, j + 2);

	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u and  not %d \n", un, un);
	printf("end = %hd and not %d \n", end, end);
	printf("big = %ld and not %hd \n", big, big);
	printf("verybig = %lld and not %ld \n", verybig, verybig);

	printf("Hello!\007\n");

	//--------------------------����ֲ����------------------------------------------------
	printf("------------------------����ֲ����--------------------------\n");

	int32_t me32;
	me32 = 45933945;

	printf("First, assume int32_t is int: ");
	printf("me32 = %d\n", me32);
	printf("Next, let's not make any assumptions. \n");
	printf("Instead, use a \"macro\" form inttypes.h  ");
	printf("me32 = % " PRId32 " \n", me32);

	//-------------------����ֵ������
	printf("------------------------����ֵ������--------------------------\n");

	float toobig = 3.4E38 * 100.0f;
	printf("%e\n", toobig);
	//����ᵼ��β���������ơ��ճ���һ��������λ���������һ��


	//------------------------�������������----------------------------------------------------
	printf("------------------------�������������--------------------------\n");

	float a, b;

	b = 2.0e20 + 1.0; //������Ĭ��ʹ��double���ͣ��˴��Ǽ���double��ת��float
	a = b - 2.0e20;
	printf("%f \n", a);


	//-----------------------------------------sizeof�ж����ͳ���-------------------------------------
	printf("Type int has a size of %zd bytes. \n", sizeof(int));
	printf("Type char has a size of %zd bytes. \n", sizeof(char));
	printf("Type long has a size of %zd bytes. \n", sizeof(long));
	printf("Type long long has a size of %zd bytes. \n", sizeof(long long));
	printf("Type float has a size of %zd bytes. \n", sizeof(float));
	printf("Type double has a size of %zd bytes. \n", sizeof(double));
	printf("Type long double has a size of %zd bytes. \n", sizeof(long double));


	return 0;

}