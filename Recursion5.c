//Factors
//sumFactors 
//Perfect

#include<stdio.h>

int  FactorsI(int No)
{
    int iCnt=1;

    while(iCnt<No)
    {
        if(No%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
        iCnt++;
    }

   
}

int  FactorsR(int No)
{
    static int iCnt=1;

    if(iCnt<No)
    {
        if(No%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
        iCnt++;
        FactorsR(No);
    }

}
int main()
{
    int Value=0;
    
    printf("Enter the number\n");
    scanf("%d",&Value);
    FactorsI(Value);
    return 0;
}