//�ַ�����/�����������֤
#include <stdio.h>
#include <conio.h>

void display(char ch, int lines, int width); //����ͷ�����뻺������ʹ��

int ChapterEight(void) 
{
	//-----------------���໺�� :  ��ȫ����I/O�����л���I/O--------------------------------------
	
	//��ȫ��������ָ���ǵ�������������ʱ��ˢ�»����������ݷ��͵�Ŀ�ĵ�
	//�л���ָ���ǳ��ֻ��з�ʱˢ�»���������������ͨ�����л���
	//�������Ĵ�Сȡ����ϵͳ�������Ĵ�С��512�ֽں�4096�ֽ�
	//ANSI��û���ṩ�����޻�������ı�׼��ʽ��ȡ���ڼ��������Ȼ��setbuf��setvbuf   ��Nuix��������ioctl����
	
	//�ļ���β��
	//һ�ַ������ļ�ĩβ��һ��������ַ�����ļ���β ctrl+z
	//��һ�ַ����Ǵ洢�ļ���С����Ϣ���°��DOSʹ�����ַ��������ı��ļ���UNIXʹ�����ַ����������е��ļ�

	//char ���޷������ͷ�Χ 0 ~255  ���з���������    -127~128
	/*
	int ch;   //EOF ֵ��-1��getchar���ص�ʵ����intֵ�����Զ���int  ��Ҳ����ʹ�� signed char���������ͨ����ʽ

	while ((ch = getchar()) != EOF)
		putchar(ch);
	*/

	//-----------------���뻺��--------------------------------------------

	int ch;
	int rows, cols;

	printf("s\n");
	printf("s\n");

	while ((ch = getchar()) != '\n')
	{
		if ((scanf("%d %d", &rows, &cols)) != 2)
			break;
		display(ch, rows, cols);
		while (getchar() != '\n')
			continue;

		printf("s\n");
		printf("s\n");

	}



	return 0;

}

void display(char ch, int lines, int width)
{
	for (int a = 1; a <= lines; ++a)
	{
		for (int b = 1; b <= width; ++b)
			putchar(ch);
		putchar('\n');
	}

}   //��������
