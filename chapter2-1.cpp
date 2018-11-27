#include <stdio.h>
#include <stdlib.h>
#define  Maxsize 100

typedef struct 
	{	
		int data[Maxsize];
		int length;
	}sqltable;

int del_min(sqltable &L)

	{	int min=L.data[0];
		int vlaue=0;
		for(int i=1;i<L.length;i++)
		{
			if(L.data[i]<L.data[i-1])
			{
				min = L.data[i];
				vlaue = i;
			}
		}
		L.data[vlaue]=L.data[L.length-1];
		L.length--;
		return min;

	}

int main(void)
	{
	  sqltable L;
	  printf("请输入顺序表长度:");
	  scanf("%d",&L.length);
	  for(int i=0;i<L.length;i++)
	  	{
	  		printf("请输入顺序表第%d个元素:",i+1);
	  		scanf("%d",&L.data[i]);
		}
	  del_min(L);
	  for(int i=0;i<L.length;i++)
		printf("顺序表第%d个元素:%d\n",i+1,L.data[i]);
			


	}





