//�ַ����͸�ʽ������/���
#include <stdio.h>
#include <string.h>  //�ַ�������ͷ�ļ�
#include <limits.h>  //�������ʹ�С���������Ϣ
#define DENSITY 62.4   //�����ܶ�  ǰ����������ʹ��
#define PRAISE "You are an extraordinary being."  //ʹ���ַ��������ʹ��
#define PI 3.14159f   //CԤ������Ƭ��ʹ��


int ChapterFour()
{
	//ȡ��VSǿ��ʹ��scanf_s ALT+F7 ���� _CRT_SECURE_NO_DEPRECATE

	//--------------------ǰ������-----------------------
	/*
	float weight, volume;
	int size, letters;
	char name[40];   //�ַ�����  ��\0��β���ַ���
	
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

	//--------------------ʹ���ַ���---------------------
	/*
	char names[40];
	printf("What's your name");
	scanf("%s", names);
	printf("Hello, %s. %s\n", names, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n", 
																		strlen(names), sizeof names);
	printf("The phrase of praise has %zd letters",strlen(PRAISE) );
	printf("and occupies %zd memory cells.\n", sizeof PRAISE);

	//strlen ������������Ԫ�صĳ��� �����ַ�������������β�Ŀ��ַ�
	//sizeof �����������鳤�ȣ�������ַ������Ὣ�ַ�����β���ɼ��Ŀ��ַ�Ҳ����������
	//sizeof �����ض����ͱ�������Բ���ţ������ض������п���
	//��������C���������������ص�ʵ������ͨ��ʱunsigned �� unsigned long */
	
	//--------------------������CԤ������---------------
	/*
	float area, circum, radius;
	
	printf("What is the radius of  your pizza?\n");
	scanf("%f", &radius);
	
	area = PI * radius * radius;
	circum = 2.0f * PI * radius;

	printf("Your basic pizza parameters are as follows:\n");
	printf("Circumference = %1.2f, area = %1.2f\n", circum, area);*/

	//--------------------printf��scanf   I/O����  ---------------
	//printf(��ʽ�ַ���������ӡ�ַ�1������ӡ�ַ�2��.......)  //���뺯�� ʹ�ñ��������������ʽ
	//scanf(��ʽ�ַ������������ַ�1���������ַ�2��.......)  //���뺯��   ʹ��ָ��
	//��ʽ�ַ�����Ӧ�ð���ÿ������ӡ��������ת��˵��

	//printf()�������ش�ӡ�ַ��ĸ���
	//scanf(0�������سɹ���ȡ�������û�ж�ȡ�κ���û�гɹ����뷵��0���ļ���β����EOFͨ��-1
	//��ʹ��*���η���ռ��ת��˵����һ�����ƿ��


	return 0;

}