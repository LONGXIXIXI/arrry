#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	printf("%p\n",arr);                    //打印的是首元素的地址
	printf("%p\n",&arr[0]);                //打印的是首元素的地址
	printf("%d\n",*arr);                   //打印的是第一个元素
	int sz=sizeof(arr)/sizeof(arr[1]);     //计算数组的元素个数 
	//arr（数组名）表示数组首元素的地址，但有两种特殊情况
	//1.sizeof(数组名），计算整个数组的大小，sizeof内部单独放一个数组名，数组名表示整个数组
	//2.&数组名，取出的是整个数组的地址，&数组名，表示的是整个数组
	return 0;
}