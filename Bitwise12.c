//bitwise operator
//bitwise AND &
//bitwise OR |
//bitwise XOR ^
//4th bit
//0000  0000    0000    0000    0000    0000    0000    0000

//0000  0000    0001    0000    0000    0000    0000   0000
//
//00100000
//0x00100000

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool CheckBit(UINT No)
{
    UINT iMask=0x00100000;
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
        printf("21th bit is on\n");
    }
    else
    {
        printf("21th bit is off\n");
    }

    return 0;
}