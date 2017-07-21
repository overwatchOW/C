//运算符，表达式和语句
#include <stdio.h>

int ChapterFive(void)
{
	//左值，  用于标识特定数据对象的名称和表达式， 可修改的左值（const创建不可修改的）或者使用术语对象定位值
	//右值，  能赋值给可修改左值得量，且本身不是左值
	//整数除法小数点部分截断
	//结合律只适用于共享同一运算对象运算符，
	//求模运算符只能用于整数
	//   % 求模   等于    a - (a/b)*b        标准规定
	//递增递减运算符只能影响一个变量（或者说，只能影响一个可修改的左值）


	//--------------------------sizeof运算符和size_t类型---------------------------
	/*
	int n = 0;
	size_t intsize;
	intsize = sizeof(int); //sizeof 返回size_t类型的值 他是无符号整数类型
	
	printf("n = %d, n has %zd bytes; all ints have %zd bytes. \n", n, sizeof n, intsize);
		*/

	//--------------------------C转换规则------------------------------------------

	//当类型转换出现在表达式的时，无论是unsigned,或signed  char  short 都会被转换成int 
	//有时候也会被转换成unsigned int 比如short和int一样大的时候
	//小到大，升级 （或自动类型转换）

	//两种类型运算，会被转换成两种类型的更高级别


	//		自动类型转换
	char ch;
	int i;
	float f1;

	f1 = i = ch = 'c';
	printf("ch = %c, i = %d, float = %2.2f \n", ch, i, f1);
	ch = ch + 1;
	i = f1 + 2 * ch;
	printf("ch = %c, i = %d, float = %2.2f \n", ch, i, f1);
	ch = 1107;
	printf("Now ch = %c \n", ch);
	ch = 80.89;
	printf("Now ch = %c \n", ch);



	return 0;

}