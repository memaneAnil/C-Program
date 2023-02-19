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

int  AdditionR(int No)
{
    static int iCnt=1;
    static int iSum=0;
    if(iCnt<=No)
    {
        iSum=iSum+No;
        No--;
        AdditionR(No);
    }
    return iSum;
}
int main()
{
    int Value=0;
    int iRet=0;
    printf("Enter the number\n");
    scanf("%d",&Value);
    iRet=AdditionR(Value);
    printf("Addition is :%d\n",iRet);
    return 0;
}