#include<stdio.h>
#include<stdlib.h>

int countEven(int Arr[],int iSize)//-------------------------
{
    int iCnt=0,iEvenCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}

int main()
{
    int *ptr=NULL;
    int iLength=0,iRet=0;
    int iCnt=0;

    printf("Enter number of element\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength*sizeof(int));

    printf("please enter the elements\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("----------------------------\n");
    
    iRet=countEven(ptr,iLength);

    printf("----------------------------\n");

    printf("Number of even elements are :%d\n",iRet);

    free(ptr);

    return 0;
}