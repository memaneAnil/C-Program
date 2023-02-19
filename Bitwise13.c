#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No,UINT ipos)
{
    if(ipos<1 || ipos>32)
    {
        printf("Invalid position,it should be between 1 to 32");
        return false;
    }
    UINT iMask=0x00000001;
    iMask=iMask<<(ipos-1);
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
    int ipos=0;

    printf("Enter number\n");
    scanf("%d",&Value);

    printf("Enter the position\n");
    scanf("%d",&ipos);

    bRet=CheckBit(Value,ipos);

    if(bRet==true)
    {
        printf("%dth bit is on\n",ipos);
    }
    else
    {
        printf("%dth bit is off\n",ipos);
    }

    return 0;
}