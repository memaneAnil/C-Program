//bitwise operator
//bitwise AND &
//bitwise OR |
//bitwise XOR ^
//4th bit
//0000  0000    0000    0000    0000    0000    0000    0000

//0000  0000    0000    0000    0000    0000    0000    0001
//
//fffffff7
//0xfffffff7

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT OffBit(UINT No,UINT ipos)
{
    UINT iMask=0x00000001;
    UINT iAns=0;

    iMask=iMask<<(ipos-1);
    iMask=~iMask;

    iAns=No & iMask;

    return iAns;
}

int main()
{
    UINT Value=0;
    UINT iRet=0,ipos;

    printf("Enter number\n");
    scanf("%d",&Value);

    printf("Enter the position\n");
    scanf("%d",&ipos);

    iRet=OffBit(Value,ipos);

    if(iRet==true)
    {
        printf("%dth bit is on\n",ipos);
    }
    else
    {
        printf("%dth bit is off\n",ipos);
    }


    return 0;
}