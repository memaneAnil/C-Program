#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit=0;
    //int iCnt=0;
    int iSum=0;

    if(iNo==0)
    {
        return 0;
    }

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
       // iCnt=iCnt+1;
        iSum=iSum+iDigit;
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Please enter the number\n");
    scanf("%d",&iValue);

    iRet=CountDigits(iValue);

    printf("Summation of digit is :%d\n",iRet);

    return 0;
}