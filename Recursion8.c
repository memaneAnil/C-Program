//Factors
//sumFactors 
//Perfect

#include<stdio.h>
#include<stdbool.h>
int  FactorsI(int No)
{
    int iCnt=1;
    int iSum=0;
    while(iCnt<No)
    {
        if(No%iCnt==0)
        {
            iSum=iSum+iCnt;
        }
        iCnt++;
    }

   
}

bool  PerfectR(int No)
{
    static int iCnt=1;
    static int iSum=0;
    while(iCnt<No)
    {
        if(No%iCnt==0)
        {
            iSum=iSum+iCnt;
        }
        iCnt++;
        PerfectR(No);
    }
    if(iSum==No)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int Value=0;
    bool bRet=0;
    printf("Enter the number\n");
    scanf("%d",&Value);
    bRet=PerfectR(Value);
    if(bRet==true)
    {
        printf("Perfect number\n");
    }
    else
    {
        printf("Not a perfect no\n");
    }
    return 0;
}