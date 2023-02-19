#include<stdio.h>

void DisplayTable(int iValue)
{
	int iCnt=0;
	
	printf("_________________________\n");
	
	
        printf("Table of %d is :\n",iValue);
    
        printf("_________________________\n");
	
	for(iCnt=1;iCnt<=10;iCnt++)
	{
		printf("%d\n",iValue*iCnt);
	}
	printf("_________________________\n");
}


int main()
{
	int iNo;
	
	printf("Enter the number\n");
	
	scanf("%d",&iNo);
	
	DisplayTable(iNo);
	
	return 0;
}
