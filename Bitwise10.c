//bitwise operator
//bitwise AND &
//bitwise OR |
//bitwise XOR ^
//4th bit
//0000  0000    0000    0000    0000    0000    0000    0000

//0000  0000    0000    0000    0000    0000    0000    1000
//
//00000008
//0x00000008

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT ToggleBit(UINT No)
{
    UINT iMask=0x00000008;
    UINT iAns=0;

    iAns=No ^ iMask;

    return iAns;
}

int main()
{
    UINT Value=0;
    UINT iRet=0;

    printf("Enter number\n");
    scanf("%d",&Value);

    iRet=ToggleBit(Value);

    
    printf("updated number is %d\n",iRet);
    

    return 0;
}