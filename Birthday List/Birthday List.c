#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char name[10];
	int ch;
	do{
	
	printf("-------------------BIRTHDAY LIST APPLICATION-----------------------");
	printf("\n\tName\t\t\tDOB\t\t");
	printf("\n\tDishan\t\tDec 08,2002");
	printf("\n\tUnnati\t\tMar 20,2002");			
	printf("\n\tVrushali\t\t\tNov 02,2002");
	printf("\n\tAnjali\t\t\tAug 28,2001");
	printf("\n\tDaksh\t\t\tJul 20,2002");
	printf("\n--------------------------------------------------------------------");
	printf("\n1-Shravani\n2-Vishakha\n3-Parvati\n4-Yash\n5-Rohan");
	printf("\nEnter your choice :");
	scanf("%d",&ch);
	printf("\n--------------------------------------------------------------------");
	
	switch(ch)
	{
		case 1:
			printf("\nHappy Birthday Dishan");
			printf("\nDec 08,2002");
			printf("\ndishan08@gmail.com");
			break;
		case 2:
			printf("\nHappy Birthday Unnati");
			printf("\nMar 20,2002");
			printf("\nunnati20@gmail.com");
			break;
		case 3:
			printf("\nHappy Birthday Vrushali");
			printf("\nNov 02,2002");
			printf("\nvrushali02@gmail.com");
			break;
		case 4:
			printf("\nHappy Birthday Anjali");
			printf("\nAug 28,2002");
			printf("\nanjali28@gmail.com");
			break;
		case 5:
			printf("\nHappy Birthday Rohan");
			printf("\nJul 20,2002");
			printf("\ndaksh20@gmail.com");
			break;
		default:
			printf("\ninvalid choice..");
	}
	printf("\nDo you want to continue press 6");
	scanf("%d",&ch);
	} while(ch==9);
	printf("\n-----------------THANK YOU-----------------------");
	
	return 0;
	
}

