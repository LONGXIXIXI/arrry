#include<stdio.h>                                  //冒泡排序
void pop_sort(int* arr,int sz)
{
	int i=0;
	for(i=1;i<sz;i++)                              //冒泡排序的趟数
	{
		int j=0;
		int flag=1;                                //假设这一趟冒泡排序已经有序
		for(j=0;j<sz-i;j++)                        //每趟冒泡排序要做的事
		{
			if(arr[j]>arr[j+1])
			{
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
				flag=0;                            //本趟冒泡排序不完全有序
			}
		}
		if(flag == 1)                              //如果此趟冒牌排序有序，则跳出循环
		break;
	}
}
int main()
{
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[1]);
	pop_sort(arr,sz);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}