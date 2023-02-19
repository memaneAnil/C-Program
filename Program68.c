#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iSize)  // int Addition(int *Arr,int iSize)
{
    int iSum=0;
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int *iPtr=NULL;
    int iSize=0;
    int iCnt=0;
    int iResult=0;
    printf("Please enter the size of array\n");
    scanf("%d",&iSize);

    iPtr=(int*)malloc(sizeof(int)*iSize);

    printf("Enter the array elements\n");
  
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",iPtr[iCnt]);
    }

    iResult=Addition(iPtr,iSize);

    printf("Addition is :%d \n:",iResult);

    free(iPtr);

    return 0;
}