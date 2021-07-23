//dangling pointer program
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int *ptr,a;
ptr=(int*)malloc(sizeof(int));
a=900;
ptr=&a;
free(ptr);
getch();
}