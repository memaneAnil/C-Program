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

int DigitCountR(int No)
{
     int Digit=0;
     static int iCnt=0;
    if(No!=0)
    {
        Digit=No%10;
        iCnt++;
        No=No/10;
        DigitCountR(No);
    } 
    return iCnt;  
}
int main()
{
    int Value=0;
    int iRet=0;
    printf("Enter the number\n");
    scanf("%d",&Value);
    iRet=DigitCountR(Value);

    printf("Number of digit are : %d\n",iRet);
    return 0;
}