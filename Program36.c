#include<stdio.h>

void DisplayNonFactors(int iValue)
{
    int iCnt=0;
    int iNfact=0;
    
    for(iCnt=1;iCnt<iValue;iCnt++)
    {
        if(iValue%iCnt!=0)
        {
            
            printf("%d  ",iCnt);
        }
    }
}

int main()
{
    int iNo=0;

    printf("Enter the number\n");
    scanf("%d",&iNo);
    DisplayNonFactors(iNo);
    return 0;
}