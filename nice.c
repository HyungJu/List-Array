#include <stdio.h>
#include "ArrayList.h"



int main() {
	List list;
	int data = 0;
	ListInit(&list);
	LInsert(&list, 11);
	LInsert(&list, 12);	
	LInsert(&list, 12);	
	LInsert(&list, 12);	
	LInsert(&list, 12);	
	LInsert(&list, 12);	

	LInsert(&list, 12);	
	Lchnow(&list,0);
	printf ("%d\n",LFirst(&list));

	printf ("%d",LCount(&list));
	return 0;
}
