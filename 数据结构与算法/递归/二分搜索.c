//�������� 
#include<stdio.h>
int search(int,int*,int,int);
int main()
{
	int a[71]={};							//����һ����7��77������ 
	int i = 0;
	int b = 7;
	int num = 0;
	for(i = 0;i < 71;i ++)
	{
		a[i] = b++;
	} 
	while(1)
	{
		printf("������һ����7��77������"); 
		scanf("%d",&num);					//����Ҫ��������
		if(num>=7 && num<=77)				//��������Ƿ�Ϸ� 
		{
			break;
		}else
		{
			printf("���������������\n");
		}
	}
	printf("%d������ĵ�%dλ",num,serch(num,a,0,70)); 
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
//����һ��bug��C����Ĭ�ϳ�������ȡ�����µ��������������ĩβʱ���޷���� 
