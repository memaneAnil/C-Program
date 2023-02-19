#include<stdio.h>

int CountDigits(int iNo)
{
    //int iDigit=0;
    int iCnt=0;

    if(iNo==0)
    {
        return 1;
    }

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
       // iDigit=iNo%10;
        iNo=iNo/10;
        iCnt=iCnt+1;
    }
    return iCnt;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Please enter the number\n");
    scanf("%d",&iValue);

    iRet=CountDigits(iValue);

    printf("Number of digits are :%d\n",iRet);

    return 0;
}