//基本数据类型， 两大类型，整数和浮点数，
#include <stdio.h>
#include <inttypes.h> //可移植类型头文件
#include <complex.h>  //复数和虚数头文件


int ChapterThree()
{
	//char  字符型  技术层面上是整型 以字符编码的形式在内存中存储 一字节
	//short 短整型 有符号类型 占用存储空间可能比int少
	//int     整型 有符号类型 占用一个机器字长 最小取值范围-32768~32767 不小于16位
	//long  长整型 有符号类型 占用空间可能比int多 后缀L
	//long long  有符号类型 占用空间可能比long多 至少占64位 后缀LL
	//加 unsigned 成为无符号类型 后缀加U 如llu

	//打印  %d 十进制  %o 八进制 %x 十六进制 要打印前缀加# 如 %#d
	//打印  %h short型  %l  long型 %ll long long 型  %u 打印无符号类型 以上可组合
	//打印  %f float 型和double型  %e 或E 打印指数计数法 %a或A 打印P计数法
	//使用  %Lf  %Le  %La  打印 long double类型  %zd 匹配 sizeof()

	//标准ASCLL码范围是 0-127 

	// _Bool 布尔值   

	//float  单精度浮点数 至少能表示6位有效数字 占32位 取值范围至少 10-37 -10+37
	//double 双精度浮点数 至少能表示10位有效数字 其实至少有13位有效位  占64位 
	//long double 至少与double类型的精度相同

	//_complex  _Imaginary  复数和虚数类型


	//----------------------------------------打印转换说明---------------------------------------
	printf("------------------------打印转换说明--------------------------\n");

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

	//--------------------------可移植类型------------------------------------------------
	printf("------------------------可移植类型--------------------------\n");

	int32_t me32;
	me32 = 45933945;

	printf("First, assume int32_t is int: ");
	printf("me32 = %d\n", me32);
	printf("Next, let's not make any assumptions. \n");
	printf("Instead, use a \"macro\" form inttypes.h  ");
	printf("me32 = % " PRId32 " \n", me32);

	//-------------------浮点值的上溢
	printf("------------------------浮点值的上溢--------------------------\n");

	float toobig = 3.4E38 * 100.0f;
	printf("%e\n", toobig);
	//下溢会导致尾数部分右移。空出第一个二进制位，丢弃最后一个


	//------------------------浮点数舍入错误----------------------------------------------------
	printf("------------------------浮点数舍入错误--------------------------\n");

	float a, b;

	b = 2.0e20 + 1.0; //编译器默认使用double类型，此处是计算double在转换float
	a = b - 2.0e20;
	printf("%f \n", a);


	//-----------------------------------------sizeof判断类型长度-------------------------------------
	printf("Type int has a size of %zd bytes. \n", sizeof(int));
	printf("Type char has a size of %zd bytes. \n", sizeof(char));
	printf("Type long has a size of %zd bytes. \n", sizeof(long));
	printf("Type long long has a size of %zd bytes. \n", sizeof(long long));
	printf("Type float has a size of %zd bytes. \n", sizeof(float));
	printf("Type double has a size of %zd bytes. \n", sizeof(double));
	printf("Type long double has a size of %zd bytes. \n", sizeof(long double));


	return 0;

}