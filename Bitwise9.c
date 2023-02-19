//bitwise operator
//bitwise AND &
//bitwise OR |
//bitwise XOR ^
//4th bit
//0000  0000    0000    0000    0000    0000    0000    0000

//1111  1111    1111    1111    1111    1111    1111    0111
//
//fffffff7
//0xfffffff7

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT OffBit(UINT No)
{
    UINT iMask=0xFFFFFFF7;
    UINT iAns=0;

    iAns=No & iMask;

    return iAns;
}

int main()
{
    UINT Value=0;
    UINT iRet=0;

    printf("Enter number\n");
    scanf("%d",&Value);

    iRet=OffBit(Value);

    
    printf("updated number is %d\n",iRet);
    

    return 0;
}