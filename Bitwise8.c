//bitwise operator
//bitwise AND &
//bitwise OR |
//bitwise XOR ^
//7,8,9th bit
//0000  0000    0000    0000    0000    0001    1100    0000
//0     0       0       0       0       0      0       0
//000001c0
//0x000001c0

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool CheckBit(UINT No)
{
    UINT iMask=0x000001c0;
    UINT Result=0;

    Result=No & iMask;

    if(Result==iMask)
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
    UINT Value=0;
    bool bRet=false;

    printf("Enter number\n");
    scanf("%d",&Value);

    bRet=CheckBit(Value);

    if(bRet==true)
    {
        printf("7,8,9th bit is on\n");
    }
    else
    {
        printf("7,8,9th bit is off\n");
    }

    return 0;
}