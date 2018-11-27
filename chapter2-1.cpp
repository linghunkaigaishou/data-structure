#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#define  Maxsize 100
using namespace std;
//using std::cout;
//using std::endl;

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

int main()
	{
	  clock_t start,finish;
	  double totaltime;
	  start =clock();

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
	  
	  finish=clock();
	  totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
	  cout<<"\n此程序的运行时间为"<<totaltime<<"秒!"<<endl;
	  return 0;


	}





