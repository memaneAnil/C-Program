#include<stdio.h>

int  AdditionI(int No)
{
    static int iCnt=1;
    int iSum=0;
    while(iCnt<=No)
    {
        iSum=iSum+No;
        No--;
        
    }
    return iSum;
}

int  FactorialR(int No)
{
    static int iCnt=1;
    static int iSum=1;
    if(iCnt<=No)
    {
        iSum=iSum*No;
        No--;
        FactorialR(No);
    }
    return iSum;
}
int main()
{
    int Value=0;
    int iRet=0;
    printf("Enter the number\n");
    scanf("%d",&Value);
    iRet=FactorialR(Value);
    printf("Factorial is :%d\n",iRet);
    return 0;
}