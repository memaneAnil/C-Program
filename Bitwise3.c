//bitwise operator
//bitwise AND &
//bitwise OR |
//bitwise XOR ^

#include<stdio.h>

typedef unsigned int UINT;

int CountOnBits(UINT No)
{
    int iCnt=0;
    int Digit=0;

    while(No!=0)
    {
        Digit=No%2;

        printf("%d\t",Digit);
        
        if(Digit==1)
        {
            iCnt++;
        }
        No=No/2;
    }
    printf("\n");
    return iCnt;
}
int main()
{
    UINT Value=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&Value);

    iRet=CountOnBits(Value);

    printf("Number of bit which are on are: %d\n",iRet);

    return 0;
}