//Factors
//sumFactors 
//Perfect

#include<stdio.h>

int DigitCountI(int No)
{
    int Digit=0,iCnt=0;

    while(No!=0)
    {
        Digit=No%10;
        iCnt++;
        No=No/10;
    } 
    return iCnt;  
}

int DigitAddR(int No)
{
    int Digit=0;
    
    static int iSum=0;
    if(No!=0)
    {
        Digit=No%10;
        iSum=iSum+Digit;
        No=No/10;
        DigitAddR(No);
    } 
    return iSum;  
}
int main()
{
    int Value=0;
    int iRet=0;
    printf("Enter the number\n");
    scanf("%d",&Value);
    iRet=DigitAddR(Value);

    printf("Addition of digit are : %d\n",iRet);
    return 0;
}