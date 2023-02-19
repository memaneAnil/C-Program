#include<stdio.h>

int AdditionNonFactors(int iValue)
{
    int iCnt=0;
    int iNfact=0;
    int iSum=0;
    
    
    for(iCnt=1;iCnt<iValue;iCnt++)
    {
        if(iValue%iCnt!=0)
        {
            
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iNo=0;
    int iRet=0;
    printf("Enter the number\n");
    scanf("%d",&iNo);
    iRet=AdditionNonFactors(iNo);

    printf("Addition is %d:\n ",iRet);
    return 0;
}

