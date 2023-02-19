#include<stdio.h>
#include<stdlib.h>

int CalculateFrequency(int Arr[],int iSize,int iNumber)//-------------------------
{
    int iCnt=0,iCount=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNumber)
        {
            iCount++;
        }
        
    }
    return iCount;
}

int main()
{
    int *ptr=NULL;
    int iLength=0;
    int iNumber=0;
    int iRet=0;
    int iCnt=0;

    
    printf("Enter number of element\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength*sizeof(int));

    printf("please enter the elements\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter the number to search\n");
    scanf("%d",&iNumber);
    printf("----------------------------\n");
    
    iRet=CalculateFrequency(ptr,iLength,iNumber);

    printf("----------------------------\n");

    printf("Frequency of %d is :%d\n",iNumber,iRet);

    free(ptr);

    return 0;
}