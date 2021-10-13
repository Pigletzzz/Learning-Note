//二分搜索 
#include<stdio.h>
int search(int,int*,int,int);
int main()
{
	int a[71]={};							//创建一个从7到77的数组 
	int i = 0;
	int b = 7;
	int num = 0;
	for(i = 0;i < 71;i ++)
	{
		a[i] = b++;
	} 
	while(1)
	{
		printf("请输入一个从7到77的数："); 
		scanf("%d",&num);					//输入要搜索的数
		if(num>=7 && num<=77)				//检查输入是否合法 
		{
			break;
		}else
		{
			printf("您输入的数据有误\n");
		}
	}
	printf("%d在数组的第%d位",num,serch(num,a,0,70)); 
	return 0;
}

int serch(int num,int a[],int beg,int end)
{
	int mid = (beg+end)/2;
	printf("beg = %d mid = %d end = %d a[mid] = %d\n",beg,mid,end,a[mid]); 
	if(num == a[mid])
	{
		return mid;
	}else if(num > a[mid])
	{
		return serch(num,a,mid,end);
	}else
	{
		return serch(num,a,beg,mid);
	}
}
//发现一个bug，C语言默认除法向下取整导致当输入的数在数组末尾时，无法输出 
