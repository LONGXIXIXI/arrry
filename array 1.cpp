#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="abc";
	char arr2[]={'a','b','c'};
	printf("%d\n",sizeof(arr));       
	//sizeof计算arr所占空间的大小
	//7个元素 char 7*1=7
	//操作符
	printf("%d\n",strlen(arr));
	//strlen求字符串的长度--‘\0’之前的字符个数
	//库函数，使用需要引头文件
	printf("%d\n",sizeof(arr2));
	//a,b,c所占的的大小，所以是3
	printf("%d\n",strlen(arr2));
	//\0之前的字符串长度，所以是随机值
	return 0;
}