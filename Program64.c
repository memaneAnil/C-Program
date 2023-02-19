#include<stdio.h>


int MaxDigit(int iNo)
{
    int iDigit=0,iMax=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {

        iDigit=iNo%10;
        if(iMax<iDigit)
        {
            iMax=iDigit;
        }
        if(iMax==9)
        {
            break;
        }

        iNo=iNo/10;
    }
    return iMax;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Please enter the number\n");
    scanf("%d",&iValue);
    iRet=MaxDigit(iValue);

    printf("%d is largest digit in %d\n",iRet,iValue);
   
    return 0;
}