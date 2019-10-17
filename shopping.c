#include<stdio.h>
struct shop
{
	char name[50];
	long id;
	float cost;
	float dis;
}s[50];

void main()
{ 
    int i;
	for(i=0;i<5;i++)
	{
	printf("Enter the name of the product : \n");
	scanf("%s",s[i].name);
	
	printf("Enter the ID of the product : \n");
	scanf("%ld",&s[i].id);
	
	printf("Enter the cost of the product : \n");
	scanf("%f",&s[i].cost);
	
	printf("Enter the discount on the product purchased : \n");
	scanf("%f",&s[i].dis);
}
for(i=0;i<5;i++)
{
		printf("\n      Display Information \n");
		printf(" Name of the product : %s",s[i].name);
		printf("\n ID of the product : %ld",s[i].id);
		printf("\n Cost of the product : %f",s[i].cost);
		printf("\n Discount  on the product : %f",s[i].dis);
		printf("%c",'%');
	
}
}
