#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No,UINT ipos1,UINT ipos2)
{
    if(ipos1<1 || ipos1>32 && ipos2<1 || ipos2>32)
    {
        printf("Invalid position,it should be between 1 to 32");
        return false;
    }
    UINT iMask1=0x00000001;
    UINT iMask2=0X00000001;
    UINT iMask;
    iMask1=iMask1<<(ipos1-1);
    iMask2=iMask2<<(ipos2-1);
    UINT Result=0;
    iMask=iMask1|iMask2;
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
    int ipos1=0,ipos2=0;

    printf("Enter number\n");
    scanf("%d",&Value);

    printf("Enter the position\n");
    scanf("%d",&ipos1);

    printf("Enter the position\n");
    scanf("%d",&ipos2);

    bRet=CheckBit(Value,ipos1,ipos2);

    if(bRet==true)
    {
        printf("%dth & %dth bit is on\n",ipos1,ipos2);
    }
    else
    {
        printf("%dth & %dth bit is off\n",ipos,ipos);
    }

    return 0;
}