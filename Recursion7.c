//Factors
//sumFactors 
//Perfect

#include<stdio.h>

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

int  AddFactorsR(int No)
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
        AddFactorsR(No);
    }
    return iSum;

}
int main()
{
    int Value=0;
    int iRet=0;
    printf("Enter the number\n");
    scanf("%d",&Value);
    iRet=AddFactorsR(Value);
    printf("Addition of factor is :%d \n",iRet);
    return 0;
}