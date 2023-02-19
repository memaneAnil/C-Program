#include<stdio.h>
#include<stdbool.h>

//0000 1111  0000    1111    0000    1111    0000    1111    
//
//0f0f0f0f
//0x0f0f0f0f

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT ToggleBit(UINT No)
{
    UINT iMask=0x0f0f0f0f;
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