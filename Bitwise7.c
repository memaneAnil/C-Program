//bitwise operator
//bitwise AND &
//bitwise OR |
//bitwise XOR ^
//12th bit
//0000  0000    0000    0000    0000    1000    0000    0000
//0     0       0       0       0       8       0       0
//00000800
//0x00000800

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool CheckBit(UINT No)
{
    UINT iMask=0x00000800;
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
        printf("12th bit is on\n");
    }
    else
    {
        printf("12th bit is off\n");
    }

    return 0;
}