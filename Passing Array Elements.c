//Passing Array Elements into funtion one by one by pointer to array method

#include<stdio.h>
void display(int *p)
{
	printf("%d\t",*p);
}
void main()
{
	int marks[]={10,20,30,40,50,60};
	int i;
	for(i=0;i<6;i++)
	{
		display(&marks[i]);
	}
}
