#include <stdio.h>
#include "ArrayList.h"





void LInsert (List * juso, int data) {


	juso->data[juso->now] = data; 

	juso->now++;
}

void ListInit (List * juso) {

	int i;
	for (i=0;i<LIST_SIZE;i++)
	{
		juso->data[i] = '\0';
	}
	juso->now=0;
	
}


int LFirst(List * juso) {

		int tmp;
		tmp = juso->now;
		juso->now=1;

		return juso->data[0];
}

int LNext(List * juso) {

		
		juso->now++;
		return juso->data[juso->now-1];


}

int LRemove(List * juso) {

		int mydata = juso->data[juso->now];
		juso->data[juso->now] = '\0';
		return mydata;


}

int LCount(List * juso) {

	int i,nulls=0;
	for (i=0;i<LIST_SIZE;i++)
	{
		if(juso->data[i] == '\0')		{
		
	nulls++;
		}
	}

	i=i-nulls;
		return i;
	


}

void Lchnow(List * juso, int nowdata) {

juso->now  = nowdata;


	


}
