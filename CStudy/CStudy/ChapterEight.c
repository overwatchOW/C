//字符输入/输出和输入验证
#include <stdio.h>
#include <conio.h>

void display(char ch, int lines, int width); //函数头，输入缓冲代码段使用

int ChapterEight(void) 
{
	//-----------------两类缓冲 :  完全缓冲I/O，和行缓冲I/O--------------------------------------
	
	//完全缓冲输入指的是当缓冲区被填满时才刷新缓冲区将内容发送到目的地
	//行缓冲指的是出现换行符时刷新缓冲区，键盘输入通常是行缓冲
	//缓冲区的大小取决于系统，常见的大小是512字节和4096字节
	//ANSI，没有提供调用无缓冲输入的标准方式，取决于计算机，虽然有setbuf和setvbuf   ，Nuix可以试用ioctl函数
	
	//文件结尾，
	//一种方法是文件末尾放一个特殊的字符标记文件结尾 ctrl+z
	//另一种方法是存储文件大小的信息，新版的DOS使用这种方法处理文本文件，UNIX使用这种方法处理所有的文件

	//char 的无符号类型范围 0 ~255  ，有符号类型是    -127~128
	/*
	int ch;   //EOF 值是-1，getchar返回的实际是int值，所以定义int  ，也可以使用 signed char，但最好用通用形式

	while ((ch = getchar()) != EOF)
		putchar(ch);
	*/

	//-----------------输入缓冲--------------------------------------------

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

}   //函数定义
