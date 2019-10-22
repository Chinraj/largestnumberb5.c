#include<stdio.h>
#include<conio.h>
void main()
{
	int n,p=0;

	printf("enter total number of numbers");
	scanf("%d",&n);
	int larg[n];
    for(int i=0;i<n;i++)
	{
		printf("enter no:");
		scanf("%d",&larg[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(p<larg[i])
			p=larg[i];
	}
	printf("the largest number is %d",p);
}

